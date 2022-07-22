package classe;

public class produto {

	String nome;
	double preco;
	static double desconto= 0.25;
	
	produto (String nomeInicial, double precoInicial) { //Construtor explícito
		nome= nomeInicial;
		preco= precoInicial;
	}
	
	produto (){ //Construtor implícito;
		
	}
	
	double precoComDesconto () {
		return preco * (1- desconto);
	}
	
	double precoComDesconto (double descontoDoGerente) {
		return preco * (1- desconto - descontoDoGerente);
	}
}
