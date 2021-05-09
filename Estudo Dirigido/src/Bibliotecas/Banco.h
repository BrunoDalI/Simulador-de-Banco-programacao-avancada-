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
    Menu _op;
    int _resposta;

    // EX 02 da Prova;
    void OP2() const;

    // EX 03 da Prova;
    void OP3();

    // EX 04 da Prova;
    void OP4();

    // EX 05 da Prova
    void OP5();

    // EX 06 da Prova
    void OP6();

    // EX 07 da Prova
    void OP7();
};



#endif // BANCO_H_INCLUDED
