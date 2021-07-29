/*
 * Elabore uma classe ContaBancaria com os seguintes atributos e métodos:
 * - Atributos: nome do cliente, número da conta, saldo;
 * - Métodos: getters e setters (apenas o necessário), deposita e saca.
 * Posteriormente, acrescente ao projeto duas classes herdadas de ContaBancaria:
 * ContaPoupanca e ContaEspecial.
 * 
 * Data: 28/04/2019
 */
package contas;

/**
 *
 * @author Tiago Nascimento
 */
public class ContaBancaria {
    private String nomeDoCliente;
    private int numeroDaConta;
    private double saldo;

    public String getNomeDoCliente() {
        return nomeDoCliente;
    }

    public void setNomeDoCliente(String nomeDoCliente) {
        this.nomeDoCliente = nomeDoCliente;
    }

    public int getNumeroDaConta() {
        return numeroDaConta;
    }

    public void setNumeroDaConta(int numeroDaConta) {
        this.numeroDaConta = numeroDaConta;
    }

    public double getSaldo() {
        return saldo;
    }

    public void setSaldo(double saldo) {
        this.saldo = saldo;
    }
 
    public void deposita(double valor) {
        this.saldo += valor;
        System.out.println("Depósito de R$" + valor + " realizado com sucesso!");
    }
    
    public void saca(double valor) {
        if(this.saldo >= valor) {
            this.saldo -= valor;
            System.out.println("Saque de R$" + valor + " efetuado com sucesso!");
        } else {
            System.out.println("A conta informada não possui saldo suficiente!");
        }
    }
}
