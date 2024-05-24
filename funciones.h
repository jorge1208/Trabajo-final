#include <iostream>
#include <map>
#include <string>
#include <stdlib.h>
#include <iomanip>
using namespace std;


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




