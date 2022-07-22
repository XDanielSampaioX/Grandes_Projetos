#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


typedef enum { jan=1, fev, mar, abr, mai, jun, ago, set, out, nov, dez} mes;

void main(void) {
	
	setlocale (LC_ALL, "Portuguese");
	
	mes m1, m2, m3;
	
	m1= abr;
	m2= jun;
	
	m3= m2-m1;
	
	printf("%d", m3);
	
	}
