package Controle;

import javax.swing.JOptionPane;

public class IfElse {

	public static void main(String[] args) {
		
		String valor = JOptionPane.showInputDialog(
				"Informe o numero: "); // Abre caixa pra escrever igual o Scam
		int numero = Integer.parseInt(valor); // transforma String em numero
		
		if (numero % 2 == 0) {
			System.out.println("Número par!");
		} else {
			System.out.println("Número ímpar");
		}
				
	}
}
