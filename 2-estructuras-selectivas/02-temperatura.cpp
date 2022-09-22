/*
Hacer un Programa que escriba en pantalla un comentario con respecto 
a la temperatura del día.
        0 > temperatura < 10        "uy que frio"
        10 >= temperatura <15       "clima calido"
        15 >= temperatura            "mucha calor"
*/

#include <iostream>

using namespace std;

int main(){
    int temperatura;
    cout<<"introduzca la temperatura:";
    cin>>temperatura;
    if (temperatura < 10)
        cout<<"uy!!! que frio :(";
    else
        if(temperatura <15)
            cout<<"que clima agradable :)";
        else
            cout<<" mucha calor :(";
    return 0;
}