/*
 * Projeto para implementação da Atividade da aula 07 - Herança
 *
 * Atividade:
 * 1) Criar poupança
 * 2) Criar conta especial
 * 3) Realizar saque
 * 4) Realizar depósito
 * 5) Atualizar poupanças
 * 6) Mostrar saldos
 *
 * Data: 28/04/2019
 */
package contas;

/**
 *
 * @author Tiago Nascimento
 */
public class Contas {

    
    public static void main(String[] args) {
        ContaPoupanca poupanca1 = new ContaPoupanca();
        ContaPoupanca poupanca2 = new ContaPoupanca();
        ContaEspecial especial1 = new ContaEspecial();
        
        
        poupanca1.deposita(1500);
        poupanca1.saca(1000);
        especial1.deposita(1000);
        poupanca2.deposita(200);
        poupanca1.atualiza(0.1);
        poupanca2.atualiza(0.5);
        
        System.out.println("\nSaldo da poupanca 1: R$" + poupanca1.getSaldo());
        System.out.println("Saldo da poupanca 2: R$" + poupanca2.getSaldo());
        System.out.println("Saldo da conta especial 1: R$" + especial1.getSaldo());
    }
    
}
