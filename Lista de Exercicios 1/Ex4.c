/*Faça um programa que solicite o ano em que uma pessoa nasceu e retorne sua idade. */

#include <stdio.h>
int main(){
    int ano, idade, atual;
    printf("Digite o ano que voce nasceu: ");
    scanf("%d", &ano);
	
	printf("Digite o ano atual: ");
	scanf("%d", &atual);
    
	idade = atual - ano;
    printf("\nA sua idade e: %d\n", idade);

return 0;
}