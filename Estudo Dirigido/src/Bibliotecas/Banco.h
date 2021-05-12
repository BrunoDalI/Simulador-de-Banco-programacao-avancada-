#ifndef BANCO_H_INCLUDED
#define BANCO_H_INCLUDED


#include "Menu.h"
#include "ContaCorrente.h"
#include "ContaPoupanca.h"


class Banco{
public:

    // MÉTODOS GERAIS:
    void inicio();

private:
    // Atributos da classe Banco;
    Menu _op;
    int _resposta;

    // Funções que realizam os ex da lista;
    
    // EX 02 do ED;
    void OP2() const;

    // EX 03 do ED;
    void OP3();

    // EX 04 do ED;
    void OP4();

    // EX 05 do ED;
    void OP5() const;

    // EX 06 do ED;
    void OP6();

    // EX 07 do ED;
    void OP7();
};



#endif // BANCO_H_INCLUDED
