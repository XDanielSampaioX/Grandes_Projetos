#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	float raio, area;
	
	printf ("Informe o raio da circunfência: ");
	scanf ("%f", &raio);
	
	area = 3.14 * pow(raio,2);
	
	printf ("Área da cricuferencia é: %.1f", area);
	
	return 0;
}
