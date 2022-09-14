#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void heapSort ();
void criarHeapSort ();

void main() {

	srand(time(NULL));
	int i, vetOriginal[3000];
	
	for (i=0; i<=3000; i++){
		vetOriginal[i]= rand()% 100;
		printf("%d  ", vetOriginal[i]);
	}
	heapSort(&vetOriginal, 3000);
	criarHeapSort(&vetOriginal, 0, 3000);
	
	printf ("\n\n");
	for (i=0; i<3000; i++){
		printf("%d  ", vetOriginal[i]);
	} 	
}

void heapSort (int *ptrVetOriginal, int posicao){
	
	int i, aux;
	for ((i=(posicao-1)/2); i>=0; i--){
		criarHeapSort (ptrVetOriginal, i, posicao-1);
	}
	for (i= posicao-1; i>=1; i--){
		aux= ptrVetOriginal[0];
		ptrVetOriginal[0]= ptrVetOriginal[i];
		ptrVetOriginal[i]= aux;
		criarHeapSort (ptrVetOriginal, 0, i-1);
	}
}

void criarHeapSort (int *ptrVetOriginal, int inicio, int fim){
	
	int auxPai= ptrVetOriginal[inicio];
	int filho= inicio*2+ 1;
	while (filho<= fim){
		if (filho< fim){
			if (ptrVetOriginal[filho] < ptrVetOriginal[filho+1]){
				filho= filho+1;
			}
		} if (auxPai< ptrVetOriginal[filho]){
			ptrVetOriginal[inicio]= ptrVetOriginal[filho];
			inicio= filho;
			filho= 2*inicio+ 1;
		} else {
			filho= fim+ 1;
		}
	}
	ptrVetOriginal[inicio]= auxPai;
}
