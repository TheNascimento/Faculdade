/*
 * Classe para o primeiro exercício:
 *
 * 1) Um professor fez 3 provas durante um semestre mas só vai levar em conta as
 * duas notas mais altas para calcular a média. Faça uma aplicação em Java que 
 * peça o valor das 3 notas e mostre a média com as 2 notas mais altas.
 */
package primeiraapi;

import java.util.Scanner;

/**
 *
 * @author Tiago Nascimento
 */
public class PrimeiroExercicio {
    private double[] notas = new double[4]; // A média é armazenada aqui também.
    private double menor =  100.00; // Valor aleatório maior que 10. 
    
    // Método obtém, valida e descobre as duas maiores notas. 
    public void obterNotas(){
        // Obtenção e validação dos valores.
        for(int contador = 0; contador < notas.length-1; contador++) {
            do {
                System.out.println("Informe o valor da " + contador + 
                    " nota (de 0 a 10):");
                /*
                 * Sem tratamento de erros, caso qualquer valor excluindo número
                 * for digitado.
                */
                Scanner scanner = new Scanner(System.in);
                notas[contador] = scanner.nextFloat();
                
                if(notas[contador] < 0 || notas[contador] > 10){
                    System.out.println("Valor inválido!");
                }
            } while(notas[contador] < 0 || notas[contador] > 10);
            
            // Trecho que descobre o menor valor e o isola do cálculo.
            if (notas[contador] < menor){
                /* 
                 * Necessário se o menor valor for digitado depois do primeiro.
                 * De outra forma, os valores que forem considerados "menores"
                 * serão descartados!
                */
                if(menor != 100){
                    notas[3] += menor;
                    menor = notas[contador];
                } else {
                    menor = notas[contador];
                }    
            } else {
                /* 
                 * Se o valor não for menor que o "menor" anterior, 
                 * será adicionado ao espaço de média direto, sem tratamento.
                */
                notas[3] += notas[contador]; 
            }
        }
    }
    
    /* 
     * Método calcula média com as duas maiores médias mostra os valores no 
     * console. 
    */
    public void calcularMedia(){     
        System.out.println("\nA média considerando-se somente as duas maiores "
                + "notas é: " + notas[3]/2);
        System.out.println("----------------------------------------------------"
                + "------------");
    }
}
