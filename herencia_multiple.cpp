
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

class pantallas{
  public:
    int tamaño = 21;
    int nits = 200;
    string resolucion = "1080 x 720";
  private:
    string codex = "nn";
    string serial;
};
 

class electrodomestico{
  public:
    float precio;
    string marca;
    string referencia;

  private:
    int absolescencia_programada = 2;
};

class monitor: public electrodomestico, public pantallas{
  public:
    int HDMI_num_ports = 1;
    bool pcie = false;
    bool VGA = false;
    int usb = 1;

    monitor(int temp_HDMI_num_ports, bool temp_pcie, bool temp_VGA, int temp_usb, float temp_precio, string temp_resolucion,int temp_tamaño );
  private:
    int time_response = 6;
    int freq = 60;
};

  monitor::monitor(int temp_HDMI_num_ports, bool temp_pcie, bool temp_VGA, int temp_usb, float temp_precio, string temp_resolucion,int temp_tamaño ): HDMI_num_ports(temp_HDMI_num_ports), pcie(temp_pcie), VGA(temp_VGA), usb(temp_usb) {
    precio = temp_precio;
    resolucion = temp_resolucion;
    tamaño = temp_tamaño;
  };

int main() {

  monitor LG(1,true, true,3,600000,"1440 x1080", 26);
  cout << "El monitor LG cuenta con prestaciones como : "<< LG.resolucion << " como resolución nativa, " <<  LG.tamaño << "´ de tamaño de pantalla a un valor de " << LG.precio <<endl;


return 0;
}
