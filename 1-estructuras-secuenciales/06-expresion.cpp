//calcular el valor de la siguiente expresion 
//  P=(3*c)/(a+b+2)

#include <iostream>

using namespace std;

int main(){
    double a, b, c, P;
    cout<<"introducir a:";
    cin>>a;
    cout<<"introducir b:";
    cin>>b;
    cout<<"introducir c:";
    cin>>c;
    P=(3*c)/(a+b+2);
    cout<<"el valor es:"<< P;
    return 0;
}