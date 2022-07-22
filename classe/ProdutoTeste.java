package classe;

public class ProdutoTeste {

	public static void main(String[] args) {
		
		produto p1 = new produto("notebook", 4356.89);
		
		var p2 = new produto("Caneta Preta", 12.56);
		
		produto.desconto= 0.50;
		
		System.out.println(p1.nome + " " + p1.precoComDesconto());
		System.out.println(p2.nome + " " + p2.precoComDesconto());
		
		double precoFinal1 = p1.precoComDesconto();
		double precoFinal2 = p2.precoComDesconto(0.1);
		double mediaCarrinho = (precoFinal1+precoFinal2)/2;
		
		System.out.printf("Média do carrinho = R$%.2f.", mediaCarrinho);
	}
}
