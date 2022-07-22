#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	float numero1, numero2;
	
	printf ("Informe o primeiro numero: ");
	scanf ("%f", &numero1);
	printf ("Informe o segundo numero: ");
	scanf ("%f", &numero2);
	
	if (numero1>numero2) {
		printf ("O primeiro numero e maior");
	} 
	if (numero1<numero2) {
		printf ("O segundo numero e maior");
	} 
	if (numero1==numero2) {
		printf ("Os numeros são iguais");
	}
	
	return 0;
}
