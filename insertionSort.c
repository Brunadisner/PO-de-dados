#include <stdio.h>

int insertionsort(int *v, int n) { 
    int i, c, j, comparacoes = 0, trocas = 0; 
    for (int i = 0; i < n; i++){
        int c = v[i];
        int j = i - 1;

        while(j >= 0 ){
            comparacoes++;
            if(v[j] > c){
                v[j + 1] = v[j];
                j--;
                trocas++;
            } else {
                break;
            }
        }
        v[j + 1] = c;
    }
    
    printf("Comparacoes: %d\n", comparacoes);
    printf("Trocas: %d\n", trocas);
}


int main()
{
    int n = 6;
	int vetor[6] = {5,3,2,6,1,4};
	
    insertionsort(vetor, n);
	
    for(int i = 0;i < n; i++){
		printf("%d  ",vetor[i]);
	}
	printf("\n");

	
	return 0;
}