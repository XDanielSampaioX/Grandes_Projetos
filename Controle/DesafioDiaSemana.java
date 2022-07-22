package Controle;

import java.util.Scanner;

public class DesafioDiaSemana {

	public static void main(String[] args) {
		
		Scanner entrada = new Scanner(System.in);
		
		System.out.println("Digite um dia da semana: ");
		String dia = entrada.next().toUpperCase();
		
		/* NÃO USAR == QUANDO FOR COMPARAR STRINGS,
		 / USE EQUALSIGNORECASE !!!
		 */
		
		System.out.println();
		
		if (dia.equalsIgnoreCase("domingo")){
			System.out.print("1");
		} else if (dia.equalsIgnoreCase("Segunda")) {
			System.out.print("2");
		} else if (dia.equalsIgnoreCase("Terça")) {
		System.out.print("3");
		} else if (dia.equalsIgnoreCase("Quarta")) {
			System.out.print("4");
		} else if (dia.equalsIgnoreCase("Quinta")) {
			System.out.print("5");
		} else if (dia.equalsIgnoreCase("Sexta")) {
			System.out.print("6");
		} else if (dia.equalsIgnoreCase("Sábado")){
			System.out.println("7");
		} else {
			System.out.println("Opção inválida");
		}
	
		entrada.close();
	}
}
