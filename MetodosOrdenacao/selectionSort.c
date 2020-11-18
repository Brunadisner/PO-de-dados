#include <stdio.h>

void selection_sort(int v[], int n){

	int menor, trocas=0, comp=0;

	for(int i = 0; i<=n-2; i++){


		menor = i;

		for(int j = i+1; j <= n-1; j++){
			
			comp+=1;

			if(v[menor] > v[j]){

				
				menor = j;
				printf("menor %d \n",menor);
				
			}
			

	    } 
		if (menor != i){
			int troca = v[i];
			v[i] = v[menor];
			v[menor] = troca; 
			trocas+=1;
		}
	
		

}
 printf("Comparacoes: %d\n trocas: %d\n", comp,trocas);

}

int main()
{

	int n = 5;
	int vetor[5] = {5,4,3,2,1};
	
    selection_sort(vetor, n);
	
    for(int i = 0;i < n; i++){
		printf("%d  ",vetor[i]);
	}
	printf("\n");

	
	return 0;
}

