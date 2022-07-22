package classe;

public class DataTeste {

	public static void main(String[] args) {

		Data d1 = new Data(17, 04, 1997);
		var d2 = new Data(04, 04, 1984);

		Data d3 = new Data();
		var d4 = new Data();

		System.out.printf("Daniel nasceu em: " + d1.obterDataformatada());
		System.out.printf("\nMárcio nasceu em: " + d2.obterDataformatada());
		System.out.printf("\nMárcio nasceu em: " + d3.obterDataformatada());
		System.out.printf("\nMárcio nasceu em: " + d4.obterDataformatada());
	}
}
