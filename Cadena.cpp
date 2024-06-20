#include "Cadena.hpp"
#include <iostream>

// Constructor por defecto
cadena::cadena()
{
    micadena = nullptr; 
    num_cadena = -1; 
}

// Constructor parametrizado
cadena::cadena(const char* _cadena) {
    num_cadena = 0;
    while (_cadena[num_cadena] != '\0') {
        num_cadena++;
    }
    micadena = new char[num_cadena + 1];
    for (int i = 0; i < num_cadena; ++i) {
        micadena[i] = _cadena[i];
    }
    micadena[num_cadena] = '\0';
}

// Destructor
cadena::~cadena() {
    delete[] micadena;
}

// Método para mostrar la cadena
void cadena::mostrar_cadena() const {
    if (micadena == nullptr || num_cadena == -1) {
        std::cout << "\nVALORES NO INICIALIZADOS...\n";
        return;
    }
    std::cout << micadena << std::endl;
}

// Método para modificar la cadena
void cadena::modificar_cadena(const char* _cadena) {
    delete[] micadena;
    num_cadena = 0;
    while (_cadena[num_cadena] != '\0') {
        num_cadena++;
    }
    micadena = new char[num_cadena + 1];
    for (int i = 0; i < num_cadena; ++i) {
        micadena[i] = _cadena[i];
    }
    micadena[num_cadena] = '\0';
}
