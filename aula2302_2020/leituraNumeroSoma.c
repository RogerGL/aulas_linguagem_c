#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
void main(){
	int num1, num2, soma;
	setlocale(LC_ALL,"Portuguese");
	printf("Digite o primeiro número: ");
	scanf("%i",&num1);
	printf("\nDigite o segundo número: ");
	scanf("%i",&num2);
	soma = num1 + num2;
	printf("\nA soma é: %i\n\n",soma);	
}