#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	int num_inteiro = 2147483647; //Este é o número máximo dos inteiros
	float num_real = 10.50;
	char caractere = 'c';
	
	//mostrando as 3 variáveis em um único printf
	printf(" num_inteiro=%d \n num_real=%.2f \n caractere=%c \n",num_inteiro,num_real,caractere);
	
	//Fazendo a leitura com o scanf do número inteiro
	printf("\nDigite um número inteiro: ");
	scanf("%d",&num_inteiro);
	printf("O novo valor de num_inteiro=%d \n\n",num_inteiro);

	//Fazendo a leitura com o scanf do número real
	printf("Digite um número real(float): ");
	scanf("%f",&num_real);
	printf("O novo valor de num_real=%.2f \n\n",num_real);	

	//Fazendo a leitura com o scanf do número real
	printf("Digite um caractere: ");
	fflush(stdin);
	scanf("%c",&caractere);
	printf("O novo valor de caractere=%c \n\n",caractere);		
	
	system("pause");
	return 0;
}