#include "funciones.h"
using namespace std;

int main() {
	plantillas principal;
    SistemaLogin sistema;
    sistema.inicio();
	if (sistema.llave1)
	{
		principal.imprimir_menu();
	}
    return 0;
}
