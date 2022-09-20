/* 
Determinar el area de un trapecio
    A=(B+b)/2*h
*/

#include <iostream>

using namespace std;
int main(){
    float B, b, h, area;
    cin>>B>>b>>h;
    area=(B+b)/2*h;
    cout<<"el area es:"<<area;
    return 0;
}

