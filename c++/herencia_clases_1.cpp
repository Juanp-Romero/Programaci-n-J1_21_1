
/******************************************************************************
Name: Herencia de clases
Author: Juan Romero 
Date: 07/09/2021

Purpose: Primera clase de herencia

Usage: plug and play

*******************************************************************************/

#include <iostream>
#include <string>
#include <stdio.h>
using namespace std;

class carro{ // clase padre
  public:
    string referencia = "Chevrolet Spark";
    double precio_venta = 32000000; 
    float cc = 1.2;
    int hp = 60;
    int torque = 60;
    int airbags = 0;
    int modelo = 2022;
    // ******** constructores *******

    carro(string temp_referencia, double temp_precio_venta,int temp_modelo):referencia(temp_referencia), precio_venta(temp_precio_venta), modelo(temp_modelo) { 
      cout << "se ha creado correctamente el carro" <<endl;
    };
    carro(){};
  protected:
    double precio_base = 20000000;
    string placa = "nnn000";
    string propietario = "Chevrolet";
};

class carros_usados : public carro{ // clase hija
  public:
    double kilometraje = 500000;
    int ano = 2016; // año
    bool soat = false;
    bool revision_tecno = false;
    bool todo_riesgo = false;
    void print_preciobase(){ cout <<"El precio base del carro es:" << precio_base <<endl;};
    // ******** constructores *******

    carros_usados(string temp_referencia, double temp_precio_venta,int temp_modelo, int temp_soat):carro(temp_referencia, temp_precio_venta, temp_modelo) { 
      soat = temp_soat;
      cout << "se ha creado correctamente el carro de la clase hija" <<endl;
    };
    carros_usados(){};

  private:
    int Numero_accidentes = 2;
    double deudas_transito = 2000000;
    string problema_principal = "Tiene el aire dañado";
};
 
int main() {
 // primer caro
  carro ford_Mustang;
  ford_Mustang.referencia= "Ford Mustang GT";
  ford_Mustang.cc = 5.1;
  ford_Mustang.torque = 582;
  ford_Mustang.hp = 533;
  ford_Mustang.airbags = 8;
  cout << "El vehículo " << ford_Mustang.referencia<<" "<< ford_Mustang.cc<< " tiene un torque de " << ford_Mustang.torque <<" y una potencia de " << ford_Mustang.hp <<endl;
 // segundo carro usando constructores
  carro ford_raptor("Ford Raptor", 209000000, 2022);
  ford_raptor.cc = 4.8;
  cout << "El vehículo " << ford_raptor.referencia <<" "<<ford_raptor.cc<< " tiene un costo" << ford_raptor.precio_venta <<" modelo  " << ford_raptor.modelo <<endl; 

  // carro usado / usando herencia de clases
  carros_usados volqueta_international;
  volqueta_international.referencia = "Volqueta International 2015";
  volqueta_international.precio_venta = 310000000;
  volqueta_international.kilometraje = 223000;
  volqueta_international.soat = true;
  volqueta_international.revision_tecno = true;
  volqueta_international.ano = 2015;
 cout << "Lisbeth está vendiendo una volqueta "<< volqueta_international.referencia<< " a un valor de " << volqueta_international.precio_venta << " para quien le interese" << endl;

 // carro usado usando el constructores
 carros_usados Mazda323("Mazda 323", 12000000, 2003, false);
 cout << "El segundo carro que están vendiendo Lisbeth es "<< Mazda323.referencia <<" a un costo de " << Mazda323.precio_venta << " y tiene el soat " << Mazda323.soat << endl; 


return 0;
}
