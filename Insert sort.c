#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void insertSort();

void main (){
	
	srand(time(NULL));
	int i, vetOriginal[3000];
	
	for (i=0; i<3000; i++){
		vetOriginal[i]= rand() % 100;
		printf ("%d  ", vetOriginal[i]);
	}
	
	insertSort(&vetOriginal, 3000);
	
	printf ("\n");
	
	for (i=0; i<3000; i++){
		printf ("%d  ", vetOriginal[i]);
	}
}


void insertSort(int *ptrVetOriginal, int tam){
int i, j;
int aux;

	for(i=1; i <tam; i++){
		aux= ptrVetOriginal[i];
		
		for(j=i; (j>0)&&(aux< ptrVetOriginal[j-1]);j--){
			ptrVetOriginal[j]= ptrVetOriginal[j-1];
       }
   ptrVetOriginal[j]=aux;
   }
}
