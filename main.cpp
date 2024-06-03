#include "funciones.h"
int main() {
    // Crear una lista de habitaciones
    ListadeHabitaciones listaHabitaciones;

    // Crear un hotel
    Hotel hotel("Hotel el cielo", "Av. el sol", "123456789", ListadeUsuarios(), listaHabitaciones);

    // Iniciar sesión
    SistemaLogin sistemaLogin;
    sistemaLogin.inicio();

    // Mostrar el menú
    Plantillas plantillas;
    plantillas.imprimirMenu();

    int opcion;
    cout << "Ingrese su opcion: ";
    cin >> opcion;

    switch (opcion) {
        case 1: {
            // Agregar habitación
            int numero;
            string tipo;
            bool disponible;
            double precio;

            cout << "Ingrese el numero de habitacion: ";
            cin >> numero;
            cout << "Ingrese el tipo de habitacion: ";
            cin >> tipo;
            cout << "¿La habitacion esta disponible? (1 para Si, 0 para No): ";
            cin >> disponible;
            cout << "Ingrese el precio por noche: ";
            cin >> precio;

            Habitacion nuevaHabitacion(numero, tipo, disponible, precio);
            listaHabitaciones.agregarHabitacion(nuevaHabitacion);
            break;
        }
        case 2: {
            // Agregar usuario
            string nombre, dni, sexo, celular, domicilio;
            int dia, mes, año;

            cout << "Ingrese el nombre del usuario: ";
            cin >> nombre;
            cout << "Ingrese el DNI del usuario: ";
            cin >> dni;
            cout << "Ingrese el sexo del usuario: ";
            cin >> sexo;
            cout << "Ingrese el celular del usuario: ";
            cin >> celular;
            cout << "Ingrese el domicilio del usuario: ";
            cin >> domicilio;
            cout << "Ingrese la fecha de nacimiento (dia mes año): ";
            cin >> dia >> mes >> año;

            Usuario nuevoUsuario(nombre, dni, sexo, celular, domicilio, dia, mes, año);
            hotel.agregarUsuario(nuevoUsuario);
            break;
        }
        case 3: {
            // Opción para mostrar contacto
            cout << "Contacto del hotel: "<<hotel.contacto<<endl;
            break;
        }
        case 4: {
            // Opción para mostrar servicios
            cout << "No hay servicios disponibles actualmente." << endl;
            break;
        }
        default:
            cout << "Opcion no valida." << endl;
            break;
    }

    return 0;
}
