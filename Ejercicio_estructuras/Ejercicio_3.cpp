/******************************************************************************
Se necesita tener el control de las compras y ventas de una cafeteria.
Cree una estructura que permita almacenar datos basicos de los productos en venta
y cree usando objetos un inventario de al menos 5 productos en venta.
Usando metodos definidos en la estructura, controle:
 *inventario
 * ventas
 * ganancias
 * agregar unidades al inventario(por si se acaban los productos)

Autor: Cristian Sierra
codigo:2192308
*******************************************************************************/
#include <iostream>
#include <fstream> // flujo de archivo
#include <iomanip>
#include <string>
using namespace std;
#include <stdio.h>


struct tienda{
    int ganancias;
    int ventas;
    string nombre;
    int precio;
    int cantidad;
    int surtir;
  };

  
int main() {
    
    ofstream cafeteria;
  cafeteria.open("cafeteria.txt",ios::out);
   if ( !cafeteria )
    {
      cerr << "No se pudo abrir el archivo" << endl;
      exit( EXIT_FAILURE );
    }
 
     int opcion,b;
 tienda chocorramo ={200,4,"chocorramo",1800, 20,15};
 tienda alqueria = {300,5,"alqueria",2000,15,15};
 tienda diana = {500,7,"diana",1300,10,15};
 tienda rollo = {100,30,"rollo",500,8,15};
 do{ 
     int opcion,b;

 cout<<"===== Bienvenido al menu ==== "<<endl;
 cout<<"el siguiente menu le mostrara las opccones para manejar su tienda"<< endl;
 cout<<"1. revisar inventario"<<endl;
 cout<<"2. revisar ventas "<<endl;
 cout<<"3. revisar ganancias"<<endl;
 cout<<"4. surtir productos"<<endl;
 cout<<"5. Salir del menu"<<endl;
 cout<<"Registre su opcion"<<endl;
 cin>>opcion;
 
 switch (opcion)
 {
     case 1:
         cafeteria<<chocorramo.nombre<<setw(15)<<" cantidad ="<< chocorramo.cantidad<<endl;
         cafeteria<<alqueria.nombre<<setw(17)<<" cantidad ="<< alqueria.cantidad<<endl;
         cafeteria<<diana.nombre<<setw(20)<<" cantidad ="<< diana.cantidad<<endl;
         cafeteria<<rollo.nombre<<setw(20)<<" cantidad ="<< rollo.cantidad<<endl;
     break;
     
     case 2:
         cafeteria<<chocorramo.nombre<<setw(15)<<" ventas ="<< chocorramo.ventas<<endl;
         cafeteria<<alqueria.nombre<<setw(17)<<" ventas ="<< alqueria.ventas<<endl;
         cafeteria<<diana.nombre<<setw(20)<<" ventas ="<< diana.ventas<<endl;
         cafeteria<<rollo.nombre<<setw(20)<<" ventas ="<< rollo.ventas<<endl;
     break;
     
     case 3:
         cafeteria<<chocorramo.nombre<<setw(15)<<" ganancias ="<< chocorramo.ganancias*chocorramo.ventas<<endl;
         cafeteria<<alqueria.nombre<<setw(17)<<" ganancias ="<< alqueria.ganancias*alqueria.ventas<<endl;
         cafeteria<<diana.nombre<<setw(20)<<" ganancias ="<< diana.ganancias*diana.ventas<<endl;
         cafeteria<<rollo.nombre<<setw(20)<<" ganancias ="<< rollo.ganancias*rollo.ventas<<endl;
     break;
         
    case 4:
        cout<<"Se han agotado los productos... Quisieras surtir 15 unidades?"<<endl;
        cout<<"1. SI"<<endl;
        cout<<"2. No"<<endl;
        cin>>b;
        if(b==1){
         cafeteria<<chocorramo.nombre<<" luego de surtido ="<<setw(11)<< chocorramo.surtir<<"unidades"<<endl;
         cafeteria<<alqueria.nombre<<"  luego de surtido ="<<setw(12)<< alqueria.surtir<<"unidades"<<endl;
         cafeteria<<diana.nombre<<"  luego de surtido ="<<setw(15)<< diana.surtir<<"unidades"<<endl;
         cafeteria<<rollo.nombre<<"  luego de surtido ="<<setw(15)<< rollo.surtir<<"unidades"<<endl;
    break;
        }else{
            cafeteria<<"Te has quedado sin producto"<<endl;
            opcion=5;
        }
 }
 }
 while(opcion==5);
 return 0;
 
 
}


 

