#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define TRUE 1
int main(void) { 
    //setlocale(LC_ALL,"Portuguese");
    FILE *arquivo;
    char titulo[30];
    int numreg;
    double preco;
    
    arquivo = fopen("livros.txt", "w");
    
    while(TRUE){
        printf("\nDigite titulo, registro e o preço do livro: ");
        fgets(titulo, 30, stdin);
        scanf("%d", &numreg);
        scanf("%lf", &preco);
        fflush(stdin);
        titulo[strlen(titulo)-1] = '\0';
        
        if (strlen(titulo) <= 1) break;
        fprintf(arquivo, " %d %s %.2lf\n", numreg, titulo, preco);
        
    }    
    
    fclose(arquivo);
  
}
