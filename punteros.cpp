/******************************************************************************
Name: Repaso Punteros

Author: Juan Romero 
Date: 05/08/2021

Purpose: Repasar conceptos básicos sobre punteros

Usage: plug and play

*******************************************************************************/
#include <stdio.h>
#include <iostream> 
using namespace std;
#include <iomanip>
#include "sumar.h"


int main() {
  setlocale(LC_ALL, "spanish");

  int a; // creé la variable
  int *p_a=&a; //Asigné el puntero
  int v[5]={10,20,30,40,50}; // creación del vector
  int *p_v = &v[0]; // Asignación del puntero en el vector
  int *p2_v = &v[2]; //  Asignación de un segundo puntero 
  //cout << "valor de la variable en  3: " << v[3] <<endl;
  //cout << "puntero:  " <<&p_v <<endl;
  //cout << "Dirección del valor v[0]:  " <<&v[0]<<endl;
  //cout << "Dirección del valor v[1]:  " << *(p_v+1)<<endl;
  *p2_v = 15;
  p_v=p2_v;
  sumar(p_v, 5);
  for(int i =0; i<5;i++){
    cout << "Dirección del valor v["<<i<<"]:  " << v[i]<<endl; // inpresión de los datos del vector v
  }

  return 0;
}
