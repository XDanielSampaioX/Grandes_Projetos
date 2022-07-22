#include <stdio.h>
#include <stdlib.h>
#include <dirent.h>



int main(void){

char repetir;
FILE *arq;
char *word = "C:\\Users\\Lucas\\Desktop\\Back\\";
char escolha[100];
char palavra[100];
DIR *dir;
struct dirent *lsdir;



	
	while((repetir != 'n') && (repetir != 'N')){
	system("cls");

    dir = opendir("C:\\Users\\DANIE\\OneDrive\\Área de Trabalho\\exemplo\\PROJETO INTEGRADO 1");

    while ( ( lsdir = readdir(dir) ) != NULL )
    {
        printf ("%s\n", lsdir->d_name);
    }



chdir(word);
printf("\nDigite o computador que voce deseja pesquisar:");
scanf("%s", &escolha);

strcat(escolha, ".txt");

arq = fopen(escolha, "r");

if (arq == NULL){
	printf("ERROR");
}

system("cls");
while (fgets(palavra, 100, arq) != NULL){
	printf("%s", palavra);
}
	fclose(arq);
	printf("\nVoce deseja pesquisar algo mais? [S/N]");
	scanf("%s",&repetir);

}
}
