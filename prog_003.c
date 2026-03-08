//Soma de Números em um Array: Faça um programa que leia 5 números inteiros, armazene-os em um array e calcule a soma total desses números.

#include<stdio.h>

void main(){
    int num[5], som = 0;
    printf("Digite 5 números inteiros:\n");
    for(int i = 0; i < 5; i++){
        scanf("%d", &num[i]);
}
    for(int i = 0; i < 5; i++){
        som += num[i];
    }
    printf("A soma total dos números é: %d", som);
}