/*Faça um programa que solicite um número (inteiro/positivo) e imprima-o. */

#include <stdio.h>
int main(){

    int num1;
    printf("Insira um numero inteiro positivo: ");
    scanf("%d", &num1);
    printf("\nO numero inserido foi: %d\n", num1);
    return 0;
}