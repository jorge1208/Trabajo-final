#ifndef EMPLEADO_HEADER_FILE_H  
#define EMPLEADO_HEADER_FILE_H

#include "Cadena.hpp"

class empleado {
public: 
    cadena nombre;
    cadena id;
    cadena domicilio;
    cadena celular;
    cadena cargo;
    int edad;
    int dia;
    int mes;
    int anio;

    empleado();
    empleado(char*, char*, char*, char*, char*, int, int, int, int);
    void setNombre(const cadena&);
    void setDni(const cadena&);
    void setSexo(const cadena&);
    void setCelular(const cadena&);
    void setDomicilio(const cadena&);
    void setFechaNacimiento(int, int, int);

    cadena getNombre() const;
    cadena getDni() const;
    cadena getSexo() const;
    cadena getCelular() const;
    cadena getDomicilio() const;
    int getDia() const;
    int getMes() const;
    int getAño() const;

    void mostrarInformacion() const;
};

#endif // EMPLEADO_HEADER_FILE_H
