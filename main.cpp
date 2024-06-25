#include "Cadena.hpp"
#include "Empleado.hpp"
#include <iostream>

int main() {
    int opcion;
    cout << "1.Opcion Empleado\n";
    cout << "2.Opcion Cliente\n";
    cout << "3.Opcion Habitacion\n";
    cout << "Elija una opcion: ";

    cin >> opcion;

    switch(opcion){
        case 1: {
            int opcion2;
            cout << "Opcion empleado seleccionada";
            cout << "1.Mostrar informacion\n";
            cout << "2.Agregar empleado\n";
            cout << "3.Buscar empleado\n";
            cout << "Ingrese una opcion: ";
            
            cin >> opcion2;
            
            switch(opcion2){
                case 1:{
                    cout << "Opcion mostrar informacion seleccionada";
                }
                case 2:{
                    cout << "Opcion agregar empleado seleccionada";
                }
                case 3:{
                    cout << "Opcion buscar empleado seleccionada";
                }
                default:
                    cout << "Opcion invalida";
            } 
        }
        case 2: {
            int opcion3;
            cout << "Opcion cliente seleccionada";
            cin >> opcion3;
            switch(opcion3){
                
            }
        }
        case 3: {
            int opcion4;
            cout << "Opcion habitacion seleccionada" << std::endl;
            cin >> opcion4;
            switch(opcion4){
                
            }
        }
        default: 
            std::cout << "Opcion no valida" << std::endl;
    }
    
    return 0;
}
