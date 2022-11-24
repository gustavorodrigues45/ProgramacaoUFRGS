/* Este programa pega dois inteiros, os soma e exibe o resultado na tela */
#include <stdio.h>
int main(void)
{
float a, b; //Declaracao da variavel com os par�metros int soma; //Declarcaoo da variavel com o
float soma;
printf("Insira o valor de a: ");
scanf("%f",&a);
printf("Insira o valor de B: ");
scanf("%f",&b);
soma = a + b;
printf("Resultado da soma: %.4f\n", soma);
getchar();
printf("Terminou");
/* O comando getchar() paraa o programa ate que seja digitado algum caracter */
return 0;
}
