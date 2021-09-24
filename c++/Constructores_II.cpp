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

class celular{
  public: 
    int precio = 500000;
    string modelo = "Readmi Note 8";
    string procesador = "Snapdragon 660" ;
    int ram = 4;
    int rom = 64;
  // ******* Métodos
    void print_precio_base(){ cout << "El precio base es: " <<precio_base<<endl;};
  // ******* listado de constructores ******
    celular (){}; // constructor por defecto
    celular(int precio, string modelo); // constructor con 2 entradas versión 1
    celular(int temp_serial, int temp_ram) : serial(temp_serial), ram(temp_ram){}; // contructor 2 entradas versión 2
    celular(int temp_precio, string temp_modelo, string temp_procesador, int temp_ram, int temp_rom); // constructor 5 entradas
  // *******fin de listado de constructores ******
  private:
    int IMEI = 0000;
    int serial = 0000;
    int precio_base = 0000;
};

  celular :: celular (int temp_precio, string temp_modelo){
    modelo = temp_modelo;
    precio = temp_precio;
  };

  celular :: celular(int temp_precio, string temp_modelo, string temp_procesador, int temp_ram, int temp_rom): precio(temp_precio), modelo(temp_modelo), procesador(temp_procesador), ram(temp_ram), rom(temp_rom){
    cout << "El celular se ha creado de forma exitosa"<<endl;
    precio_base = precio*0.55;
  };


int main() {
  setlocale(LC_ALL, "spanish");

  celular Readmi_N8;
  cout << "El celular "<< Readmi_N8.modelo << " tiene una memoria ram de " << Readmi_N8.ram<< " Gbs"<<endl;

  celular s30(32000000, "Samsung Galaxy S30");
  cout << "El "<< s30.modelo <<" tiene un costo de " <<s30.precio << endl;

  celular OnePlus_Nord(1234567,6);
  OnePlus_Nord.modelo = "Oneplus Nord";

  cout <<"El " << OnePlus_Nord.modelo << " tiene una memoria ram de "<< OnePlus_Nord.ram<< endl;

  celular Mi11_pro(4500000,"Xiaomi Mi 11 pro", "Snapdragon 888+", 12,128);

  cout <<"El " << Mi11_pro.modelo << " tiene una memoria ram de "<< Mi11_pro.ram<<" Gbs" << endl;

  Mi11_pro.print_precio_base();
  return 0;
}
