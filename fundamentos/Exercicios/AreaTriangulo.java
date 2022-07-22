package fundamentos.Exercicios;

import java.util.Scanner;

public class AreaTriangulo {

	public static void main(String[] args) {
		Scanner entrada = new Scanner (System.in);
		
		System.out.println("Informe a base de um triangulo: ");
		double base = entrada.nextDouble();
		
		System.out.println("Informe a altura de um triangulo: ");
		double altura = entrada.nextDouble();
		
		double area = base*altura/2;
		
		System.out.println("A área do triângulo é: " + area);
		
		
		
		entrada.close();
	}
}
