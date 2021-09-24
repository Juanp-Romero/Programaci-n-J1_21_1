 /******************************************************************************
Name: 

Author: Juan Romero 
Date: 26/08/2021

Purpose: 

Usage: 

*******************************************************************************/
#include <stdio.h>
#include <iostream> 
using namespace std;
#include <iomanip>

class casa{
  public:
    int num_pisos = 0;
    int area=0;
    int num_habitaciones =0;
    int num_baños =0;
    void Ingresar_escritura(int numero){
      num_escritura =numero;
    };
    void imprimir_escritura(){cout<<"El número de la escritura es: " <<num_escritura<<endl ;};
    void Ingresar_dueño(string nombre);
    
  private:  
    string nombre_dueño = "NaN";
    int num_escritura =0;
};

  void casa :: Ingresar_dueño(string nombre){nombre_dueño = nombre; };

int main() {
  setlocale(LC_ALL, "spanish");

  casa homero;
  homero.num_pisos = 3;
  homero.num_baños = 3;
  homero.Ingresar_escritura(555555);
  homero.Ingresar_dueño("Homero J. Simpson");
  cout <<"El número de pisos de la casa es: "<<homero.num_pisos<<endl;
  homero.imprimir_escritura();

  return 0;
}
