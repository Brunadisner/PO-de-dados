#include <stdio.h>
void cocktail_sort(int vetor[], int n) {
    int inicio,final, trocas,i,aux;
    inicio = 0;
    final = n - 1;
    trocas = 0; 
    while(trocas == 0 && inicio < final)//Se não houver troca de posições ou o inicio
    {                                   //ultrapassar o fim, o vetor esta ordenado
        trocas = 1; 
        //Este for é a “ida” para a direita
        for(i = inicio; i < final; i = i + 1)
        {
            if(vetor[i] > vetor[i + 1])   //indo pra direita:testa se o próximo é maior
            {   //se o proximo é maior que o atual,
                //troca as posições
                aux=vetor[i];
                vetor[i]=vetor[i+1];
                vetor[i+1]=aux;
                trocas = 0;
            }
        }
        /* diminui o final porque o elemento com o maior valor 
        já está na direita (atual posição fim)*/
        final = final - 1; 
        //Este for é a “ida” para a esquerda
        for(i = final; i > inicio; i = i - 1)
        {  if(vetor[i] < vetor[i - 1]) 
            {
                aux=vetor[i];
                vetor[i]=vetor[i-1];
                vetor[i-1]=aux;
                trocas = 0;
            }
        }
        /*aumenta o inicio porque o menor valor já está
        na posição inicial  */
        inicio = inicio + 1;  
    }
 }

 int main()
{

	int vetor[10] = {5,4,3,2,1,10,-5,50,7,0};
	int n = 10;
    
    printf("Valore desordenados ");
    for(int q = 0;q < n; q++){
        printf("%d ",vetor[q]);
        }
    printf("\n");


	cocktail_sort(vetor, n);
    

    printf("Valore ordenados ");
    for(int q = 0;q < n; q++){
        printf("%d ",vetor[q]);
        }
    printf("\n");

	
	return 0;
}