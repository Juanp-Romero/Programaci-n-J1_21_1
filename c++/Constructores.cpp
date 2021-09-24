/******************************************************************************
Name: Principios de constructores

Author: Juan Romero 
Date: 31/08/2021

Purpose: Explicar los principios básicos de constructores

Usage: 

*******************************************************************************/
#include <stdio.h>
#include <iostream> 
using namespace std;
#include <iomanip>

class videojuegos{
  public:
    string nombre = "NaN";
    string categoria = "Nan";
    string plataforma = "PC";
    videojuegos(){};
    videojuegos( string _nombre,  string _categoria ,  string _plataforma );
    videojuegos( double _valor,  string _categoria  );//constructor
  private:
    float valor = 0;
    string usuario;
};

  videojuegos :: videojuegos( string _nombre,  string _categoria ,  string _plataforma ){
    nombre = _nombre;
    categoria = _categoria;
    plataforma =_plataforma;
  };


  videojuegos :: videojuegos( double _valor,  string _categoria ): valor(_valor),categoria(_categoria){
   // valor = _valor;
   // categoria = _categoria;
  };

int main() {
  setlocale(LC_ALL, "spanish");

  videojuegos sonic("Sonic", "arcade", "Multi-plataforma" );
  videojuegos pacman (1000, "arcade");
 // sonic.nombre = "Sonic";
//sonic.categoria = "arcade";
 // sonic.plataforma = "Multi-plataforma";
  cout <<" El juego "<< sonic.nombre << " es un juego " << sonic.categoria <<endl;
  cout <<" El juego "<< pacman.nombre << " es un juego " << pacman.categoria <<endl;
  return 0;
}
