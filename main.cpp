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
            int opcion2;
            std::cout << "Opcion habitacion seleccionada" << std::endl;
            std::cin >> opcion2;
            switch(opcion2){
            } 
        }
        case 2: {
            int opcion3;
            std::cout << "Opcion reserva seleccionada" << std::endl;
            std::cin >> opcion3;
            switch(opcion3){
                
            }
        }
        case 3: {
            int opcion4;
            std::cout << "Opcion reserva seleccionada" << std::endl;
            std::cin >> opcion4;
            switch(opcion4){
                
            }
        }
        default: 
            std::cout << "Opcion no valida" << std::endl;
    }
    
    return 0;
}
