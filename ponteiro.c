#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void perm(int *p, int *q) {
int *x;
x = *p;
*p = *q;
*q = x;
}

void main(void) {
int a=3, b=7;
perm(&a,&b);
printf("%d %d", a, b);
	
	//int v[2];
	//printf ("main= %p e v = %p", main, v);
	
	//int i,j,k;
	
		/*printf ("Endereço de i= %p\n", &i);
		printf ("Endereço de j= %p\n", &j);
		printf ("Endereço de k= %p\n", &k);
		getch ();
		*/

			/*int v = 0x4142;
			char *a;
			int *b;
			long *c;
			a = b = c = &v;
			printf("%c %x %lx", *a, *b, *c); // Valor incorrento porque está misturando valor char, int...;
			*/
	
}

