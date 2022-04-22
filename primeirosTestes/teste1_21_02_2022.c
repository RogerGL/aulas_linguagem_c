
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main (){
	setlocale(LC_ALL, "Portuguese");
	int a = 10;
	float b = 10.50;
	char c = 'V';
	printf("Resultado: %d\n Resultado: %f\n Letra: %c\n", a, b, c);
	system("pause");
    
}