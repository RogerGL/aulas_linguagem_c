#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main (){
	setlocale(LC_ALL, "Portuguese");
	
	int a = 7;
	float b = 7.77;
	char c = 'V';
	
	printf("A: %d\nB: %.2f\nC: %c\n", a, b, c);
	
	printf("Digite um numero: ");
	scanf("%d", &a);
	printf("Novo valor de A= %d \n", a);
	
	printf("Digite um numero: ");
	scanf("%f", &b);
	printf("Novo valor de B= %.2f \n", b);
	
	printf("Digite uma letra: ");
	scanf("%c", &c);
	printf("Nova letra de C= %c\n", c);
	
	
	system("pause");
    
}