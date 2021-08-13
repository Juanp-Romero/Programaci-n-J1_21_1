/******************************************************************************
Name: Repaso Punteros

Author: Juan Romero 
Date: 05/08/2021

Purpose: Repasar conceptos básicos sobre punteros

Usage: plug and play

*******************************************************************************/
#include <stdio.h>
#include <iostream>
#include <string>
using namespace std;
#include <iomanip>

void Cal_salud(float *salario, float *salud, int n ){
  for(int i =0; i<n;i++){
    *(salud+i)= *(salario+i)*0.125; // cálculo de los salarios usando punteros
  }
}

int main() {
  setlocale(LC_ALL, "spanish");
  int n;
  cout << "Ingrese número de usuarios: "<< endl;
  cin >>n;
  float salario[n]; // creación del vector
  string nombre[n]; // creación del vector
  float salud[n]; // creación del vector
  float *p_salario = &salario[0]; // Asignación del puntero en el vector
  float *p_salud = &salud[0]; // creación del vector

  for(int i =0; i<n;i++){
    cout << "Ingrese el salario "<< i  << " : "<< endl;
    cin >> salario[i]; // ingreso de los salarios de cada usuario
    cin.get();
    cout << "Ingrese el nombre "<< i  << " : "<< endl;
    getline(cin,nombre[i]); // ingreso de los salarios de cada usuario
  }

  Cal_salud(p_salario,p_salud, n);

  for(int i =0; i<n;i++){
    cout << "El valor de la salud correspondiente al usuario "<< nombre[i]  << "  es de :"<< salud[i]<< endl;
  }

  return 0;
}
