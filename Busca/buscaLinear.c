#include <stdio.h>

int BuscaLinear(int v[], int n, int proc){
    
    for(int i = 0; i <= n-1; i++){

        if(v[i]==proc){
            return i;
        }
    }
    return -1;
}




int main(int argc, char const *argv[])
{
    
    int vet[5] = {8,7,5,2,6};
    int n = 5;
    int busca;
    int p = 6;
    busca = BuscaLinear(vet,n,p);
    printf("O elemento estava em %d \n", busca);




    return 0;
}
