#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) {
	
	int i=0;
	int j=10;
	int cpf[8];
	int mult1[8];
	int mult2[8];
	int resultado1;
	int resultado2;
	int digito1;
	int digito2;

	srand (time(NULL));
	printf ("Gerando numeros aleatorios: ");
	
	while ((i<=9) && (j>=2)){
	
	cpf[i]= (rand()%9);
	
	mult1[i] = cpf[i] * j;	
	
	printf ("%d ", cpf[i]);
	j--;
	i++;
	}
	resultado1 = mult1[0] + mult1[1] + mult1[2] + mult1[3] + mult1[4] + mult1[5] + mult1[6] + mult1[7] + mult1[8];
	printf("\n");
	
	printf ("\n%d\n", cpf[0]);
	
	printf ("\n%d\n\n", mult1[0]);
	
		digito1 = 0;
	if (resultado1%11<=2) {
		printf("o primeiro digito e: %d\n", digito1);
	} else if (resultado1%11>=2) {
		digito1 = 11-(resultado1%11);
		printf ("O primeiro digito e: %d\n", digito1);
	}
	j = 11;
	while ((i<=10) && (j>=3)){
		mult2[i] = cpf[i]*j;
	j--;
	i++;
	}
		resultado2 = mult2[0]+mult2[1]+mult2[2]+mult2[3]+mult2[4]+mult2[5]+mult2[6]+mult2[7]+mult2[8]+(2*digito1);
			if (resultado2%11<=2) {
			digito2 = 0;
			printf("o primeiro digito e: %d\n", digito2);
			} else if (resultado2%11>=2) {
			digito2 = 11-(resultado2%11);
			printf ("O primeiro digito e: %d\n", digito2);
			}
			
	printf("Seu cpf e: %d%d%d.%d%d%d.%d%d%d-%d%d\n" , cpf[0], cpf[1], cpf[2], cpf[3], cpf[4], cpf[5], cpf[6], cpf[7],cpf[8],digito1, digito2);
}
