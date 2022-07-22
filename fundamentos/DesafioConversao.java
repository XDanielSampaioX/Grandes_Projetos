package fundamentos;

import java.util.Scanner;

public class DesafioConversao {

	public static void main(String[] args) {
		Scanner salario = new Scanner(System.in);
		
		System.out.println("Digite seus ultimos 3 salários: ");
		String salario1 = salario.nextLine().toString().replace(",", ".");
		String salario2 = salario.nextLine().toString().replace(",", ".");
		String salario3 = salario.nextLine().toString().replace(",", ".");
		
		double renda1 = Double.parseDouble(salario1);
		double renda2 = Double.parseDouble(salario2);
		double renda3 = Double.parseDouble(salario3);
		
		double soma = renda1 + renda2 + renda3;
		
		System.out.println("A soma dos 3 salários foram: " + soma);
		System.out.println("A média entre ele foi de: " + soma/3);
		
		salario.close();		
	}
}
