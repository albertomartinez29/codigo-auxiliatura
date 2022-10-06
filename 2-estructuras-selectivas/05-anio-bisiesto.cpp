/*
	2. Diseñar un algoritmo que permita determinar si un año es o no es bisiesto. Un año es bisiesto si es
	múltiplo de 4 (por ejemplo 1984), excepto aquellos divisibles entre 100, salvo si ellos son también
	múltiplos de 400 (2000 es bisiesto, pero; 1800 no lo es).
*/
#include <iostream>

using namespace std;

int main(){
    int anio;
    cout<<"digite el año:";
    cin>>anio;
    if (anio%400==0){
        cout<<"si es año bisiesto";
    }
    else{
        if (anio%100==0){
            cout<<"no es año bisiesto";
        }
        else{
            if (anio%4==0){
                cout<<"si es año bisiesto";
            }
            else{
                cout<<"no es año bisiesto";
            }
        }
    }
    return 0;
}