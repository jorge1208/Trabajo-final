#include <iostream>
#include <map>
#include <string>
#include <stdlib.h>
#include <iomanip>
using namespace std;

class Usuario {
private:
    string nombre_;
    string dni_;
    string sexo_;
    string celular_;
    string domicilio_;
    int dia_;
    int mes_;
    int año_;

public:
    Usuario();
    Usuario(const string& nombre, const string& dni, const string& sexo, const string& celular, const string& domicilio, int dia, int mes, int año);

    void setNombre(const string& nombre);
    void setDni(const string& dni);
    void setSexo(const string& sexo);
    void setCelular(const string& celular);
    void setDomicilio(const string& domicilio);
    void setFechaNacimiento(int dia, int mes, int año);

    string getNombre() const ;
    string getDni() const ;
    string getSexo() const ;
    string getCelular() const ;
    string getDomicilio() const ;
    int getDia() const ;
    int getMes() const ;
    int getAño() const ;

    void mostrarInformacion() const;
};

class Habitacion {
private:
    int numero;
    string tipo;
    bool disponible;
    double precioPorNoche;

public:
    Habitacion() : numero(-1), disponible(0), precioPorNoche(-1) {}
    Habitacion(int num, string tipoHabitacion, bool disp, double precio)
        : numero(num), tipo(tipoHabitacion), disponible(disp), precioPorNoche(precio) {}

    int getNumero() const { return numero; }
    string getTipo() const { return tipo; }
    bool isDisponible() const { return disponible; }
    double getPrecioPorNoche() const { return precioPorNoche; }

    void setNumero(int num) { numero = num; }
    void setTipo(const string& tipoHabitacion) { tipo = tipoHabitacion; }
    void setDisponible(bool disp) { disponible = disp; }
    void setPrecioPorNoche(double precio) { precioPorNoche = precio; }

    void mostrarInformacion() const {
        cout << "Numero: " << numero << endl;
        cout << "Tipo: " << tipo << endl;
        cout << "Disponible: " << (disponible ? "Si" : "No") << endl;
        cout << "Precio por Noche: $" << precioPorNoche << endl;
    }
};

class Plantillas {
public:
    char hotel[24] = " E  L    C  I  E  L  O ";
    void imprimirEncabezado();
    void imprimirMenu();
};


class SistemaLogin {
private:
    string* nombresUsuarios;
    string* contrasenas;
    int numUsuarios;

public:
    bool llave1 { false };
    SistemaLogin();
    ~SistemaLogin();
    bool iniciarSesion(const string& nombreUsuario, const string& contrasena);
    void agregarUsuario(const string& nombreUsuario, const string& contrasena);
    void inicio();
};

class Hotel {
private:
    string nombre;
    string ubicacion;
    string contacto;
    int numeroUsuarios;
    int numeroHabitaciones;
    Usuario* usuarios;
    Habitacion* habitaciones;

public:
    Hotel(const string& _nombre, const string& _ubicacion, const string& _contacto, Usuario _usuarios[], int _numUsuarios, Habitacion _habitaciones[], int _numHabitaciones);
    ~Hotel();
    void mostrarInformacion();
};

