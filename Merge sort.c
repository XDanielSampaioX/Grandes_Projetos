#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <math.h>

void mergeSort ();
void merge ();

void main (){
	
	int vetOriginal[3000], i;
	srand (time(NULL));
	
	for (i=0; i<=3000; i++){
		vetOriginal[i]= rand ()% 100;
		printf("%d  ", vetOriginal[i]);
	}
	mergeSort(&vetOriginal, 0, 3000);
	merge(&vetOriginal, 0, 1500, 3000);
	
	printf ("\n\n");
	
	for (i=0; i<=3000; i++){
		printf("\%d  ", vetOriginal[i]);
	}
	
	
	
}

void mergeSort (int *ptrVetoriginal, int inicio, int fim){
	
	int meio;
	if (inicio< fim){
		meio= floor((inicio+fim)/2);
		mergeSort(ptrVetoriginal, inicio, meio);
		mergeSort(ptrVetoriginal, meio+1, fim);
		merge (ptrVetoriginal, inicio, meio, fim);
	}
}

void merge (int *ptrVetoriginal, int inicio, int meio, int fim){
	int *espacoReservado, inicioParte01, inicioParte02, tamanho, i, j, k;
	int fim1= 0, fim2=0;
	tamanho= fim-inicio+1;
	inicioParte01= inicio;
	inicioParte02= meio+ 1;
	espacoReservado= (int *)malloc(tamanho*sizeof(int));
	
	if (espacoReservado!= NULL){
		for (i=0; i<tamanho; i++){
			if (!fim1 && !fim2){
				if (ptrVetoriginal[inicioParte01]< ptrVetoriginal[inicioParte02]){
					espacoReservado[i]= ptrVetoriginal[inicioParte01++];
				} else {
					espacoReservado[i]= ptrVetoriginal[inicioParte02++];
				} if (inicioParte01> meio){
					fim1= 1;
				} if (inicioParte02> fim){
					fim2=1;
				}
			} else {
				if (!fim1){
					espacoReservado[i]= ptrVetoriginal[inicioParte01++];
				} else {
					espacoReservado[i]= ptrVetoriginal[inicioParte02++];
				}
			}
		}
	}
	for (j=0, k= inicio; j< tamanho; j++, k++){
		ptrVetoriginal[k]= espacoReservado[j];
	}
	free (espacoReservado);
}
