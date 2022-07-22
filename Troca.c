#include <stdio.h>
#include <stdlib.h>


void troca (int *a ,int *b){ int c;
	
	c= *a;
	*a= *b;
	*b= c;
}
	
void main(void) {
	
	int x= 3;
	int y= 6;
	
	troca (&x, &y);
	printf ("%d %d", x,y);

}
