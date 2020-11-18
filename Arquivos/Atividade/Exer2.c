#include <stdio.h>
#include <stdlib.h>




int main(int argc, char const *argv[])
{
    char entrada[30];
    int cont=0;
    char c = ' ';
    FILE *file;

    printf("Digite o nome do arquivo \n");
    scanf("%s",entrada);
    
    file = fopen(entrada,"rt");
    
    if(file == NULL){
        printf("deu erro\n");
    }
    c = fgetc(file);
    while(!feof(file)){
        while (!feof(file) && (c == ' ' || c == '\n')) c = fgetc(file);
           if (!feof(file)){
              cont++;
              while (!feof(file) && c != ' ' && c != '\n'){
                  c = fgetc(file);
              } 
            }
    }


    printf("O total de palavras deu %d \n",cont);
   
    


    fclose(file);




    return 0;
}
