package fundamentos.Exercicios;

import java.util.Scanner;

public class ConverterCelscius {

	public static void main(String[] args) {
		
		System.out.println("Informe a temperatura"
				+ " no qual quer converter para Fahrenheit: ");
		
		Scanner entrada= new Scanner (System.in);
		double grau = entrada.nextDouble();
		
		double fahrenheit = grau * 1.8 + 32;
		
		System.out.println(grau + "º Celsius equivale a " + fahrenheit + "º fahrenheit");
		
		entrada.close();
	}
}
