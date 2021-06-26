

#include "Singleton.h" seguin

int main(){
    Singleton *s1, *s2, *s3;

    s1 = Singleton :: getInstance();
    s1->show_Obj();
    cout << "Endereco do objeto: " << &s1 << " numero de instancias: " << s1->show_number() << endl;

    s2 = Singleton :: getInstance();
    s2->show_Obj();
    cout << "Endereco do objeto: " << &s2 << " numero de instancias: " << s2->show_number() << endl;

    s3 = Singleton :: getInstance();
    s2->show_Obj();
    cout << "Endereco do objeto: " << &s3 << " numero de instancias: " << s3->show_number() << endl;
    return 0;
}
