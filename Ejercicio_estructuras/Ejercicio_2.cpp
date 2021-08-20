/*
Ejercicio #2 estructuras con escritura en archivo .txt

Autores:Andres Martinez,Anwar Cuello,Sergio Santos

*/
#include <iostream>
#include <iomanip>
#include <stdio.h>
#include <fstream>
#include <stdlib.h>
using namespace std;
 
struct coche{
   string marca;
   long double precio;
   string color;
   string estado;
   string disp_credito;
 } auto1;



int main() {
 coche Mazda {"Mazda",60000000,"Rojo","Nuevo","Si"};
 coche BMW {"BMW",240000000,"Blanco","Usado","No"};
 coche Toyota {"Toyota",160000000,"Negro","Nuevo","No"};

cout << "\n Elija la marca de auto que desea comprar " <<endl;
cout << " 1 si es Mazda " << endl;
cout << " 2 si es BMW " << endl;
cout << " 3 si es Toyota " << endl;
ofstream tabla;
tabla.open("tabla.txt",ios::out);
  if ( !tabla )
    {
      cerr << "No se pudo abrir el archivo" << endl;
      exit( EXIT_FAILURE );
    }
    tabla<<setw(10)<<left<<"MARCA"<<setw(10)<<left<<"COLOR"<<setw(10)<<left<<"ESTADO"<<setw(15)<<left<<"PRECIO"<<setw(10)<<left<<"DISP CREDITO"<<endl;

    tabla<<setw(10)<<left<< Mazda.marca <<setw(10)<<left<< Mazda.color <<setw(10)<<left<< Mazda.estado <<setw(15)<<left<<std::setprecision(2)<< Mazda.precio <<setw(10)<<left<< Mazda.disp_credito <<endl;

    tabla<<setw(10)<<left<< BMW.marca <<setw(10)<<left<< BMW.color <<setw(10)<<left<< BMW.estado <<setw(15)<<left<<std::setprecision(2)<< BMW.precio <<setw(10)<<left<< BMW.disp_credito <<endl;

    tabla<<setw(10)<<left<< Toyota.marca <<setw(10)<<left<< Toyota.color <<setw(10)<<left<< Toyota.estado <<setw(15)<<left<<std::setprecision(2)<< Toyota.precio <<setw(10)<<left<< Toyota.disp_credito <<endl;


  tabla.close();  
int m;
cin >> m;
while(m<0 & m>3){
  cout << " Vuelva a ingresar un numero valido " << endl;
  cin >>  m;
}
if (m==1){
    cout << " Marca: " << Mazda.marca <<endl;
    cout << " Precio: $ " << Mazda.precio << endl;
    cout << " Color: " << Mazda.color <<endl;
    cout << " Estado: " << Mazda.estado <<endl;
    cout << " Disponibilidad de credito: " << Mazda.disp_credito <<endl;  }
  if (m==2){
    cout << " Marca: " << BMW.marca <<endl;
    cout << " Precio: $ " << BMW.precio << endl;
    cout << " Color: " << BMW.color <<endl;
    cout << " Estado: " << BMW.estado <<endl;
    cout << " Disponibilidad de credito: " << BMW.disp_credito <<endl;  }
  if (m==3){
    cout << " Marca: " << Toyota.marca <<endl;
    cout << " Precio: $ " << Toyota.precio << endl;
    cout << " Color: " << Toyota.color <<endl;
    cout << " Estado: " << Toyota.estado <<endl;
    cout << " Disponibilidad de credito: " << Toyota.disp_credito <<endl;}


return 0;  

}

