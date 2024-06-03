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
// Constructor por defecto
ListadeUsuarios::ListadeUsuarios() : usuarios(nullptr), numeroUsuarios(0) {}

// Destructor
ListadeUsuarios::~ListadeUsuarios() {
    delete[] usuarios;
}

// Método para agregar un usuario a la lista
void ListadeUsuarios::agregarUsuario(const Usuario& usuario) {
    Usuario* nuevaLista = new Usuario[numeroUsuarios + 1];
    for (int i = 0; i < numeroUsuarios; ++i) {
        nuevaLista[i] = usuarios[i];
    }
    nuevaLista[numeroUsuarios] = usuario;
    delete[] usuarios;
    usuarios = nuevaLista;
    numeroUsuarios++;
}

// Método para eliminar un usuario de la lista por DNI
void ListadeUsuarios::eliminarUsuario(const string& dni) {
    int index = -1;
    for (int i = 0; i < numeroUsuarios; ++i) {
        if (usuarios[i].getDni() == dni) {
            index = i;
            break;
        }
    }
    if (index == -1) {
        cout << "Usuario no encontrado." << endl;
        return;
    }
    Usuario* nuevaLista = new Usuario[numeroUsuarios - 1];
    for (int i = 0, j = 0; i < numeroUsuarios; ++i) {
        if (i != index) {
            nuevaLista[j++] = usuarios[i];
        }
    }
    delete[] usuarios;
    usuarios = nuevaLista;
    numeroUsuarios--;
}

// Método para buscar un usuario por DNI
Usuario* ListadeUsuarios::buscarUsuario(const string& dni) {
    for (int i = 0; i < numeroUsuarios; ++i) {
        if (usuarios[i].getDni() == dni) {
            return &usuarios[i];
        }
    }
    return nullptr;
}

// Método para mostrar todos los usuarios
void ListadeUsuarios::mostrarUsuarios() const {
    for (int i = 0; i < numeroUsuarios; ++i) {
        usuarios[i].mostrarInformacion();
    }
}
//Clase ListadeHabitaciones
ListadeHabitaciones::ListadeHabitaciones() : habitaciones(nullptr), numeroHabitaciones(0) {}

ListadeHabitaciones::~ListadeHabitaciones() {
    delete[] habitaciones;
}

void ListadeHabitaciones::agregarHabitacion(const Habitacion& habitacion) {
    Habitacion* nuevasHabitaciones = new Habitacion[numeroHabitaciones + 1];
    for (int i = 0; i < numeroHabitaciones; i++) {
        nuevasHabitaciones[i] = habitaciones[i];
    }
    nuevasHabitaciones[numeroHabitaciones] = habitacion;
    delete[] habitaciones;
    habitaciones = nuevasHabitaciones;
    numeroHabitaciones++;
}

void ListadeHabitaciones::eliminarHabitacion(int numeroHabitacion) {
    int index = -1;
    for (int i = 0; i < numeroHabitaciones; ++i) {
        if (habitaciones[i].getNumero() == numeroHabitacion) {
            index = i;
            break;
        }
    }

    if (index != -1) {
        Habitacion* nuevasHabitaciones = new Habitacion[numeroHabitaciones - 1];
        for (int i = 0, j = 0; i < numeroHabitaciones; ++i) {
            if (i != index) {
                nuevasHabitaciones[j++] = habitaciones[i];
            }
        }
        delete[] habitaciones;
        habitaciones = nuevasHabitaciones;
        --numeroHabitaciones;
    }
}
void ListadeHabitaciones::mostrarHabitaciones() const {
    for (int i = 0; i < numeroHabitaciones; ++i) {
        habitaciones[i].mostrarInformacion();
        cout << "--------------------------" << endl;
    }
}
//Class  Hotel

void Hotel::mostrarInformacion() {
    cout << "Nombre del hotel: " << nombre << endl;
    cout << "Ubicacion: " << ubicacion << endl;
    cout << "Contacto: " << contacto << endl;
    cout << "Lista de usuarios:" << endl;
    listaUsuarios.mostrarUsuarios();
    cout << "Lista de habitaciones:" << endl;
    listaHabitaciones.mostrarHabitaciones();
}

void Hotel::agregarUsuario(const Usuario& usuario) {
    listaUsuarios.agregarUsuario(usuario);
}

void Hotel::eliminarUsuario(const string& dni) {
    listaUsuarios.eliminarUsuario(dni);
}






