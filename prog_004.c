//Conversão de Temperatura: Escreva um programa que converta uma temperatura fornecida em graus Celsius para Fahrenheit e vice-versa.

#include<stdio.h>

void main(){
    float num, conv;
    char med;
    printf("Digite a temperatura seguida da unidade de medida (C para Celsius, F para Fahrenheit)\n");
    printf("Exemplo: 100C ou 212F\n");
    printf("Digite a temperatura e a unidade de medida:");
    scanf("%f%c", &num, &med);
    if(med == 'C' || med == 'c'){
        conv = (num * 9/5) + 32;
        printf("%.2fC = %.2fF", num, conv);
    }else if (med == 'F' || med == 'f'){
        conv = (num - 32) * 5/9;
        printf("%.2fF = %.2fC", num, conv);
    }else{
        printf("Unidade de medida inválida.");
    }
}
