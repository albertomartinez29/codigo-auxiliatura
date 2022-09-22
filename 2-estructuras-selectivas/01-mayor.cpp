//Hacer un Programa que indique qué numero de los tres introducidos por el usuario es mayor


#include <iostream>

using namespace std;

int main(){
    int num1, num2, num3, mayor;
    cout<<"introduzca el valor 1:";
    cin>>num1;
    cout<<"introduzca el valor 2:";
    cin>>num2;
    cout<<"introduzca el valor 3:";
    cin>>num3;
    if(num1>num2 && num1>num3)
        mayor=num1;
    if(num2>num1 && num2>num3)
        mayor= num2;
    if(num3>num1 && num3>num2)
        mayor = num3;
    cout<<"el numero mayor es:"<<mayor;
    return 0;
}