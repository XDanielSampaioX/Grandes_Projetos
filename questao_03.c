#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {

	int i;
	float media, nota;
	
	for (i=1; i<=4; i++){
		printf ("Digite a %d° nota: ", i);
		fflush (stdin);
		scanf ("%f", &nota);
		
		media = nota+ media;
		}
		
		printf ("Sua média é: %.1f",media/4.0);
		
		return 0;
}

