/*
 * Classe para o segundo exercício: 
 *
 * 2) Crie uma classe de conversão entre as temperaturas Celsius, Farenheit e 
 * Kelvin. Primeiro o usuário deve escolher se vai entrar com a temperatura em 
 * Celsius, Farenheit e Kelvin, e, em seguida, o usuário irá entrar com o valor 
 * da temperatura. Por fim, o usuário deve escolher a escala de conversão, isto 
 * é, Celsius, Farenheit ou Kelvin.
 */
package primeiraapi;

import java.util.Scanner;

/**
 *
 * @author Tiago Nascimento e Elian Victor
 */
public class SegundoExercicio {
    Scanner scanner = new Scanner(System.in);
    private int escolha1, escolha2;
    private double temperatura;
    
    public void obterValor() {
        System.out.println("----- Conversão de temperaturas -----\n");
        
        // Recebe o tipo, valor da temperatura a ser convertida e os valida.
        do {
            System.out.println("Informe qual unidade de medida está usando - (1)"
                    + " para Celsius, (2) para Farenheit e (3) para Kelvin:");
            escolha1 = scanner.nextInt();
            
            if(escolha1 != 1 && escolha1 != 2 && escolha1 != 3){
                System.out.println("Valor inválido!\n");
            }
        }while(escolha1 != 1 && escolha1 != 2 && escolha1 != 3);
        
        System.out.println("Informe o valor a ser convertido: ");
        temperatura = scanner.nextDouble();
    }
    
    public void calcularTemperatura() {
        // Converte a temperatura para a medida desejada
        do {
            System.out.println("Informe para qual unidade de medida deseja converter"
                + " este valor - (1) para Celsius, (2) para Farenheit e (3) para"
                + " Kelvin:");
            escolha2 = scanner.nextInt();
            
            if(escolha2 != 1 && escolha2 != 2 && escolha2!= 3){
                System.out.println("Valor inválido!\n");
            }
        }while(escolha2 != 1 && escolha2 != 2 && escolha2 != 3);
        
        /* Utiliza a primeira unidade como base para saber então qual fórmula 
         * utilizar para converter para a segunda. Exemplo - Caso 1(Celsius): 
         * utilize essas fórmulas para converter para todos as outras medidas.
        */        
        switch(escolha1) {
            case 1:
                if(escolha2 == 1){
                    System.out.println("O valor em Celsius convertido é de " + 
                            temperatura + "°");
                } else if(escolha2 == 2){
                    System.out.println("O valor em Celsius convertido é de " + 
                            ((temperatura * 9/5) + 32) + "°F");
                } else {
                    System.out.println("O valor em Celsius convertido é de " + 
                            (temperatura + 273.15) + "K");
                }
                break;
            case 2:
                if(escolha2 == 1){
                    System.out.println("O valor em Farenheit1 convertido é de " + 
                            ((temperatura - 32) * 5/9) + "°");
                } else if(escolha2 == 2){
                    System.out.println("O valor em Farenheit2 convertido é de " + 
                            temperatura + "°F");
                } else {
                    System.out.println("O valor em Farenheit3 convertido é de " + 
                            ((temperatura - 32) * 5/9 + 273.15) + "K");
                }
                break;
            case 3:
                if(escolha2 == 1){
                    System.out.println("O valor em Kelvin convertido é de " + 
                            (temperatura - 273.15) + "°");
                } else if(escolha2 == 2){
                    System.out.println("O valor em Kelvin convertido é de " + 
                            ((temperatura - 273.15) * 9/5 + 32) + "°F");
                } else {
                    System.out.println("O valor em Kelvin convertido é de " + 
                            temperatura + "K");
                }
                break;
        }
    
        System.out.println("----------------------------------------------------"
                + "------------");
    }
}
