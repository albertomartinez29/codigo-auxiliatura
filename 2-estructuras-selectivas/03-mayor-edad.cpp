/*
9. Ingresar por teclado el nombre y la edad de cualquier persona e imprima, solo 
si la persona es mayor de edad, el nombre de la persona.
*/

#include <iostream>

using namespace std;

int main(){
    string nombre;
    int edad;
    char sexo;
    cout <<"introduzca su nombre:";
    cin>>nombre;
    cout<<"introduzca su edad:";
    cin>>edad;
    cout<<"introduzca el sexo de la persona:";
    cin>>sexo;
    if(edad >= 18 && sexo == 'M')
        cout<<nombre<<" es mayor de edad y es varon";
    else
        cout<<"no cumple la condicion";
    return 0;
}