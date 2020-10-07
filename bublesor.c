#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void bubble_sort(int v[], int n){
	int comp, trocas=0;
	for(int i = n-1; i>=1; i--){
		 int flag = 0;
		
		for(int j = 0; j<=i-1; j++){

			if (v[j] > v[j+1]){
				comp+=1;

				int troca = v[j];
				v[j] = v[j+1];
				v[j+1] = troca;
				trocas+=1;
				
				flag = 1;
				


			}
			
			

		}
		if (flag == 0){
				break;

			}
			
	}
printf("Comparacoes: %d\n trocas: %d\n", comp,trocas);
}

/*void selection_sort(int v[], int n){

	int menor;

	for(int i = 0; i<=n-2; i++){

		menor = i;

		for(int j = i+1; j <= n-1; j++){

			if(v[menor] > v[j]){

				menor = j;
			}

	    } 
	    int troca = v[i];
	    v[i] = v[menor];
	    v[menor] = troca; 
}

}

void insertion_sort(int v[], int n){

	for (int i = 1; i <=n-1; i++ ){
		int pivo = v[i];
		int j = i-1;
		while(j>=0 && v[j]>pivo){
			v[j+1] = v[j];
			j--;
		}
		v[j+1] = pivo;
	}

}*/


int main()
{

	int vetor[5] = {5,4,3,2,1};
	int n = 5;
	//int vetor1[5] = {55,45,35,5,15};
	//int vetor2[5] = {55,45,35,5,15};

	bubble_sort(vetor, n);
	//selection_sort(vetor1, n);
	//insertion_sort(vetor2,n);

	for(int i = 0;i < 5; i++){
		printf("%d  ",vetor[i]);
	}
	printf("\n");

	
	return 0;
}