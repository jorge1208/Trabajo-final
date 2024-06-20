#include "Cadena.hpp"
#include "Empleado.hpp"
#include <iostream>

int main() {
    char tmp_nombre[128];
    std::cout << "Ingrese nombre: ";
    std::cin.getline(tmp_nombre, 128);
    cadena Hola(tmp_nombre);
    Hola.mostrar_cadena();

    char tmp_nombre2[128] = "hola";
    Hola.modificar_cadena(tmp_nombre2);
    Hola.mostrar_cadena();

    return 0;
}
