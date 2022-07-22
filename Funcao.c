#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

// Função
void retangulo (int, int);

int main(int argc, char *argv[]) {
	
	retangulo (5, 6);
	printf ("\n");
	retangulo (4, 4);
	printf ("\n");
	retangulo (2, 4);
	printf ("\n");
	
	return 0;
}

// Função
void retangulo (int alt, int lar) {
	int lin, col;
	
		printf ("\n");
		for (lin=0; lin <alt; lin++) {
			for (col=0; col < lar; col++) 
				printf ("\xDB");
			printf ("\n");
		}
}
