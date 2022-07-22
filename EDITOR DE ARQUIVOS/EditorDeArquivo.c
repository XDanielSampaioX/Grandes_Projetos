#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <unistd.h>
#include <dirent.h>
#include <windows.h>

int main(void){
	int repetir = 0;
	int repetir2 = 0;
	while (repetir != 1){
	system("cls");
    DIR *dir;
    struct dirent *lsdir;
    dir = opendir("C:\\Users\\Lucas\\Desktop\\Back\\");
    while ( ( lsdir = readdir(dir) ) != NULL )
    {
        printf ("%s\n", lsdir->d_name);
    }
	FILE *arq;
char *word = "C:\\Users\\Lucas\\Desktop\\Back\\";
char escolha[100];
int repetir;

chdir(word);
printf("\n\nDigite o computador que voce deseja pesquisar:");
scanf("%s", &escolha);

strcat(escolha, ".txt");


while (repetir2 != -1){
arq = fopen(escolha, "r");


if (arq == NULL){
	printf("ERROR");
}


system("cls");
char palavra[100];
fgets(palavra, 100, arq) != NULL;
	printf("%s", palavra);
	
char palavra2[100];
fgets(palavra2, 100, arq) != NULL;
	printf("%s", palavra2);
	
char palavra3[100];
fgets(palavra3, 100, arq) != NULL;
	printf("%s", palavra3);
	
char palavra4[100];
fgets(palavra4, 100, arq) != NULL;
	printf("%s", palavra4);

char palavra5[100];
fgets(palavra5, 100, arq) != NULL;
	printf("%s", palavra5);
char palavra6[100];
fgets(palavra6, 100, arq) != NULL;
	fclose(arq);
	printf("%s", palavra6);

	int decidir;
	printf("\nDeseja editar qual linha? [1-6]");
	scanf("%d", &decidir);
	if (decidir == 1){
		arq = fopen(escolha, "w");
		char parte1[100];
		printf("\nDigite o que quer escrever:");
		scanf("%s", parte1);
		fprintf(arq, "%s\n", parte1);
		fprintf(arq, "%s", palavra2);
		fprintf(arq, "%s", palavra3);
		fprintf(arq, "%s", palavra4);
		fprintf(arq, "%s", palavra5);
		fprintf(arq, "%s", palavra6);
		fclose(arq);
	}
	if (decidir == 2){
		arq = fopen(escolha, "w");
		char parte2[100];
		printf("\nDigite o que quer escrever:");
		scanf("%s", parte2);
		fprintf(arq, "%s", palavra);
		fprintf(arq, "%s\n", parte2);
		fprintf(arq, "%s", palavra3);
		fprintf(arq, "%s", palavra4);
		fprintf(arq, "%s", palavra5);
		fprintf(arq, "%s", palavra6);
		
		fclose(arq);
		printf("\nGravado!");	
	}
		if (decidir == 3){
		arq = fopen(escolha, "w");
		char parte3[100];
		printf("\nDigite o que quer escrever:");
		scanf("%s", parte3);
		fprintf(arq, "%s", palavra);
		fprintf(arq, "%s", palavra2);
		fprintf(arq, "%s\n", parte3);
		fprintf(arq, "%s", palavra4);
		fprintf(arq, "%s", palavra5);
		fprintf(arq, "%s", palavra6);
		
		fclose(arq);
		printf("\nGravado!");	
	}
		if (decidir == 4){
		arq = fopen(escolha, "w");
		char parte4[100];
		printf("\nDigite o que quer escrever:");
		scanf("%s", parte4);
		fprintf(arq, "%s", palavra);
		fprintf(arq, "%s", palavra2);
		fprintf(arq, "%s", palavra3);
		fprintf(arq, "%s\n", parte4);
		fprintf(arq, "%s", palavra5);
		fprintf(arq, "%s", palavra6);
		
		fclose(arq);
		printf("\nGravado!");	
	}
		if (decidir == 5){
		arq = fopen(escolha, "w");
		char parte5[100];
		printf("\nDigite o que quer escrever:");
		scanf("%s", parte5);
		fprintf(arq, "%s", palavra);
		fprintf(arq, "%s", palavra2);
		fprintf(arq, "%s", palavra3);
		fprintf(arq, "%s", palavra4);
		fprintf(arq, "%s\n", parte5);
		fprintf(arq, "%s", palavra6);
		
		fclose(arq);
		printf("\nGravado!");	
	}
	
		if (decidir == 6){
		arq = fopen(escolha, "w");
		char parte6[100];
		printf("\nDigite o que quer escrever:");
		scanf("%s", parte6);
		fprintf(arq, "%s", palavra);
		fprintf(arq, "%s", palavra2);
		fprintf(arq, "%s", palavra3);
		fprintf(arq, "%s", palavra4);
		fprintf(arq, "%s", palavra5);
		fprintf(arq, "%s\n", parte6);
		
		fclose(arq);
		printf("\nGravado!");	
	}
		else if (decidir > 6 or decidir < 1){
			printf("\nOpcao invalida.");
		}
	
	printf("\nDeseja mudar o arquivo? [1/ -1]");
	scanf("%d", &repetir);
	if (repetir == -1){
		
		if (repetir2 == -1){
			break;
		}
	}
	
	if (repetir == 1){
		break;
	}
}
}
}
