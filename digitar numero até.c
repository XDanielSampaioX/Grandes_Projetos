#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <conio.h>


	int main(){
	
	int numero;
	int contador;
	int soma;
	float media;
	
	while ( numero != -1) 
	{
	printf ("digite um numero:");
	scanf ("%d", &numero);
	
	if (numero >= 0) {
	
	soma = numero+ soma;
	contador++;
		
		
	}
	
	}
	
	media = soma/contador;
	
	printf ("%f\n", media); 
	printf ("%d", contador); 
	
	}

