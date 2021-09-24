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

struct comida{
  string sabor = "insaboro";
  string color = "neutro";
  string olor= "neutro";
  int precio= 0;
  float precio_mas_iva=0;

  void calculo_iva(float iva = 20){precio_mas_iva = precio +precio*(iva/100);};
} agua;

int main() {
  setlocale(LC_ALL, "spanish");

  comida mandarina = {"acido", "naranja", "cítrico", 400};
  cout << "El color de la mandarina es: "<< mandarina.color << endl;
  cout << "El sabor de la mandarina es: "<< mandarina.sabor << endl;
  mandarina.calculo_iva(20);
  cout << "El precio del producto más iva de la mandarina es: "<< mandarina.precio_mas_iva << endl;


  comida chocolate;
  chocolate.sabor= "dulce";
  chocolate.color= "negro";
  chocolate.olor= "dulce";
  chocolate.precio= 2000;

  cout << "El color de la chocolate es: "<< chocolate.color << endl;
  cout << "El sabor de la chocolate es: "<< chocolate.sabor << endl;

  
  return 0;
}
