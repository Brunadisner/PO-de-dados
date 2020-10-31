#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void quicksort (int *vet, int inicio, int fim);
int particiona (int *vet, int inicio, int fim);

int particiona (int *vet, int inicio, int fim) {
    int pivo = vet[inicio];
    int aux, esq, dir;
    esq = inicio;
    dir = fim;
    while(esq<dir){
        while(vet[esq]<=pivo){
            esq++;
        }
        while (vet[dir] > pivo){
            dir--;
        }
        if(esq < dir){
            aux = vet[esq];
            vet[esq] = vet[dir];
            vet[dir] = aux;
        }
        
        
    }
    vet[inicio] = vet[dir];
    vet[dir] = pivo;
    return dir;
}

void quicksort (int *vet, int inicio, int fim) {
    int pivo;
    if (inicio < fim) {
        pivo = particiona (vet, inicio, fim);
        quicksort(vet, inicio, pivo-1);
        quicksort(vet, pivo+1, fim);
    }
}


void main(){
    int vet[9] = {8,-7,15,10,15,-2,0,100,3};
    int n=9;

    printf("Valore desordenados ");
    for(int q=0;q<n;q++){
        printf("%d ",vet[q]);
        }
    printf("\n");

    quicksort(vet, 0, n);

    printf("Valore ordenados ");
    for(int q=0;q<n;q++){
        printf("%d ",vet[q]);
        }
    printf("\n");
}