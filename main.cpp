#include <iostream>
#include <map>
#include <string>
using namespace std;

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
};

int main() {
    SistemaLogin sistema;

    string nombreUsuario, contrasena;
    cout << "Bienvenido al sistema de inicio de sesion" << endl;
    cout << "Ingrese su nombre de usuario: ";
    cin >> nombreUsuario;

    cout << "Ingrese su contrasena: ";
    cin >> contrasena;

    if (sistema.iniciarSesion(nombreUsuario, contrasena)) {
        cout << "Inicio de sesion exitoso" << endl;
    } else {
        cout << "Usuario o contrasena incorrectos." << endl;
    }

    return 0;
}
