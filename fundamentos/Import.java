package fundamentos;

import java.util.Date;

public class Import {

	public static void main(String[] args) {
		java.lang.String b = "Boa tarde!!!";
		java.lang.System.out.println(b); // Não é necessário usar Java.lang
		
		String s = "Bom dia!!!";
		System.out.println(s);
		
		Date d = new Date(); //precisa de import
		System.out.println(d);
		
//		JButton botao = new JButton(); (Precisa de import)
	}
}
