package colecoes;

import java.util.LinkedList;
import java.util.Queue;

public class Fila {

	public static void main(String[] args) {

		Queue<String> fila = new LinkedList<>();

		// Offer e Add-> Adicionam elementos na fila

		// Diferença é o comportamento
		// quando a fila está cheia !
		fila.add("Ana"); // Retorna false
		fila.offer("Bia"); // Lança uma excessão
		fila.offer("Carlos");
		fila.offer("Daniel");
		fila.offer("Rafaela");
		fila.offer("Gui");

		// Peak e Element-> obter o proximo elementos
		// da fila (sem remover)

		// Diferença é o comportamento ocorre
		// quando a fila está vazia !
		System.out.println(fila.peek()); // retorna NULL
		System.out.println(fila.peek());
		System.out.println(fila.element());
		System.out.println(fila.element()); // Lança uma excessão

		// Poll e Remove-> obter o proximo elemento
		// da fila e remove
		
		// Diferença é o comportamento ocorre
		// quando a fila está vazia !
		System.out.println(fila.poll()); // Retorna NULL
		System.out.println(fila.remove()); // Lança excessão
		System.out.println(fila.poll());
		System.out.println(fila.poll());
		System.out.println(fila.poll());
		System.out.println(fila.poll());
		System.out.println(fila.poll());
		
		// fila.size();
		// fila.clear ();
		// fila.isEmpty();
		
		// fila.contains(...); 
	}
}
