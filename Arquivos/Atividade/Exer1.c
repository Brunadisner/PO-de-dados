#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/*1. Faça um programa que lê o conteúdo de um arquivo de texto e cria outro 
arquivo com o mesmo conteúdo, mas com todas as letras minúsculas convertidas para maiúsculas.*/


int main(int argc, char const *argv[])
{
    FILE *file;
    char s[100];
    int i;


    file = fopen("text.b","rt");
    if (file == NULL){
        printf("Não deu certo ");
        return 1;
    }
    for ( i = 0; i < 100; i++)
    {
        fscanf(file,"%c",&s[i]);
    }
    //strupr(file);
    fclose(file);
    file = fopen("teste.aul","wt");
    if (file == NULL){
        printf("Não deu certo ");
        return 1;
    }
    for ( i = 0; i < 100; i++)
    {
       fprintf(file, "%c",toupper(s[i]));
    }
    fclose(file);
    


    return 0;
}
