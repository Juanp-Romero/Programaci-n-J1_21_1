/******************************************************************************
Se necesita tener el control de las compras y ventas de una cafeteria.
Cree una estructura que permita almacenar datos basicos de los productos en venta
y cree usando objetos un inventario de al menos 5 productos en venta.
Usando metodos definidos en la estructura, controle:
 *inventario
 * ventas
 * ganancias
 * agregar unidades al inventario(por si se acaban los productos)

Autor: Juan Manuel Ramirez
codigo:2192279
*******************************************************************************/

#include <iostream>
#include <stdio.h>
#include <iomanip>

using namespace std;
struct tienda{
    int ganancias;
    int ventas;
    string nombre;
    int precio;
    int cantidad;
    int surtir;
  };

  
int main() {
 
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
         cout<<chocorramo.nombre<<" cantidad ="<< chocorramo.cantidad<<endl;
         cout<<alqueria.nombre<<" cantidad ="<< alqueria.cantidad<<endl;
         cout<<diana.nombre<<" cantidad ="<< diana.cantidad<<endl;
         cout<<rollo.nombre<<" cantidad ="<< rollo.cantidad<<endl;
     break;
     
     case 2:
         cout<<chocorramo.nombre<<" ventas ="<< chocorramo.ventas<<endl;
         cout<<alqueria.nombre<<" ventas ="<< alqueria.ventas<<endl;
         cout<<diana.nombre<<" ventas ="<< diana.ventas<<endl;
         cout<<rollo.nombre<<" ventas ="<< rollo.ventas<<endl;
     break;
     
     case 3:
         cout<<chocorramo.nombre<<" ganancias ="<< chocorramo.ganancias*chocorramo.ventas<<endl;
         cout<<alqueria.nombre<<" ganancias ="<< alqueria.ganancias*alqueria.ventas<<endl;
         cout<<diana.nombre<<" ganancias ="<< diana.ganancias*diana.ventas<<endl;
         cout<<rollo.nombre<<" ganancias ="<< rollo.ganancias*rollo.ventas<<endl;
     break;
         
    case 4:
        cout<<"Se han agotado los productos... Quisieras surtir 15 unidades?"<<endl;
        cout<<"1. SI"<<endl;
        cout<<"2. No"<<endl;
        cin>>b;
        if(b==1){
         cout<<chocorramo.nombre<<" luego de surtido ="<< chocorramo.surtir<<"unidades"<<endl;
         cout<<alqueria.nombre<<"  luego de surtido ="<< alqueria.surtir<<"unidades"<<endl;
         cout<<diana.nombre<<"  luego de surtido ="<< diana.surtir<<"unidades"<<endl;
         cout<<rollo.nombre<<"  luego de surtido ="<< rollo.surtir<<"unidades"<<endl;
    break;
        }else{
            cout<<"Te has quedado sin producto"<<endl;
            opcion=5;
        }
 }
 }
 while(opcion==5);
 return 0;
 
 
}


 



