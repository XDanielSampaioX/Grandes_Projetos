#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	float raio, area;
	
	printf ("Informe o raio da circunf�ncia: ");
	scanf ("%f", &raio);
	
	area = 3.14 * pow(raio,2);
	
	printf ("�rea da cricuferencia �: %.1f", area);
	
	return 0;
}
