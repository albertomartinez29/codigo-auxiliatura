/*
En un restaurante ubicado en una provincia lejana de la ciudad capital, quieren 
automatizar los pedidos de comida, pero sólo cuentan con una vieja computadora y 
no tienen mucho dinero para invertir en una moderna, debemos realizar un programa
 de tal manera que el cliente escoja el plato que desee, lo que sirven es: 
 1.- Picantito de pollo, 
 2.- Milanesita de Pollo, 
 3.- Caldito de Pollo, y 
 4.- matecito de Coca.
*/
#include <iostream>
#include <stdlib.h>
using namespace std;

int main(){
    int opcion;
    cout<<"*************************************"<<endl;
    cout<<"seleccion una opcion:"<<endl<<endl;
    cout<<"\t 1.- Picantito de pollo \n";
    cout<<"\t 2.- Milanesa de pollo \n";
    cout<<"\t 3.- Caldito de pollo \n";
    cout<<"\t 4.- Matecito de coca \n";
    cin>>opcion;
    system("cls");
    switch (opcion)
    {
    case 1:
        cout<<"\n \"selecciono el Picantito de pollo \"";
        break;
    case 2:
        cout<<"\n selecciono la milanesa de pollo";
        break;
    case 3:
        cout<<"\n selecciono caldito de pollo";
        break;
    case 4:
        cout<<"\n selecciono matecito de coca";
    default: 
        cout<<"opcion incorrecta";
        break;
    }
    return 0;
}