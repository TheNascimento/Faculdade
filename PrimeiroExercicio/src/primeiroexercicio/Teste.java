package primeiroexercicio;

import java.util.Scanner;

/**
 *
 * @author Tiago Nascimento
 */
public class Teste {
    private float numero;
    public void setNumero(int numero){
        this.numero = numero;
    }
    public float getNumero(){
        return this.numero;
    }
    
    public void calcularRaiz(){
        // Chamada para o usuário digitar o valor
        Scanner scanner = new Scanner(System.in);
        System.out.println("Informe um valor para cálculo de sua raiz: ");
        this.numero = scanner.nextFloat();
        
        // Calculo e apresentação do resultado
        if(this.numero >= 0){
            System.out.println("\nA raiz de "+numero+" é "+Math.sqrt(numero)+"\n");
        }else{
            System.out.println("Não existe raiz de numero negativo!\n");
        }
    }
}
