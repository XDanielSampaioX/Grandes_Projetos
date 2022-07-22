#include <stdio.h>
#include <stdlib.h>

#define MINHACONSTANTE 10; // Define constante;

//typedef struct {
//	int mat;
//	float nota[3];
//	float media;
//} aluno;


typedef struct {
	int dia;
	char mes[10];
	int ano;
} data;

typedef struct {
	int pecas;
	float preco;
	data diavenda;
} venda;

// typedef : apelida alguma coisa (encurtador de variavel);
// static : inicia variavel sem iniciar o programa;

void main(void) {
	
	venda a= {20,100.0, {16, "maio", 2022} };
	
	printf ("Peças: %d\n", a.pecas);
	printf ("Preço: %.2f\n", a.preco);
	printf ("Data: %d de %s de %d",a.diavenda.dia, a.diavenda.mes, a.diavenda.ano);
	
	
	
	
//	aluno daniel, joao;
//	
//	daniel.mat= 2021010365;
//	daniel.nota[0]= 8;
//	daniel.nota[1]= 7;
//	daniel.nota[2]= 10;
//	
//	daniel.media= (daniel.nota[0] + daniel.nota[1] + daniel.nota[2])/3.0;
//	
//	printf("Matricula: %d\n", daniel.mat); 
//	printf("Média: %.2f", daniel.media); 
}
