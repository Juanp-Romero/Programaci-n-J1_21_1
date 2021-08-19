/******************************************************************************
Name: Escritura en archivos .txt

Author: Juan Romero 
Date: 19/08/2021

Purpose: Mostrar la aplicación de escritura de archivos 

Usage: plug and play

*******************************************************************************/

#include <iostream>
#include <fstream> // flujo de archivo
#include <iomanip>
#include <string>
using namespace std;

int main()
{
  ofstream file;
  file.open("archivo.txt",ios::out);

  int v[5] = {0,1,1,2,3};
  string nombre[5];
  int a;
 
  if ( !file )
    {
      cerr << "No se pudo abrir el archivo" << endl;
      exit( EXIT_FAILURE );
    } // Validación de el archivo de texto  
 // cout <<"Ingrese el valor de a : "<<endl;
 // cin >> a;
 // ***** Ingreso de nombres   ***********
 //  cin.get();
  file <<setw(20)<< "Nombre:             " <<setw(3)<<"Nota"<<endl;
  file << "___________________________________" <<endl;
  for (int i=0; i <5; i++){
    cout << "Ingrese el nombre # "<<i+1 <<" : " << endl;
    getline(cin, nombre[i]); //almacenar datos en vector
    file <<setw(20)<<left<< nombre[i] << " Tiene una nota de: " <<setw(3) << v[i] <<endl; // envío a archivo de texto

  };
  
  file.close();
  return 0;
}
