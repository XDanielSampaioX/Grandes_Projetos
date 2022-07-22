package arrays;

import java.util.Scanner;

public class DesafioArray {

	public static void main(String[] args) {
		
		Scanner entrada= new Scanner(System.in);
		
		System.out.println("Digite a quantidade de notas que quer usar: ");
		int quantidade = entrada.nextInt();
		
		double notas[]= new double[quantidade];
		double somaTotal=0;
				
		for (int i=0; i< notas.length; i++) {
			System.out.printf ("Digite a %dº nota: ",  (i+1));
			notas[i]= entrada.nextDouble();			
		}
		
		for (double nota: notas) {
			somaTotal+= nota;
			
		}
		System.out.printf("Média de notas: %.2f ", somaTotal/notas.length);
	
		entrada.close();
	}
}
