#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void quicksort (int *vet, int inicio, int fim);
int particiona (int *vet, int inicio, int fim);

int particiona (int *vet, int inicio, int fim) {
    int pivo = vet[inicio];
    int aux, esq, dir;
    esq = inicio + 1;
    dir = fim;
    while(esq <= dir){
        if(vet[esq] <= pivo){
            esq++;
        }
        else if (vet[dir] > pivo){
            dir--;
        }
        else if(esq <= dir){
            aux = vet[esq];
            vet[esq] = vet[dir];
            vet[dir] = aux;
            esq++;
            dir--;
        }
        
        
    }
    vet[inicio] = vet[dir];
    vet[dir] = pivo;
    return dir;
}

void quicksort (int *vet, int inicio, int fim) {
    int pivo;
    printf("Inicio %d \n fim %d \n",inicio,fim);
    if (inicio < fim) {
        pivo = particiona (vet, inicio, fim);
        quicksort(vet, inicio, pivo-1);
        quicksort(vet, pivo+1, fim);

    }
}


void main(){
    int vet[13] = {15,5,4,3,0,2,6,11,-1,10,7,8,-3};
    int n=13;

    printf("Valore desordenados ");
    for(int q=0;q<n;q++){
        printf("%d ",vet[q]);
        }
    printf("\n");

    quicksort(vet, 0, n-1);

    printf("Valore ordenados ");
    for(int q=0;q<n;q++){
        printf("%d ",vet[q]);
        }
    printf("\n");
}