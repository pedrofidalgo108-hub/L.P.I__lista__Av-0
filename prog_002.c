//Cálculo de Fatorial: Crie um programa que calcule e imprima o fatorial de um número inteiro fornecido pelo usuário.

#include<stdio.h>

void main(){
    int num, fatorial = 1;
    printf("Digitite um número:");
    scanf("%d", &num);
    if(num >= 0){
        for (int i = 1; i <= num; i++){
            fatorial *= i;
        }
        printf("%d! = %d", num, fatorial);
    }else{
        printf("Número inválido.");
    }
}