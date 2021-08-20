#include <iostream>
#include <stdio.h>
#include <iomanip>
#include<math.h>

using namespace std;
struct tienda{
    int ganancias;
    int ventas;
    string nombre;
    int precio;
    int cantidad;
    
  };

  
int main() {
 int add;
 int add1;
 int add2;
 int add3; 
 int opcion;

 tienda chocorramo ={200,4,"chocorramo",1800, 20};
 tienda alqueria = {300,5,"alqueria",2000,15};
 tienda diana = {500,7,"diana",1300,10};
 tienda rollo = {100,30,"rollo",500,8};
 

 do{
		cout<<"===== Bienvenido al menu ==== "<<endl;
    cout<<"===Seleccione una opcion para saber"<<endl;
		cout<<"1. Inventario "<<endl;
		cout<<"2. Ventas "<<endl;
		cout<<"3. Ganancias "<<endl;
    cout<<"4. Agregar Productos "<<endl;
		cout<<"5. salir del menu: "<<endl;
		cout<<"seleccione una opcion: ";
		cin>>opcion;
		switch (opcion){
			case 1:
       cout<<chocorramo.nombre<<" cantidad = "<< chocorramo.cantidad<<endl;
        cout<<alqueria.nombre<<" cantidad = "<< alqueria.cantidad<<endl;
       cout<<diana.nombre<<" cantidad = "<< diana.cantidad<<endl;  
         cout<<rollo.nombre<<" cantidad = "<< rollo.cantidad<<endl; 
			break;
			case 2:
      cout<<chocorramo.nombre<<" ventas = "<< chocorramo.ventas<<endl;
         cout<<alqueria.nombre<<" ventas = "<< alqueria.ventas<<endl;
         cout<<diana.nombre<<" ventas = "<< diana.ventas<<endl;
         cout<<rollo.nombre<<" ventas = "<< rollo.ventas<<endl;
			
			break;
			case 3:
			cout<<chocorramo.nombre<<" ganancias = "<< chocorramo.ganancias*chocorramo.ventas<<endl;
         cout<<alqueria.nombre<<" ganancias = "<< alqueria.ganancias*alqueria.ventas<<endl;
         cout<<diana.nombre<<" ganancias = "<< diana.ganancias*diana.ventas<<endl;
         cout<<rollo.nombre<<" ganancias = "<< rollo.ganancias*rollo.ventas<<endl;
			
	
			break;
      case 4:
         cout<<chocorramo.nombre<<" cantidad ="<< chocorramo.cantidad<<endl;
         cout<<alqueria.nombre<<" cantidad ="<< alqueria.cantidad<<endl;
         cout<<diana.nombre<<" cantidad ="<< diana.cantidad<<endl;
         cout<<rollo.nombre<<" cantidad ="<< rollo.cantidad<<endl;
        
        cout<<"Ingrese la cantidad a agregar chochorramo: ";
        cin>>add;
        cout<<"la Nueva cantidad es: "<<(chocorramo.cantidad+add)<<endl;
        
        cout<<"Ingrese la cantidad a agregar alqueria: ";
        cin>>add1;
        cout<<"la Nueva cantidad es: "<<(alqueria.cantidad+add1)<<endl;
        
        cout<<"Ingrese la cantidad a agregar diana: ";
        cin>>add2;
        cout<<"la Nueva cantidad es: "<<(diana.cantidad+add2)<<endl;
        
        cout<<"Ingrese la cantidad a agregar rollo: ";
        cin>>add3;
        cout<<"la Nueva cantidad es: "<<(rollo.cantidad+add3)<<endl;
			break;
      
			case 5:
			cout<<"saliendo del menu"<<endl;
			default:
			cout<<" seleccione una opcion valida"<<endl;
			
			system("PAUSE");
			system("cls");
		} 
	}while(opcion!=4);
	
	
	
	
	return 0;


}
