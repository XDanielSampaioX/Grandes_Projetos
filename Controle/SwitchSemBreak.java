package Controle;

public class SwitchSemBreak {

	public static void main(String[] args) {
		
		String faixa = "preta";
		
		// Quando o switch não tyyem break, apos entrar em
		// Uma situação, ele executa tudo logo abaixo
		
		switch (faixa.toLowerCase()) {
		case "preta":
			System.out.println("Sei o bassa-Dai...");
		case "marrom":
			System.out.println("Sei o Tekki Shodan");
		case "roxa":
			System.out.println("Sei o Heian Godan");
		case "verde":
			System.out.println("Sei o Heian Yodan");
		case "laranja":
			System.out.println("Sei o Heian Sandan");
		case "vermelha":
			System.out.println("Sei o Heian Nidan");
		case "amarela":
			System.out.println("Sei o Heian Shodan");
		break;
		
		default:
			System.out.println("Não sei de nada");
		}
		
		System.out.println("fim");
		
		int idade = 2;
		
		switch (idade) {
		
		case 3:
			System.out.println("Sabe programar");
		case 2:
			System.out.println("Sabe falar");
		case 1:
			System.out.println("Sabe andar");
		case 0:
			System.out.println("Sabe respirar");
		}
	}
}
