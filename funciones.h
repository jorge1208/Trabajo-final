#include <iostream>
#include <map>
#include <string>
#include <stdlib.h>
#include <iomanip>
using namespace std;


class menu
{
    public: 
    char hotel[24] = " E  L    C  I  E  L  O ";
    void imprimir_encabezado();
};
void menu::imprimir_encabezado()
{
    system("cls"); 
    cout<<"\x1b[48;2;91;10;45;38;2;255;255;255m-----------------------------------------------------------------------------------------------------\n";
    cout<<"                                       "<<hotel<<"                                       \n";
    cout<<"-----------------------------------------------------------------------------------------------------\x1b[m\n";
}

class SistemaLogin {
private:
    map<string, string> usuarios;

public:
    SistemaLogin() {
 
        usuarios["juan"] = "123";
        usuarios["maria"] = "456";
    }

    bool iniciarSesion(const string& nombreUsuario, const string& contrasena) {
        return usuarios[nombreUsuario] == contrasena;
    }
    void inicio()
    {
        string nombreUsuario, contrasena;
        menu _menu1;
        _menu1.imprimir_encabezado();
        cout << "\x1b[48;2;173;173;173;38;2;0;0;0m|  Bienvenido al sistema de inicio de sesion" << setw(59)<< " \x1b[m" << endl;
        cout << "  Ingrese su nombre de usuario: " << setw(73)<< " \n"<< setw(15)<<"  ";
        cin >> nombreUsuario;

        cout << "Ingrese su contrasena: ";
        cin >> contrasena;

        if (iniciarSesion(nombreUsuario, contrasena)) {
            cout << "Inicio de sesion exitoso" << endl;
        } else {
            cout << "Usuario o contrasena incorrectos." << endl;
        }

    } 

};
