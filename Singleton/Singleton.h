#ifndef SINGLETON_H_INCLUDED
#define SINGLETON_H_INCLUDED

#include<iostream>

using namespace std;


//Implementa��o de Singleton Design Pattern
class Singleton{
private:
    // Atributo statico
    static Singleton* instance;

    // Construtor: privado para restringir a instancia��o fora da classe Singleton
    Singleton(){
        cout << "Construtor singleton sendo chamado." << endl;
        numero = 1;
    }

    // Variavel apenas para mostrar q a instancia � criada apenas uma vez;
    int numero;

public:
    // M�todo getIntance;
    static Singleton* getInstance() {
        if(instance == nullptr){
            cout << "A instancia nao existe. Cria uma nova instancia." << endl;
            instance = new Singleton();
        }
        else{
            cout << "Instancia existe. Retornando instancia ja criada." << endl;
        }
        return instance;
    };

    int show_number(){
        return numero;
    };

    // Fun��o para mostrar um novo objeto
    void show_Obj() {
        cout << "Novo Objeto" << endl;
    };
};

Singleton* Singleton :: instance = nullptr;


#endif // SINGLETON_H_INCLUDED
