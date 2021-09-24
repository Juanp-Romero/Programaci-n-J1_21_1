/******************************************************************************
Name: Clases Abstractas

Author: Juan Romero 
Date: 14/09/2021

Purpose: 

Usage: Plug and place

*******************************************************************************/
#include <stdio.h>
#include <iostream> 
using namespace std;
#include <iomanip>

class computador{
  public: 
    int ram = 4;
    double rom = 10000;
    virtual void boot_mode_seq() = 0; // Método abstracto / virtual
  private:
    string usuario = "admin";
    string passw = "1234" ;
};

class Acer : public computador{
  public:
    string motherboard = "Asus Rock 580";
    void boot_mode_seq() {  // definición de clase abstraca
      cout << "Reinicio + f12" <<endl;
    };
  private:

};

class Lenovo : public computador{
  public:
    string motherboard = "Asus Rock 580";
    void boot_mode_seq() {  // definición de clase abstraca
      cout << "Reinicio + f8" <<endl;
    };
  private:

};

int main() {
  setlocale(LC_ALL, "spanish");

  Acer Acer505;
  Acer505.boot_mode_seq();
  //cout <<" El computador tiene una memoria rom de: "<< Acer505.rom <<endl;

  Lenovo Yoga202;
  Yoga202.boot_mode_seq(); // método polimorfismo (definición del )

  return 0;
}
