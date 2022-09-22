/*
Escriba un programa que pregunte al usuario la hora actual t del reloj y un número entero de horas h, que indique qué hora marcará el reloj dentro de h horas:
Hora actual: 3
Cantidad de horas: 5
En 5 horas, el reloj marcara las 8
Hora actual: 11
Cantidad de horas: 43
En 43 horas, el reloj marcara las 6
*/

#include <iostream>

using namespace std;

int main(){
    int t, h , ch;
    int suma;
    cout<<"hora actual:";
    cin>>t;
    cout<<"cantida de horas:";
    cin>>h;
    suma=t+h;
    if(suma%12==0){
        ch=12;
    }else{
        ch = suma%12;
    }
    cout<<"en "<<h<<" horas, el reloj marcara las "<<ch;
    return 0;
}