//Escriba un programa que pida al usuario que escriba su nombre
//y lo salude llamandole por su nombre

#include <iostream>

using namespace std;

int main(){
    string nombre;
    cout<<"introduzca su nombre: ";
    cin>> nombre;
    cout<<"Hola, "<<nombre;
    return 0;
}