/*
	Hacer un menú que considere las siguientes opciones:
		Caso 1: Cubo de un numero
		Caso 2: Numero par o impar
    	Case 3: salir.
*/
#include <iostream>
#include <math.h> //esta libreria lo estamos utilizando para utilizar el pow
using namespace std;

int main(){
	int op, num;
	
	cout<<"1.- Cubo de un numero"<<endl;
	cout<<"2.- Numero par o impar"<<endl;
	cout<<"3.- Salir "<<endl;

	cout<<"seleccione una opcion"<<endl;
	cin>>op;
	switch (op)
	{
	case 1:
		cout<<"digite un numero";
		cin>>num;
		num=pow(num, 3); //esta funcion eleva un numero al cubo
		cout<<"el numero elevado al cubo es: "<<num;
		/* code */
		break;
	case 2:
		cout<<"digite un numero:";
		cin>>num;
		if (num%2 ==0){
			cout<<"el numero es par";
		}
		else{
			cout<<"el numero es impar";
		}
		break;
	case 3: break;
	default: 
		cout<<"no eligio ninguna opcion";
		break;
	}
	return 0;
}

