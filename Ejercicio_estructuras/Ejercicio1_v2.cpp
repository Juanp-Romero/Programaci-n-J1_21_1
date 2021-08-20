/*Se desea realizar el inventario de una tienda. Cree 2 estructuras que englobe dos grupos de
productos seleccionados. Cada estructura debe tener al menos 3 atributos, adicionalmente uno
de ellos debe ser una función que calcula el precio final del producto (precio base+ 19% iva).
Tomando como base las estructuras definidas, ingrese 3 productos de cada una de las
estructuras, dando los valores y características a cada producto.

Muestre en pantalla el listado de elementos, con los atributos ingresados en forma de tabla En
donde muestre cada característica de los productos ingresados.
*/

#include<iostream>
using namespace std;
struct globos{
	char nombre[25];
    char textura[100];
    float precio;

}objeto1, objeto2, objeto3;

/*El algoritmo arma el inventario de una tienda según los objetos o alimentos que ingrese,
el numero maximo de cosas a ingresar es de 3 objetos para la sección de globos
y 3 alimentos para la sección de carnes*/
struct carnes{
	char nombre[25];
	char textura[100];
    float precio;
    

}objeto4,objeto5,objeto6;

int main(){
	float precio_final1=0,precio_final2=0,precio_final3=0;
	float precio_final4=0,precio_final5=0,precio_final6=0;
	cout<<"Ingrese los datos del primer producto del inventario de globos"<<endl;
	cout<<"Nombre: ";
	cin.getline(objeto1.nombre,25,'\n');
	cout<<"Textura: ";
	cin.getline(objeto1.textura,100,'\n');
	cout<<"Precio: ";
	cin>>objeto1.precio;
	cout<<"------------------------------------------------------"<<endl;
	cin.ignore();
	cout<<"Ingrese los datos del segundo producto del inventario de globos"<<endl;
	cout<<"Nombre: ";
	cin.getline(objeto2.nombre,25,'\n');
	cout<<"Textura: ";
	cin.getline(objeto2.textura,100,'\n');
	cout<<"Precio: ";
	cin>>objeto2.precio;
	cout<<"----------------------------------------------------------"<<endl;
	cin.ignore();
	cout<<"Ingrese los datos del tercer producto del inventario de globos"<<endl;
	cout<<"Nombre: ";
	cin.getline(objeto3.nombre,25,'\n');
	cout<<"Textura: ";
	cin.getline(objeto3.textura,100,'\n');
	cout<<"Precio: ";
	cin>>objeto3.precio;
	cout<<"----------------------------------------------------------"<<endl;
	cin.ignore();
	cout<<endl;
	cout<<"Datos del inventario de globos"<<endl;
	cout<<endl;
	cout<<"Objeto 1"<<endl;
	cout<<endl;
	precio_final1= ((objeto1.precio)*19)/100;
	cout<<"Nombre: "<<objeto1.nombre<<endl;
	cout<<"Textura: "<<objeto1.textura<<endl;
	cout<<"Precio+19%iva: "<<precio_final1+objeto1.precio<<endl;
	cout<<endl;
	
	cout<<"Objeto 2"<<endl;
	cout<<endl;
	precio_final2=((objeto2.precio)*19)/100;
	cout<<"Nombre: "<<objeto2.nombre<<endl;
	cout<<"Textura: "<<objeto2.textura<<endl;
	cout<<"Precio+19%iva: "<<precio_final2+objeto2.precio<<endl;
	cout<<endl;
	
	cout<<"Objeto 3"<<endl;
	cout<<endl;
	precio_final3=((objeto3.precio)*19)/100;
	cout<<"Nombre: "<<objeto2.nombre<<endl;
	cout<<"Textura: "<<objeto2.textura<<endl;
	cout<<"Precio+19%iva: "<<precio_final3+objeto3.precio<<endl;
	
	//Sección de carnes------------------------------------------------------------------------------
	cout<<endl;
	cout<<"Ingrese los datos del primer producto del inventario de carnes"<<endl;
	cout<<"Nombre: ";
	cin.getline(objeto4.nombre,25,'\n');
	cout<<"Textura: ";
	cin.getline(objeto4.textura,100,'\n');
	cout<<"Precio: ";
	cin>>objeto4.precio;
	cout<<"------------------------------------------------------"<<endl;
	cin.ignore();
	cout<<"Ingrese los datos del segundo producto del inventario de carnes"<<endl;
	cout<<"Nombre: ";
	cin.getline(objeto5.nombre,25,'\n');
	cout<<"Textura: ";
	cin.getline(objeto5.textura,100,'\n');
	cout<<"Precio: ";
	cin>>objeto5.precio;
	cout<<"----------------------------------------------------------"<<endl;
	cin.ignore();
	cout<<"Ingrese los datos del tercer producto del inventario de carnes"<<endl;
	cout<<"Nombre: ";
	cin.getline(objeto6.nombre,25,'\n');
	cout<<"Textura: ";
	cin.getline(objeto6.textura,100,'\n');
	cout<<"Precio: ";
	cin>>objeto6.precio;
	cout<<"----------------------------------------------------------"<<endl;
	cin.ignore();
	cout<<endl;
	cout<<"Resumen del inventario de carnes"<<endl;
	cout<<endl;
	cout<<"Alimento 1"<<endl;
	cout<<endl;
	precio_final4= ((objeto4.precio)*19)/100;
	cout<<"Nombre: "<<objeto4.nombre<<endl;
	cout<<"Textura: "<<objeto4.textura<<endl;
	cout<<"Precio+19%iva: "<<precio_final4+objeto4.precio<<endl;
	cout<<endl;
	
	cout<<"Alimento 2"<<endl;
	cout<<endl;
	precio_final5=((objeto5.precio)*19)/100;
	cout<<"Nombre: "<<objeto5.nombre<<endl;
	cout<<"Textura: "<<objeto5.textura<<endl;
	cout<<"Precio+19%iva: "<<precio_final5+objeto5.precio<<endl;
	cout<<endl;
	
	cout<<"Alimento 3"<<endl;
	cout<<endl;
	precio_final6=((objeto6.precio)*19)/100;
	cout<<"Nombre: "<<objeto6.nombre<<endl;
	cout<<"Textura: "<<objeto6.textura<<endl;
	cout<<"Precio+19%iva: "<<precio_final6+objeto6.precio<<endl;
	
	
	
	
	return 0;
}

