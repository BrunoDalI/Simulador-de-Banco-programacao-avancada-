
// 5. Altere os construtores das classes ContaCorrente e ContaPoupanca para
//    imprimir a seguinte mensagem: "Criando	 conta	 {numero}	 do	 cliente
//    {cliente}" , onde {numero} � o n�mero da conta e {cliente} � o nome do cliente da conta.

// OBS: Como o _numero da classe CONTA � privado, tive que fazer essa modifica��o do ex 5 pelo construtor da classe conta.
// linha 30;

#ifndef CONTAPOUPANCA_H_INCLUDED
#define CONTAPOUPANCA_H_INCLUDED

// ContaPoupanca
// extrato(): void
// aplicaJurosDiarios(dias: int): void
// Conta <----- ContaPoupanca


// Conta <----- ContaPoupanca
#include "Conta.h"
class ContaPoupanca : public Conta{
public:
    // CONSTRUTOR:
    ContaPoupanca(int numero, Cliente* nomeCliente) : Conta(numero, nomeCliente) { }


    // M�TODOS GERAIS:
    // extrato(): void
    void extrato() {
        cout << endl;
        //cout << "Criando conta " << _numero << " do cliente " << _nomeCliente->getNome() << endl;
        cout << " +" << setfill('-') << setw(46) << "+" << endl;
        cout << " |" << setfill(' ') << setw(3) << "  Extrato - Conta Poupanca" << setfill(' ') << setw(20) << "|" << endl;
        cout << " +" << setfill('-') << setw(46) << "+" << endl;
        Conta::extrato();
        cout << " +" << setfill('-') << setw(46) << "+" << endl;
    };

    // aplicaJurosDiarios(dias: int): void
    void aplicaJurosDiarios(int dias) {
        cout << " | > Aplicacao do juros sobre a Conta Poupanca" << endl;
        // enquanto uma conta poupan�a aplica juros de 0,08% ao dia.
        float juros = getSaldo();
        juros *= ((0.08/100) * dias);
        cout << " | Juros: " << juros << endl;
        cout << " | Saldo: " << (getSaldo() + juros) << endl;
        cout << " +" << setfill('-') << setw(46) << "+";
        cout << endl;
    }
private:

};

#endif // CONTAPOUPANCA_H_INCLUDED
