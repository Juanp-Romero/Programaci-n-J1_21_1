/******************************************************************************
Name: Serie Fibonnaci

Author: Juan Romero 
Date: 04/22/2021

Purpose: Calcular la sumatoria y productoria de los primeros n números de la serie fibonnaci

Usage: Plug and play

******************************************************************************/
#include <stdio.h>
#include <iostream> 
using namespace std;
#include <iomanip>

void Fibonacci_calc(int n){
  int v[n];
  int sumatoria=0;
  int productoria=1;
  v[0] = 0;
  v[1] = 1;

  for(int i = 2;i < n;i++){
    v[i] = v[i-1]+v[i-2];
  }

  for(int j = 0;j < n;j++){
    cout <<v[j] <<endl;
    sumatoria = sumatoria + v[j];
  }
  for(int k = 1;k < n;k++){
    productoria = productoria * v[k];
  }
  cout <<"La sumatoria es: "<< sumatoria<<endl;
  cout <<"La productoria es: "<< productoria<<endl;
};

int main() {
  setlocale(LC_ALL, "spanish");
  int n=0;
  cout <<" Por favor ingrese el valor máximo de la serie fibonnaci a calcular: "<<endl;
  cin >>n;

  Fibonacci_calc(n);
  return 0;
}
