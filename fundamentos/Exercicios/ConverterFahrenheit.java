package fundamentos.Exercicios;

import java.util.Scanner;

public class ConverterFahrenheit {

	public static void main(String[] args) {
		
		System.out.println("Informe a temperatura em Fahrenheit"
				+ " no qual quer converter para Celsius: ");
		
		Scanner entrada= new Scanner (System.in);
		double grau = entrada.nextDouble();
		
		double celsius = grau - 32 / 1.8;
		
		System.out.println(grau + "º Fahrenheit equivale a " + celsius + "º Celsius");
		
		entrada.close();
	}
}
