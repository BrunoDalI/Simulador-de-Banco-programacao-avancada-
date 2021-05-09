#ifndef CONTA_H_INCLUDED
#define CONTA_H_INCLUDED

#include "Cliente.h"
#include <iostream>
#include <iomanip> // Para o setfill();

using namespace std;

// Conta
// _numero: int
// _saldo: int
// Conta(numero: int, cliente: Cliente)
// deposita(valor: float): void
// retira(valor: float): void
// transfere(ContaDestino: Conta): void
// extrato(): void
// aplicaJurosDiario(dias: int): void


class Conta{
public:
    // CONSTRUTOR:
    // Conta(numero: int, cliente: Cliente)
    Conta(int numero, Cliente* nomeCliente) : _numero(numero), _saldo(0), _nomeCliente(nomeCliente) {

        //EX 05
        //                  "Criando conta	    {numero}	 do	cliente             {cliente}"
        cout << endl << " -> Criando conta " << _numero << " do cliente " << _nomeCliente->getNome();
    }

    // DESTRUTOR:
    ~Conta() {
         delete(_nomeCliente);
    }

    // ACESSORES / MUTANTES:
    int getNumero() const{
        return _numero;
    }
    void setNumero(int numero){
        _numero = numero;
    }


    float getSaldo() const{
        return _saldo;
    }
    void setNumero(float saldo){
        _saldo = saldo;
    }


    // M�TODOS GERAIS:
    // deposita(valor: float): void
    void deposita(float valor);
    // retira(valor: float): void
    void retira(float valor);
    // transfere(ContaDestino: Conta): void
    void transfere(Conta *ContaDestino, float valorTrasnf);


    // extrato(): void
    // virtual das classes ContaCorrente/ContaPoupanca
    virtual void extrato() const{
        cout << " | N-Conta: 0" << _numero << endl;
        cout << " | Cliente Nome: " << _nomeCliente->getNome() << endl;
        cout << " | Saldo: " << getSaldo() << " R$" << endl;
    }

    // aplicaJurosDiario(dias: int): void
    // virtual das classes ContaCorrente/ContaPoupanca
    virtual void aplicaJurosDiarios(int dias) = 0;

private:
    // _numero: int
    int _numero;
    // _saldo: int
    int _saldo;

    Cliente* _nomeCliente;
};


#endif // CONTA_H_INCLUDED
