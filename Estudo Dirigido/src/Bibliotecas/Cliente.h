#ifndef CLIENTE_H_INCLUDED
#define CLIENTE_H_INCLUDED

#include <iostream>
#include <string>

using namespace std;


// Cliente
// _nome: string
// getNome(): string
// setNome(nome: string): void
// Conta <>----- Cliente

class Cliente{
public:
    // CONSTRUTOR:
    // Cliente(nome: string)
    Cliente(string nome) : _nome(nome) { // Empty;
    }

    // DESTRUTOR:
    ~Cliente(){}


    // ACESSORES / MUTANTES:
    // getNome(): string
    string getNome() const {
        return _nome;
    }

    // setNome(nome: string): void
    void setNome(string nome) {
        _nome = nome;
    }

private:
    // _nome: string
    string _nome;
};

#endif // CLIENTE_H_INCLUDED
