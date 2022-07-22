#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	float nota1, nota2, media;
	
	printf ("Informe a primeira nota: ");
	scanf ("%f", &nota1);
	printf ("Informe a primeira nota: ");
	scanf ("%f", &nota2);
	
	media = (nota1+nota2)/2;
	
	if (media == 7) {
		printf ("Aprovado !");
	} if (media<7) {
		printf ("Reprovado !");
	} if (media == 10) {
		printf ("Aprovado com Distinção ! !");
		
	}
	return 0;
}
