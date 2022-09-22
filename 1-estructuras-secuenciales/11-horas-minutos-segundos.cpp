/*
5. Dado un entero ss introducido por teclado, donde ss representa segundos mostrarlos en horas: minutos: segundos [hh:mm:ss]
Ejemplo
ss: 3610
hh:mm:ss: 1:0:10
*/

#include <iostream>

using namespace std;

int main(){
    int hh, mm, ss;
    cout<<"introduzca la hora en segundos:";
    cin>>ss;
    mm = ss / 60;
    hh = mm / 60;
    mm = mm % 60;
    ss = ss % 60;
    cout<<hh<<":"<<mm<<":"<<ss<<endl;
    return 0;
}