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

//Class istausuarios

class ListadeUsuarios {
private:
    Usuario* usuarios;
    int numeroUsuarios;

public:
    ListadeUsuarios();
    ~ListadeUsuarios();
    void agregarUsuario(const Usuario& usuario);
    void eliminarUsuario(const string& dni);
    Usuario* buscarUsuario(const string& dni);
    void mostrarUsuarios() const;
};
class ListadeHabitaciones {
private:
    Habitacion* habitaciones;
    int numeroHabitaciones;

public:
    ListadeHabitaciones();
    ~ListadeHabitaciones();
    void agregarHabitacion(const Habitacion& habitacion);
    void eliminarHabitacion(int numeroHabitacion);
    Habitacion* buscarHabitacion(int numeroHabitacion);
    void mostrarHabitaciones() const;
};
class Reserva {
private:
    Usuario* usuario;
    Habitacion* habitacion;
    int diaEntrada;
    int mesEntrada;
    int añoEntrada;
    int diaSalida;
    int mesSalida;
    int añoSalida;
    bool confirmada;

public:
    Reserva(Usuario* _usuario, Habitacion* _habitacion, int _diaEntrada, int _mesEntrada, int _añoEntrada, int _diaSalida, int _mesSalida, int _añoSalida)
        : usuario(_usuario), habitacion(_habitacion), diaEntrada(_diaEntrada), mesEntrada(_mesEntrada), añoEntrada(_añoEntrada),
          diaSalida(_diaSalida), mesSalida(_mesSalida), añoSalida(_añoSalida), confirmada(false) {}

    void confirmar() { confirmada = true; }
    void cancelar() { confirmada = false; }
    
    void mostrarInformacion() const {
        cout << "Reserva de " << usuario->getNombre() << " en la habitacion " << habitacion->getNumero() << endl;
        cout << "Fecha de entrada: " << diaEntrada << "/" << mesEntrada << "/" << añoEntrada << endl;
        cout << "Fecha de salida: " << diaSalida << "/" << mesSalida << "/" << añoSalida << endl;
        cout << "Estado: " << (confirmada ? "Confirmada" : "No confirmada") << endl;
    }
};

class Servicio {
private:
    string nombre;
    double precio;
    string descripcion;

public:
    Servicio(const string& _nombre, double _precio, const string& _descripcion)
        : nombre(_nombre), precio(_precio), descripcion(_descripcion) {}

    string getNombre() const { return nombre; }
    double getPrecio() const { return precio; }
    string getDescripcion() const { return descripcion; }

    void mostrarInformacion() const {
        cout << "Servicio: " << nombre << endl;
        cout << "Precio: $" << precio << endl;
        cout << "Descripcion: " << descripcion << endl;
    }
};
class Factura {
private:
    Usuario* usuario;
    double total;
    string detalles;

public:
    Factura(Usuario* _usuario, double _total, const string& _detalles)
        : usuario(_usuario), total(_total), detalles(_detalles) {}

    void mostrarInformacion() const {
        cout << "Factura para " << usuario->getNombre() << endl;
        cout << "Total: $" << total << endl;
        cout << "Detalles: " << detalles << endl;
    }
};


class Hotel {
private:
    string nombre;
    string ubicacion;
    ListadeUsuarios listaUsuarios;
    ListadeHabitaciones listaHabitaciones;

public:
    string contacto;
    Hotel(const string& _nombre, const string& _ubicacion, const string& _contacto, ListadeUsuarios _listaUsuarios, ListadeHabitaciones _listaHabitaciones)
        : nombre(_nombre), ubicacion(_ubicacion), contacto(_contacto), listaUsuarios(_listaUsuarios), listaHabitaciones(_listaHabitaciones) {}

    void mostrarInformacion();

    // Métodos para agregar y quitar usuarios
    void agregarUsuario(const Usuario& usuario);
    void eliminarUsuario(const string& dni);
    
};


