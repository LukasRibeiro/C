/*Crie um programa por meio do qual o usu�rio ir� digitar a opera��o desejada e dois valores, ao final dever� ser exibido o resultado da opera��o. 
Op��es dispon�veis: 1 � Divis�o; 2 � resto da divis�o; 3 � adi��o; 4 � multiplica��o.
Obs: Utilizar:  do-while (para o menu) e o comando switch.       
*/

#include <stdio.h>
int main(){

    printf("Entre com a opera��o desejada!\n\n");
    printf("\n Digite 1 para somar!\n");
    printf("\n Digite 2 para subtrair!\n");
    printf("\n Digite 3 para multiplicar!\n");
    printf("\n Digite 4 para dividir!\n");

    int entrada, numero1, numero2;

    printf("\n\nEntre com um dos numeros de acordo com a opera��o desejada: \n");
    scanf("%d", &entrada);


    do{

    switch (entrada){

        case 1:{
            printf("\nDigite dois valores para se somar: \n");
            scanf("%d %d", &numero1, &numero2);
            printf("\nO valor da soma e igual a: %d\n", numero1 + numero2);
            break;
        }

        case 2:{
            printf("\nEntre com dois valores para se subtrair: \n");
            scanf("%d %d", &numero1, &numero2);
            printf("\nO valor da subtra��o e igual a: %d\n", numero1 - numero2);
            break;
        }

        case 3:{
            printf("\nEntre com dois valores para multiplicar: \n");
            scanf("%d %d", &numero1, &numero2);
            printf("\no valor da multiplica��o e igual a: %d\n", numero1 * numero2);
            break;
        }

        case 4:{
            printf("\nEntre com dois valores para dividir: \n");
            scanf("%d %d", &numero1, &numero2);
            printf("\nO valor da divisao e igual a: %d\n", numero1/numero2);
            break;
        }
        case 5: {
            entrada = 0;
            break;
        }
    }
}  while (entrada != 0);

}
