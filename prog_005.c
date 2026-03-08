//Contagem de Caracteres em uma String: Crie um programa que leia uma string e conte quantos caracteres (incluindo espaços) ela possui.

#include<stdio.h>
#include<stdlib.h>

void main(){
    int teto = 100, tam = 0;
    char *str = malloc(teto * sizeof(char)), c;
    printf("Digite uma string:\n");
    while((c = getchar()) != '\n' && c != EOF){
        if(tam == teto - 1){
            teto += 100;
            str = realloc(str, teto*sizeof(char));
        }
        str[tam++] = c;
    }
    str[tam] = '\0';
    printf("A string digitada:\n'%s'\npossui %d caracteres.", str, tam);
    free(str);  
}