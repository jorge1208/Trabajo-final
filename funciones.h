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
 
    Usuario() : dia_(0), mes_(0), año_(0) {}

  
    Usuario(const string& nombre, const string& dni, const string& sexo, const string& celular, const string& domicilio, int dia, int mes, int año)
        : nombre_(nombre), dni_(dni), sexo_(sexo), celular_(celular), domicilio_(domicilio), dia_(dia), mes_(mes), año_(año) {}

  
    void setNombre(const string& nombre) {
        nombre_ = nombre;
    }

    void setDni(const string& dni) {
        dni_ = dni;
    }

    void setSexo(const string& sexo) {
        sexo_ = sexo;
    }

    void setCelular(const string& celular) {
        celular_ = celular;
    }

    void setDomicilio(const string& domicilio) {
        domicilio_ = domicilio;
    }

    void setFechaNacimiento(int dia, int mes, int año) {
        dia_ = dia;
        mes_ = mes;
        año_ = año;
    }

   
    string getNombre() const {
        return nombre_;
    }

    string getDni() const {
        return dni_;
    }

    string getSexo() const {
        return sexo_;
    }

    string getCelular() const {
        return celular_;
    }

    string getDomicilio() const {
        return domicilio_;
    }

    int getDia() const {
        return dia_;
    }

    int getMes() const {
        return mes_;
    }

    int getAño() const {
        return año_;
    }



    void mostrarInformacion() const {
        cout << "Nombre: " << nombre_ << endl;
        cout << "DNI: " << dni_ << endl;
        cout << "Sexo: " << sexo_ << endl;
        cout << "Celular: " << celular_ << endl;
        cout << "Domicilio: " << domicilio_ << endl;
        cout << "Fecha de Nacimiento: " << dia_ << "/" << mes_ << "/" << año_ << endl;
    }
};

class Habitacion {
	private:
		int numero;
		string tipo;       // Tipo de habitación: sencilla, doble, suite, etc.
		bool disponible;
		double precioPorNoche;

	public:
		// Constructor
        Habitacion() : numero(-1), disponible(0), precioPorNoche(-1){}
		Habitacion(int num, string tipoHabitacion, bool disp, double precio)
			: numero(num), tipo(tipoHabitacion), disponible(disp), precioPorNoche(precio) {}

		// Getters
		int getNumero() const {
			return numero;
		}

		string getTipo() const {
			return tipo;
		}

		bool isDisponible() const {
			return disponible;
		}

		double getPrecioPorNoche() const {
			return precioPorNoche;
		}

		// Setters
		void setNumero(int num) {
			numero = num;
		}

		void setTipo(const string& tipoHabitacion) {
			tipo = tipoHabitacion;
		}

		void setDisponible(bool disp) {
			disponible = disp;
		}

		void setPrecioPorNoche(double precio) {
			precioPorNoche = precio;
		}

		// Método para mostrar información de la habitación
		void mostrarInformacion() const {
			cout << "Numero: " << numero << endl;
			cout << "Tipo: " << tipo << endl;
			cout << "Disponible: " << (disponible ? "Si" : "No") << endl;
			cout << "Precio por Noche: $" << precioPorNoche << endl;
		}
};
class plantillas
{
    public: 
    char hotel[24] = " E  L    C  I  E  L  O ";
    void imprimir_encabezado();
	void imprimir_menu();
};
void plantillas::imprimir_encabezado()
{
    system("cls"); 
    cout<<"\x1b[48;2;91;10;45;38;2;255;255;255m-----------------------------------------------------------------------------------------------------\n";
    cout<<"                                       "<<hotel<<"                                       \n";
    cout<<"-----------------------------------------------------------------------------------------------------\x1b[m\n";
}
void plantillas :: imprimir_menu()
{
	imprimir_encabezado();
	cout << "\x1b[48;2;173;173;173;38;2;0;0;0m   Escoja una opcion: "<< setw(79) << " \n";
	cout << "   1. Habitaciones"<< setw(83) << " \n"<<"   2. Reservas"<< setw(87) << " \n"<<"   3. Contacto"<< setw(87) << " \n"<<"   4. Servicios"<< setw(88) << "   \x1b[m" << endl;
	
} 







//Login empleado

class SistemaLogin {
private:
    map<string, string> usuarios;

public:
    SistemaLogin();
	bool llave1 {false};
    bool iniciarSesion(const string& nombreUsuario, const string& contrasena);
    void inicio();
};
SistemaLogin::SistemaLogin()
{ 
    usuarios["juan"] = "123";
    usuarios["maria"] = "456";
}
bool SistemaLogin::iniciarSesion(const string& nombreUsuario, const string& contrasena)
{
	return usuarios[nombreUsuario] == contrasena;
}
void SistemaLogin::inicio()
{
	string nombreUsuario, contrasena;
        plantillas _menu1;
        _menu1.imprimir_encabezado();
        cout << "\x1b[48;2;173;173;173;38;2;0;0;0m|  Bienvenido al sistema de inicio de sesion" << setw(59)<< " \x1b[m" << endl;
        cout << "  Ingrese su nombre de usuario: " << setw(73)<< " \n"<< setw(15)<<"  ";
        cin >> nombreUsuario;

        cout << "Ingrese su contrasena: ";
        cin >> contrasena;

        if (iniciarSesion(nombreUsuario, contrasena)) {
            cout << "Inicio de sesion exitoso" << endl;
			llave1 = true;
        } else {
            cout << "Usuario o contrasena incorrectos." << endl;
        }
    
}

class Hotel {
private:
    string nombre;
    string ubicacion;
    string contacto;
    Usuario usuarios[3];
    Habitacion habitaciones[10];

public:
    Hotel(const string& _nombre, const string& _ubicacion, const string& _contacto, Usuario _usuarios[], Habitacion _habitaciones[]);

    void mostrarInformacion();
};

Hotel::Hotel(const string& _nombre, const string& _ubicacion, const string& _contacto, Usuario _usuarios[], Habitacion _habitaciones[])
    : nombre(_nombre), ubicacion(_ubicacion), contacto(_contacto) 
{
    for (int i = 0; i < 3; ++i) {
        usuarios[i] = _usuarios[i];
    }
    for (int i = 0; i < 10; ++i) {
        habitaciones[i] = _habitaciones[i];
    }
}

void Hotel::mostrarInformacion() {
    cout << "Nombre del hotel: " << nombre << endl;
    cout << "Ubicacion: " << ubicacion << endl;
    cout << "Contacto: " << contacto << endl;
    cout << "\nUsuarios:" << endl;
    for (int i = 0; i < 3; ++i) {
        usuarios[i].mostrarInformacion();
        cout << "---------------------------" << endl;
    }
    cout << "\nHabitaciones:" << endl;
    for (int i = 0; i < 10; ++i) {
        habitaciones[i].mostrarInformacion();
        cout << "---------------------------" << endl;
    }
}
