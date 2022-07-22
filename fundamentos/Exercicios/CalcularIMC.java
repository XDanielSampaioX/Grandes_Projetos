package fundamentos.Exercicios;

import java.util.Scanner;

public class CalcularIMC {

	public static void main(String[] args) {
		Scanner entrada = new Scanner (System.in);
		
		System.out.println("Inform seu peso: ");
		double peso = entrada.nextDouble();
			
		System.out.println("Inform seu altura: ");
		double altura = entrada.nextDouble();
		double alturaquad = Math.pow(altura, 2);
		double IMC = peso/alturaquad;
				
		System.out.printf("Seu IMC é: %.2f" , IMC);
		
		entrada.close();
	}
}
