/*Dado dois número inteiro positivo n, calcular e imprimir a sua soma.*/

#include <stdio.h>
int main(){

int num1, num2, soma;

printf("Insira um numero: ");
scanf("%d", &num1);
printf("\nInsira o segundo numero: ");
scanf("%d", &num2);
soma = num1 + num2;
printf("\nA soma dos numeros e de: %d\n", soma);

return 0;
}