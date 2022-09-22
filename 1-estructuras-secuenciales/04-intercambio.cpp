//escribir un programa para intercambiar dos valores

#include <iostream>

using namespace std;

int main(){
    int valor1, valor2, aux;
    cout<<"digite el valor 1:";
    cin>>valor1;
    cout<<"digite el valor 2:";
    cin>>valor2;
    aux=valor1;
    valor1=valor2;
    valor2=aux;
    cout<<"ahora el valor 1 es:"<<valor1<<endl;
    cout<<"ahora el valor 2 es:"<<valor2;
    return 0;
}