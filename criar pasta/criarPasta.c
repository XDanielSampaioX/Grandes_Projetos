#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <windows.h>
#include <dirent.h>
 
int main(void){
	char nome;
    char *ponteiro = ("C:\\Users\\DANIE\\OneDrive\\Área de Trabalho\\exemplo\\criar pasta\\dire");
    system ("mkdir dire");
    
	
	char dire; {
	nome = chdir (ponteiro);
	}
    //NOME DO ARQUIVO | SEGURANÇA
   
    
    //system ("copy NUL Aulas\\texto.txt");
    
    //NOME DO ARQUIVO | TIPO DE ACESSO | COMPARTILHAMENTO | SEGURANÇA | TIPO DE CRIAÇÃO DO ARQUIVO | ATRIBUTOS | TEMPLATE PARA ARQUIVO
    
    if (CreateFile (dire, GENERIC_READ, 0, NULL, CREATE_NEW, FILE_ATTRIBUTE_NORMAL, NULL)){
        printf ("Arquivo criado com sucesso!\n\n");
    }
    else
    {
        printf ("Erro ao criar o arquivo.\n\n");
    }
}
