#ifndef CADENA_HEADER_FILE_H  
#define CADENA_HEADER_FILE_H

class cadena
{
public: 
    char *micadena;
    int num_cadena;

    cadena();
    cadena(const char*);
    ~cadena();
    void mostrar_cadena() const;
    void modificar_cadena(const char*);
};

#endif // CADENA_HEADER_FILE_H
