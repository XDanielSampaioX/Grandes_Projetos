#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void main(void) {
	
	int *v, n, i;
	
	printf ("\nTamano do vetor? ");
	scanf ("%d",&n);
	
	v= malloc(n*sizeof(int));
	
	if (v==NULL){
		printf ("\n Problema ao alocar memória");
		exit (1);
	}
	
	for (i=0; i<n; i++) {
		printf ("\nEntre com o valor da posicao v[%d]: ", i);
		scanf ("%d", &v[i]);
	}
	while (i>0) {
		printf ("\n%d\n", v[--i]);
	}
}
