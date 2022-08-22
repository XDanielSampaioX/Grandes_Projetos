#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <locale.h>

void menu();
void popularVetor();
void maiorNumero();
void quantosPares();
void somarVetor();
void ordemInversa();
void ordenarCrescente();


void main (void){
	setlocale(LC_ALL, "Portuguese");
	
	int vetOriginal[10];
	int opcao, resp;
	int i,x;

	srand (time(NULL));

	while (resp!=7) {
		menu();
		printf ("Digite a op��o desejada: \n");
		scanf ("%d", &opcao);
		fflush(stdin);

		switch (opcao){
		case 1:
			for (i=0; i<10; i++){
				vetOriginal[i]= rand()%100;
				printf("%d  ", vetOriginal[i]);
			}
			printf ("\nN�meros gerados!!!\n");
			getch ();
			system ("cls");
			break;
			
		case 2:
			maiorNumero(&vetOriginal);
			getch ();
			system ("cls");
			break;
		case 3: 
			quantosPares(&vetOriginal);
			getch ();
			system ("cls");
			break;
		case 4:
			somarVetor(&vetOriginal);
			getch ();
			system ("cls");
			break;	
		case 5:
			ordemInversa(&vetOriginal, 0,9);
			printf ("Vari�veis trocadas:  ");
			for (i=0; i<10; i++){
			printf ("%d  ", vetOriginal[i]);
			}
			getch ();
			system ("cls");
			break;	
		case 6:
			ordenarCrescente(&vetOriginal);
			getch ();
			system ("cls");
			break;
		case 7:
			printf ("Volte sempre !!!");
			getch ();
			system ("cls");
			break;
		default:
			printf ("Op��o inv�lida !!!");
			getch ();
			system ("cls");
			break;
		}
		resp=opcao;
		x++;
	}
}

void menu (){

	printf ("==========================================================================\n");
	printf ("-----------------------------------MENU-----------------------------------\n");
	printf ("==========================================================================\n");
	printf ("Digite 1- Para criar um vetor com 10 numeros aleatorios:\n");
	printf ("Digite 2- Para mostrar os elementos de maior valor do vetOriginal:\n");
	printf ("Digite 3- Para contabilizar quantos elementos s�o pares no vetOriginal:\n");
	printf ("Digite 4- Para mostrar o valor do somatorio dos elementos di vetOriginal:\n");
	printf ("Digite 5- Para mostrar os elementos do vetOriginal na ordem inversa:\n");
	printf ("Digite 6- Para ordenar o vetor em ordem crescente do vetOriginal:\n");
	printf ("Digite 7- Para sair:\n");
	printf ("==========================================================================\n");
}

void maiorNumero (int *ptrVetOriginal){
	int auxiliar;
	int i;
	
	for (i=0; i<10; i++){
		if (ptrVetOriginal[i]>auxiliar){
			auxiliar= ptrVetOriginal[i];
		}
	}
	printf ("\nO maior termo �: %d\n", auxiliar);
}

void quantosPares (int *ptrVetOriginal){
	int i, pares=0, impares=0;
	
	printf ("\nOs n�mero pares s�o: ");
	for (i=0; i<10; i++){
		if (ptrVetOriginal[i]%2==0){
			printf ("%d  ", ptrVetOriginal[i]);
			pares++;
		}
	}
	printf("\nTotalizando: %d n�meros pares\n\n", pares);
	printf ("Os n�mero impares s�o: ");
	for (i=0; i<10; i++){	
	if(ptrVetOriginal[i]%2==1) {
			printf ("%d  ", ptrVetOriginal[i]);
			impares++;
		}
	}
	printf("\nTotalizando: %d n�meros impares\n\n", impares);
}

void somarVetor(int *PtrVetOriginal){
	int i, soma;
	
	for (i=0; i<10; i++){
		soma+=PtrVetOriginal[i];	
	}
	printf("A soma os termos �: %d\n", soma);
}

void ordemInversa(int *ptrVetOriginal, int inicio, int final){
	int auxiliar;
	int i;
	
	if (inicio < final){
		auxiliar = ptrVetOriginal[inicio];
		ptrVetOriginal[inicio] = ptrVetOriginal[final];
		ptrVetOriginal[final] = auxiliar;
		ordemInversa(ptrVetOriginal, inicio + 1, final - 1);
	}
}

void ordenarCrescente(int *ptrVetOriginal){
	int auxiliar;
	int i, j;
	for (i=0; i<10; i++){
		for (j=i+1; j<10; j++){
			if (ptrVetOriginal[i]>ptrVetOriginal[j]){
				auxiliar= ptrVetOriginal[i];
				ptrVetOriginal[i]= ptrVetOriginal[j];
				ptrVetOriginal[j]= auxiliar;
			}
		}	
	}
	for (i=0; i<10; i++){
		printf("%d\n", ptrVetOriginal[i]);
	}
}
