package exercicio1;

import java.util.Scanner;

/**
 *
 * @author Tiago Nascimento
 */
public class Exercicio1 {
    public static void main(String[] args) {
        double n;
        
        System.out.println("Informe um valor a para ser calculada sua raiz: ");
        Scanner scanner = new Scanner(System.in);
        n = scanner.nextDouble();
        
        if(n >= 0){
            System.out.println("A raiz de "+n+" é "+Math.sqrt(n));
            
        } else{
            System.out.println("Não calculo raiz de número negativo!");
        }
    }
    
}
