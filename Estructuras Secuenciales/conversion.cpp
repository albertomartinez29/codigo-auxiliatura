/*
Dado una distancia en metros convertir a sus correspondientes
en centimetros y milimetros
*/

#include <iostream>

using namespace std;

int main(){
    float metros, centimetros, milimetros;
    cout<<"introduzca la distancia en metros:";
    cin>>metros;
    centimetros= metros*100;
    milimetros= centimetros*10;
    cout<<metros<<"m es igual a "<<centimetros<<"cm"<<endl;
    cout<<metros<<"m es igual a "<<milimetros<<"mm"<<endl;
    return 0;
}