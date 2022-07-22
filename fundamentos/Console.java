package fundamentos;

import java.util.Scanner;

public class Console {

	public static void main(String[] args) {
		
		System.out.print("Bom");
		System.out.print (" dia !"); //Mesmo que Escreva em Portugol
		
		System.out.println("\n");
		System.out.println("Bom dia !");//Mesmo que EscrevaL em Portugol
		
		System.out.printf("Mega sena: %d %d %d %d %d %d %n",
				1, 2, 3, 4, 5, 6);
		System.out.printf("Salário: %.1f%n", 1234.5678);
		System.out.printf("Nome: %s%n", "Daniel");
		
		Scanner entrada = new Scanner(System.in); //Leia de Portugol. Precisa de importagem.
		
		System.out.print("Digite seu nome: ");
		String nome = entrada.nextLine(); //Leia de Portugol. Dando algum dado tipo texto como entrada.
		
		System.out.print("Digite seu sobrenome: ");
		String sobrenome = entrada.nextLine();
		
		System.out.print("Digite sua idade: ");
		int idade = entrada.nextInt(); //Leia de Portugol. Dando algum dado tipo inteiro como entrada.
		
		System.out.printf("%s %s tem %d anos.\n",
				nome, sobrenome , idade);
		
		entrada.close();
		
	}
}
