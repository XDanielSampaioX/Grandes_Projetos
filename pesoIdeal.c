#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	float altura, pesoIdeal;
	char sexo;
	
	
	
	printf ("Insira sua altura:\n");
	scanf ("%f", &altura);
	
	pesoIdeal = ((72.7*altura) - 58);
	

	printf ("%.2f", pesoIdeal);
	
	return 0;
}
