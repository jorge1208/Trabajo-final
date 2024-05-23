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

class  Cliente
	{
		
		public:
		
		char nombre[128];
		char dni[8];
		char sexo[1];
		char celular[9];
		char domicilio[128];
		int dia;
		int mes;
		int año;
		
		
		Cliente(){
			
			
			for (int i=0; i<128; i++)
			{
				nombre[i]='-';
			}
			
			for (int i=0; i<8; i++)
			{
				dni[i]='-';
			}
			
			for (int i=0; i<1; i++)
			{
				sexo[i]='-';
			}
			
			for (int i=0; i<9; i++)
			{
				celular[i]='-';
			}
			
			for (int i=0; i<128; i++)
			{
				domicilio[i]='-';
			}
			
			dia=-1;
			mes=-1;
			año=-1;
			
		}
	};






