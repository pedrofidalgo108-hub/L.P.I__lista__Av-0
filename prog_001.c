//Impressão de Números de 1 a N: Escreva um programa que leia um número inteiro positivo N e imprima todos os números de 1 até N.


#include<stdio.h>

void main(){
    int num;
    printf("Digitite um número:");
    scanf("%d", &num);
    if(num >= 1){
        for (int i = 1; i <= num; i++){
            printf("%d ", i);
        }
     }else{
        printf("Número inválido.");
     }
}    