package fundamentos;

public class NotacaoPonto {

	public static void main(String[] args) {
		
		String s = "Bom dia X";
		s = s.replace("X", "Senhora"); //substitue algo (primeiro pelo segundo)
		s = s.toUpperCase(); //tranforma tudo letra maiúcula
		s = s.concat("!!!"); //junta ao texto
		
		System.out.println(s);
		
		String x = "Leo".toUpperCase();
		System.out.println(x);/*System.out.println("Leo".toUpperCase())
		tambem pode ser impressa assim.*/
		
		String y = "Bom dia X"
				.replace("X", "Gui")
				.toUpperCase()
				.concat("!!!"); // Pode quebrar a linha onde tiver "."
		System.out.println(y);
		
		//Tipos primitivos não tem o operador "."
		int a = 3;
		System.out.println(a);
	}
}
