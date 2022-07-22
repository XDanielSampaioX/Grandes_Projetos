package Controle;

import java.util.Scanner;

public class ExercicioReceberNumeroVerificarPAr {

	
	public static void main(String[] args) {
		
		Scanner entrada = new Scanner (System.in);
		
		System.out.println("Digite um número");
		int numero = entrada.nextInt();
		
		if ((numero >= 0) && (numero<=10)) {
			System.out.println("O número esta entre 0 a 10");
			if (numero%2 == 0) {
				System.out.printf ("O número %d é par", numero );
			} else {
				System.out.printf ("O numero %d é impar", numero);
			}
		} else {
			System.out.println("O número não está dentre 0 a 10");
		}
		entrada.close();
	}
}
