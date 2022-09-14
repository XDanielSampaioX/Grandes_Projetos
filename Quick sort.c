#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <math.h>
#include <locale.h>

// Assinaturas de Quick Sort
int particiona_random();
void troca(); 
int particiona();
void quicksort();

// Assinaturas de Insert Sort
void insertSort();

// Assinaturas de Merge Sort
void mergeSort ();
void merge ();

// Assinaturas de Heap Sort
void heapSort ();
void criarHeapSort ();

void main() {
	setlocale(LC_ALL, "portuguese");
  	int opcao;
	int i;
	time_t tIni, tFim;
	int vetOriginal[3000];
	
	// popula um vetor aleatorio
	srand(time(NULL));
  	for ( i = 0; i < 3000; i++) {
    	vetOriginal[i] = rand() % 100;
  	}
	
  	printf("\n-------------------------------------MENU-------------------------------------\n");
  	printf("\n1- Select Sort");
  	printf("\n2- Insert Sort");
  	printf("\n3- Merge Sort");
  	printf("\n4- Heap Sort");
  	printf("\n5- Quick Sort");
  	printf("\n6- Sair");
	printf("\n------------------------------------------------------------------------------\n");
	
  	while (opcao != 6) {
	  	printf("\n\nEscolha qual algoritmo de ordena��es de dados utilizar: ");
	  	fflush(stdin);
	  	scanf("%d", &opcao);
	  	
	  	printf("\n");
	  
	  	switch (opcao) {
		  	case 1:
			  	printf("\n----------------------------------RESULTADO-----------------------------------\n");
			    printf("\nSelect Sort: \n");
  				printf("\n------------------------------------------------------------------------------\n");
			    break;
		    
			case 2:
				printf("\n----------------------------------RESULTADO-----------------------------------\n");
			    printf("\nInsert Sort: \n");
			    insertSort(&vetOriginal, 3000);
			    
				printf ("\n");
					
				for (i=0; i<3000; i++){
				printf ("%d  ", vetOriginal[i]);
				}
				
			    printf("\n------------------------------------------------------------------------------\n");
			    break;
			    
			case 3:
				printf("\n----------------------------------RESULTADO-----------------------------------\n");
			  	printf("\nMerge Sort: \n");
	
			  	mergeSort(&vetOriginal, 0, 3000);
				merge(&vetOriginal, 0, 1500, 3000);
	
				printf ("\n\n");
	
				for (i=0; i<=3000; i++){
				printf("\%d  ", vetOriginal[i]);
				}
			  	printf("\n------------------------------------------------------------------------------\n");
				break;
				
			case 4:
				printf("\n----------------------------------RESULTADO-----------------------------------\n");
				printf("\nHeap Sort: \n");
				
				heapSort(&vetOriginal, 3000);
				criarHeapSort(&vetOriginal, 0, 3000);	
				
				printf ("\n\n");
		   		for (i=0; i<3000; i++){
				printf("%d  ", vetOriginal[i]);   
				}
				printf("\n------------------------------------------------------------------------------\n");
				break;
				
			case 5:
				printf("\n----------------------------------RESULTADO-----------------------------------\n");
			    printf("\nQuick Sort: \n");
			    
			    tIni = time(NULL);
				int tam_vet = sizeof(vetOriginal) / sizeof(int); // determina o tamanho do vetor
				int i;
				
				srand(time(NULL));
				quicksort(&vetOriginal, 0, tam_vet - 1); // chamada do quicksort
			
				// mostra o vetor ordenado
				for(i = 0; i < tam_vet; i++){
					printf("%d ", vetOriginal[i]);
				}
				printf("\n");
				
				tFim = time(NULL);
				printf("\tTempo em segundos: %f\n\n", difftime(tFim, tIni));
			    printf("\n------------------------------------------------------------------------------\n");
			    break;
			    
			case 6:
				printf("\n------------------------------------------------------------------------------\n");
			    printf("\nSAINDO...\n");
			    printf("\n\n-------------------------------------FIM--------------------------------------\n\n");
			    exit(1);
				break;
				
			default:
				printf("\n------------------------------------------------------------------------------\n");
			    printf("\n		  	       OP��O INV�LIDA\n");
			    printf("\n------------------------------------------------------------------------------\n");
	  	}
	}
}

// Insert Sort
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

// Merge Sort
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

// Heap Sort
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

// Quick Sort
// escolhe um piv� aleat�rio para n�o acontecer o pior caso do quicksort
int particiona_random(int *ptrVetOriginal, int inicio, int fim) {
	int indice_pivo = (rand() % (fim - inicio + 1)) + inicio; // seleciona um n�mero entre fim e inicio
	troca(ptrVetOriginal, indice_pivo, fim); // faz a troca para colocar no fim o piv�
	return particiona(ptrVetOriginal, inicio, fim);
}

// fun��o que realiza a troca entre dois elementos
void troca(int *ptrVetOriginal, int i, int j) {
	int aux = ptrVetOriginal[i];
	ptrVetOriginal[i] = ptrVetOriginal[j];
	ptrVetOriginal[j] = aux;
}

// particiona e retorna o �ndice do piv�
int particiona(int *ptrVetOriginal, int inicio, int fim) {
	int pivo, indice_pivo, i;
	
	pivo = ptrVetOriginal[fim]; // supondo que o piv� � sempre o �ltimo elemento
	indice_pivo = inicio;
	
	for(i = inicio; i < fim; i++) {
		// verifica se o elemento � <= ao piv�
		if(ptrVetOriginal[i] <= pivo){
			troca(ptrVetOriginal, i, indice_pivo); // realiza a troca
			indice_pivo++;
		}
	}

	troca(ptrVetOriginal, indice_pivo, fim); 	// troca o piv�
	return indice_pivo;
}

void quicksort(int *ptrVetOriginal, int inicio, int fim) {
	if(inicio < fim) {
		int indice_pivo = particiona_random(ptrVetOriginal, inicio, fim); // retorna o �ndice do piv�
		// chamadas recursivas do quick_sort
		quicksort(ptrVetOriginal, inicio, indice_pivo - 1);
		quicksort(ptrVetOriginal, indice_pivo + 1, fim);
	}
}
