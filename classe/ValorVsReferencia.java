package classe;

public class ValorVsReferencia {

	public static void main(String[] args) {
		
		double a= 2;
		double b= a; // Atribuição por valor (Tipo primitivo);
		
		a++;
		b--;
		
		System.out.println(a + " " + b);
		
		Data d1= new Data (1, 6, 2022);
		Data d2= d1; // Atribuição por referencia (objeto);
		
		d1.ano= 31;
		d2.mes= 07;
		
		d1.ano= 2025;
		
		System.out.println(d1.obterDataformatada());
		System.out.println(d1.obterDataformatada());
		
		voltarDataParaValorPadrao(d1); // função;

		System.out.println(d2.obterDataformatada());
		System.out.println(d2.obterDataformatada());
		
		int c= 5;
		alterarPrimitivo (c);
		System.out.println(c);
	}
	
	static void voltarDataParaValorPadrao (Data d) {
		d.dia= 1;
		d.mes= 1;
		d.ano= 1970;
	}
	
	static void alterarPrimitivo (int c) {
		c++;
	}
}
