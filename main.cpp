#include "Cadena.hpp"
#include "Empleado.hpp"
#include <iostream>

int main() {
    int opcion;
    std::cout << "1.Opcion habitacion" << std::endl;
    std::cout << "2.Opcion reserva" << std::endl;
    std::cout << "3.Opcion cliente" << std::endl;
    std::cout << "Elija una opcion: " << std::endl;

    std::cin >> opcion;

    switch(opcion){
        case 1: {
            std::cout << "Opcion habitacion seleccionada" << std::endl;
            switch(){
            } 
        }
        case 2: {
            std::cout << "Opcion reserva seleccionada" << std::endl;
            switch(){
                
            }
        }
        case 3: {
            std::cout << "Opcion reserva seleccionada" << std::endl;
            switch(){
                
            }
        }
        default: 
            std::cout << "Opcion no valida" << std::endl;
    }
    
    return 0;
}
