#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <unistd.h>
#include <dirent.h>
#include <windows.h>

int main(void){
	
	FILE *armazena;
	int start = 0;
	while (start != -1){
    DIR *dir;
    struct dirent *lsdir;
    system("cls");
    int rep;
    dir = opendir("C:\\Users\\Lucas\\Desktop\\Back\\");
    while ( ( lsdir = readdir(dir) ) != NULL )
    {
        printf ("%s\n", lsdir->d_name);
    }
    char *word = "C:\\Users\\Lucas\\Desktop\\Back\\";
	char escolha[100];
	char auxiliar[100];
	char auxiliar1[100];
	chdir(word);
	printf("\n\nDigite o computador que voce deseja realizar o backup:");
	fflush(stdin);
	scanf("%s", &escolha);
	
	if (armazena == NULL){
		printf("ERROR\n");
		system ("pause");
	}	

	system("cls");
	while (fgets(armazena, 100, armazena) != NULL){
		printf("%s", armazena);
	}
	
	strcpy(auxiliar1, armazena);
	strcat(auxiliar1, "txt");
	
	if (auxiliar1 == NULL){
		printf("Não encontrado!");
	}
	
	strcpy(auxiliar, armazena);
	strcat(escolha, ".txt");
	strcat(auxiliar, ".bkp");
	FILE *arq;
	FILE *file1 = fopen(escolha, "r");	
	FILE *file2 = fopen(auxiliar, "w");
	char leitor[1000];
	while (fgets(leitor, 1000, file1) !=NULL){
		fputs(leitor, file2);
	}
	
	system("cls");
	printf("Deseja fazer backup de mais algum computador? [1/-1]");
	scanf("%d", &start);
}
}
