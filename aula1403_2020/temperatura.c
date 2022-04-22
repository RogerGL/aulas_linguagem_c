#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
void main(){
 float c, f;
 setlocale(LC_ALL,"portuguese");
 printf("\nDigite o valor em graus celsius: ");
 scanf("%f",&c );
 f= (c*9)/5+32;
 printf("\n %.2f celcius resultará em %.2f Fahrenheit\n\n",c,f);
 system("pause");
}