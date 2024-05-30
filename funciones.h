#include "clases.h"
//constructor de Usuario
Usuario :: Usuario() : dia_(0), mes_(0), año_(0) {}
Usuario :: Usuario(const string& nombre, const string& dni, const string& sexo, const string& celular, const string& domicilio, int dia, int mes, int año)
        : nombre_(nombre), dni_(dni), sexo_(sexo), celular_(celular), domicilio_(domicilio), dia_(dia), mes_(mes), año_(año) {}

//Seters de Usuario
void Usuario :: setNombre(const string& nombre) { nombre_ = nombre; }
void Usuario :: setDni(const string& dni) { dni_ = dni; }
void Usuario :: setSexo(const string& sexo) { sexo_ = sexo; }
void Usuario :: setCelular(const string& celular) { celular_ = celular; }
void Usuario :: setDomicilio(const string& domicilio) { domicilio_ = domicilio; }
void Usuario :: setFechaNacimiento(int dia, int mes, int año) { dia_ = dia; mes_ = mes; año_ = año; }

//Getters de Usuario
string Usuario :: getNombre() const { return nombre_; }
string Usuario :: getDni() const { return dni_; }
string Usuario :: getSexo() const { return sexo_; }
string Usuario :: getCelular() const { return celular_; }
string Usuario :: getDomicilio() const { return domicilio_; }
int Usuario :: getDia() const { return dia_; }
int Usuario :: getMes() const { return mes_; }
int Usuario :: getAño() const { return año_; }

//Funcion mostrar de usuario
void Usuario :: mostrarInformacion() const {
    cout << "Nombre: " << nombre_ << endl;
    cout << "DNI: " << dni_ << endl;
    cout << "Sexo: " << sexo_ << endl;
    cout << "Celular: " << celular_ << endl;
    cout << "Domicilio: " << domicilio_ << endl;
    cout << "Fecha de Nacimiento: " << dia_ << "/" << mes_ << "/" << año_ << endl;
}

//Clase plantillas
//Funciones de la clase
void Plantillas::imprimirEncabezado() {
    system("cls");
    cout << "\x1b[48;2;91;10;45;38;2;255;255;255m-----------------------------------------------------------------------------------------------------\n";
    cout << "                                       " << hotel << "                                       \n";
    cout << "-----------------------------------------------------------------------------------------------------\x1b[m\n";
}

void Plantillas::imprimirMenu() {
    imprimirEncabezado();
    cout << "\x1b[48;2;173;173;173;38;2;0;0;0m   Escoja una opcion: " << setw(79) << " \n";
    cout << "   1. Habitaciones" << setw(83) << " \n" << "   2. Reservas" << setw(87) << " \n" << "   3. Contacto" << setw(87) << " \n" << "   4. Servicios" << setw(88) << "   \x1b[m" << endl;
}



//Clase SistemaLogin
//Constructores
SistemaLogin::SistemaLogin() : nombresUsuarios(nullptr), contrasenas(nullptr), numUsuarios(0) {}

SistemaLogin::~SistemaLogin() {
    delete[] nombresUsuarios;
    delete[] contrasenas;
}
//Funciones
bool SistemaLogin::iniciarSesion(const string& nombreUsuario, const string& contrasena) {
    for (int i = 0; i < numUsuarios; ++i) {
        if (nombresUsuarios[i] == nombreUsuario && contrasenas[i] == contrasena) {
            return true;
        }
    }
    return false;
}

void SistemaLogin::agregarUsuario(const string& nombreUsuario, const string& contrasena) {
    string* tempNombres = new string[numUsuarios + 1];
    string* tempContrasenas = new string[numUsuarios + 1];
    for (int i = 0; i < numUsuarios; ++i) {
        tempNombres[i] = nombresUsuarios[i];
        tempContrasenas[i] = contrasenas[i];
    }
    tempNombres[numUsuarios] = nombreUsuario;
    tempContrasenas[numUsuarios] = contrasena;
    delete[] nombresUsuarios;
    delete[] contrasenas;
    nombresUsuarios = tempNombres;
    contrasenas = tempContrasenas;
    ++numUsuarios;
}

void SistemaLogin::inicio() {
    agregarUsuario("juan", "123");
    agregarUsuario("maria", "456");

    string nombreUsuario, contrasena;
    cout << "Ingrese su nombre de usuario: ";
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
//Class Hotel
Hotel::Hotel(const string& _nombre, const string& _ubicacion, const string& _contacto, Usuario _usuarios[], int _numUsuarios, Habitacion _habitaciones[], int _numHabitaciones)
    : nombre(_nombre), ubicacion(_ubicacion), contacto(_contacto), numeroUsuarios(_numUsuarios), numeroHabitaciones(_numHabitaciones) {
    usuarios = new Usuario[numeroUsuarios];
    for (int i = 0; i < numeroUsuarios; ++i) {
        usuarios[i] = _usuarios[i];
    }
    habitaciones = new Habitacion[numeroHabitaciones];
    for (int i = 0; i < numeroHabitaciones; ++i) {
        habitaciones[i] = _habitaciones[i];
    }
}

Hotel::~Hotel() {
    delete[] usuarios;
    delete[] habitaciones;
}

void Hotel::mostrarInformacion() {
    cout << "Nombre del hotel: " << nombre << endl;
    cout << "Ubicacion: " << ubicacion << endl;
    cout << "Contacto: " << contacto << endl;
    cout << "Numero de usuarios: " << numeroUsuarios << endl;
    cout << "Numero de habitaciones: " << numeroHabitaciones << endl;
    for (int i = 0; i < numeroUsuarios; ++i) {
        usuarios[i].mostrarInformacion();
    }
    cout << "Habitaciones:" << endl;
    for (int i = 0; i < numeroHabitaciones; ++i) {
        habitaciones[i].mostrarInformacion();
    }
}













