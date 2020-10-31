#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void criaheap (int *vet, int n, int i);
void heapsort (int *vet, int n);
void swap(int *x, int *y);

void swap(int *x, int *y){ 
   int temp;
   temp=*x;
   *x=*y;
   *y=temp;
}
void criaheap (int *vet, int n, int i) {
    int aux;
    int maior = i;
    int esquerda = 2*i + 1;
    int direita = 2*i + 2;

    if (esquerda < n && vet[esquerda] > vet[maior]) {
        maior = esquerda;
    }

    if (direita < n && vet[direita] > vet[maior]) {
        maior = direita;
    }

    if (maior != i) {
        swap (&vet[i], &vet[maior]);
        criaheap(vet, n, maior);
    }
}

void heapsort (int *vet, int n) {
    int k;
    int aux;
    for (k = (n/2 - 1); k >= 0; k--) {
        criaheap (vet, n, k);
    }

    for (k = n-1; k >= 0; k--) {
        swap(&vet[0], &vet[k]);
        criaheap(vet, k, 0);
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

    heapsort(vet, n);

    printf("Valore ordenados ");
    for(int q=0;q<n;q++){
        printf("%d ",vet[q]);
        }
    printf("\n");
}