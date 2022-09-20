/*
Calcular el promedio de 3 numeros introducidos por teclado
*/

#include <iostream>

using namespace std;

int main(){
    int numero1, numero2, numero3, suma;
    float promedio;
    cout<<"Introduce el numero 1:";
    cin>>numero1;
    cout<<"Introduce el numero 2:";
    cin>>numero2;
    cout<<"Introduce el numero 3:";
    cin>>numero3;
    suma=numero1+numero2+numero3;
    //Un número o una variable de tipo int, se puede convertir a tipo float antecediendo al mismo la sentencia (float)
    promedio=(float)suma/3;        
    cout<<"El promedio es:"<<promedio;
    return 0;
}