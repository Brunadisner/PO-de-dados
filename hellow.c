#include <stdio.h>
#include <time.h>

int main(){
    clock_t start, end;

    start  = clock();

    for (int i = 0; i < 100; i++)//for sem chave funciona só com uma linha - unitário
        printf("Aqui o i %d\n ",i);
    
    end = clock();
    
    double difTempo = ((double) end - start)/CLOCKS_PER_SEC;
    
    printf("\n\n\n\t -> Tempo em s: %lf, Tempo em ms %lf", difTempo, difTempo*1000);

    return 0;

}
