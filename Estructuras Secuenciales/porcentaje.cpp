/*
Un profesor desea conocer el porcentaje de hombres y porcentaje de mujeres 
de un grupo de estudiantes,tomando en cuenta que se debe leer previamente la
cantidad de estudiantes hombres y mujeres.
*/
#include <iostream>

using namespace std;
int main(){
    int cant_hombres, cant_mujeres, total, por_hombres, por_mujeres;
    cout<<"digite la cantidad de hombres en su curso:";
    cin>>cant_hombres;
    cout<<"digite la cantidad de mujeres en su curso:";
    cin>>cant_mujeres;
    total=cant_hombres + cant_mujeres;
    por_hombres = (cant_hombres*100)/total;
    por_mujeres = (cant_mujeres*100)/total;
    cout<<"el porcentaje de hombres es: "<<por_hombres<<"% \n";
    cout<<"el porcentaje de mujeres es: "<<por_mujeres<<"% \n";
    return 0;
}
