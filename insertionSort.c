#include <stdio.h>

void insertion_sort(int v[], int n){

	for (int i = 1; i <=n-1; i++ ){
		int pivo = v[i];
        printf("Pivo eh %d\n",pivo);
		int j = i-1;
		while(j>=0 && v[j]>pivo){
            
			v[j+1] = v[j];
			j--;
		}
		v[j+1] = pivo;
	}

}


int main()
{
    int n = 6;
	int vetor[6] = {34,54,1,2,99,-1};
	
    insertion_sort(vetor, n);
	
    for(int i = 0;i < n; i++){
		printf("%d  ",vetor[i]);
	}
	printf("\n");

	
	return 0;
}