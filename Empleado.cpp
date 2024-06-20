#include "Empleado.hpp"
#include <iostream>

empleado::empleado() : edad(-1), dia(-1), mes(-1), anio(-1) {}

empleado::empleado(char* _nombre, char* _id, char* _domicilio, char* _celular, char* _cargo, int _edad, int _dia, int _mes, int _anio)
{
    nombre.modificar_cadena(_nombre);
    id.modificar_cadena(_id);
    domicilio.modificar_cadena(_domicilio);
    celular.modificar_cadena(_celular);
    cargo.modificar_cadena(_cargo);
    edad = _edad;
    dia = _dia;
    mes = _mes;
    anio = _anio;
}

void empleado::setNombre(const cadena& _nombre) {
    nombre.modificar_cadena(_nombre.micadena);
}

void empleado::setDni(const cadena& _dni) {
    id.modificar_cadena(_dni.micadena);
}

void empleado::setSexo(const cadena& sexo) {
    // Implementar si necesario
}

void empleado::setCelular(const cadena& _celular) {
    celular.modificar_cadena(_celular.micadena);
}

void empleado::setDomicilio(const cadena& _domicilio) {
    domicilio.modificar_cadena(_domicilio.micadena);
}

void empleado::setFechaNacimiento(int _dia, int _mes, int _anio) {
    dia = _dia;
    mes = _mes;
    anio = _anio;
}

cadena empleado::getNombre() const {
    return nombre;
}

cadena empleado::getDni() const {
    return id;
}

cadena empleado::getSexo() const {
    // Implementar si necesario
    return cadena();
}

cadena empleado::getCelular() const {
    return celular;
}

cadena empleado::getDomicilio() const {
    return domicilio;
}

int empleado::getDia() const {
    return dia;
}

int empleado::getMes() const {
    return mes;
}

int empleado::getAño() const {
    return anio;
}

void empleado::mostrarInformacion() const {
    std::cout << "Nombre: ";
    nombre.mostrar_cadena();
    std::cout << "ID: ";
    id.mostrar_cadena();
    std::cout << "Domicilio: ";
    domicilio.mostrar_cadena();
    std::cout << "Celular: ";
    celular.mostrar_cadena();
    std::cout << "Cargo: ";
    cargo.mostrar_cadena();
    std::cout << "Edad: " << edad << std::endl;
    std::cout << "Fecha de Nacimiento: " << dia << "/" << mes << "/" << anio << std::endl;
}

