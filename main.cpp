#include <iostream>
#include <string.h>
#include "clases/clase.h"
using namespace std;
int main()
{
    int n; 
    int codigo;
    string marca;
    string modelo;
    double precio;
    int stock;

   cout<< "Ingrese la cantidad de objetos: "<<endl;
      cin>>n;

      Celulares *listaCelulares[n];

      for(int i=0; i<n; i++){
          cout<<"Ingrese el codigo: "<<endl;
          cin>>codigo;

          cout<<"Ingrese la marca: "<<endl;
          cin>>marca;

          cout<<"Ingrese el modelo: "<<endl;
          cin>>modelo;

          cout<<"Ingrese el precio: "<<endl;
          cin>>precio;

          cout<<"Ingrese el Stock: "<<endl;
          cin>>stock;

          listaCelulares[i] = new Celulares(codigo, marca, modelo, precio, stock);
          cout<<"******************Producto agregado****************"<<endl;
      }

      for(int i=0; i<n; i++){
          listaCelulares[i]->mostrar();
      } 

    return 0;
}