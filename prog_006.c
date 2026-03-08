//Verificação de Número Primo: Desenvolva um programa que leia um número inteiro e determine se ele é um número primo ou não.
#include<stdio.h>

void main(){
    int num, ver=1;
    printf("Digitite um número inteiro:");
    scanf("%d", &num);
    if(num < 2){
        ver = 0;
    }else if(num != 2 && num % 2 == 0){
        ver = 0;
    }else{
        for (int i = 2; i <= num / 2; i++){
            if (num % i == 0){
                ver = 0;
                break;
            }
        }
    }
    if(ver){
        printf("%d é um número primo.", num);
    }else{
        printf("%d não é um número primo.", num);
    }
}