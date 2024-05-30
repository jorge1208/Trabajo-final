#include "funciones.h"


int main() {
    Usuario usuarios[2] = {
        Usuario("Juan Perez", "12345678A", "Masculino", "123456789", "Avenida Independencia 123", 1, 1, 1990),
        Usuario("Maria Gomez", "87654321B", "Femenino", "987654321", "Avenida Las Lomas 456", 2, 2, 1992)
    };

    Habitacion habitaciones[2] = {
        Habitacion(101, "Sencilla", true, 50.0),
        Habitacion(102, "Doble", false, 75.0)
    };

    Hotel hotel("El Cielo", "Avenida Vista Alegre 478", "945286403", usuarios, 2, habitaciones, 2);

    SistemaLogin sistemaLogin;
    sistemaLogin.inicio();
    if (sistemaLogin.llave1) {
        Plantillas menu;
        menu.imprimirMenu();
        hotel.mostrarInformacion();
    }

    return 0;
}
