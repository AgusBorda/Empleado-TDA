#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Empleado.h"
#include "Empresa.h"

int main()
{
    struct empresa MercadoLibre=cargarEmpresa("Mercado Libre", "Argentina", 500.000);
    mostrarEmpresa(MercadoLibre);
    cargarEmpleadosEnEmpresa(&MercadoLibre,5);
    mostrarEmpleadosEmpresa(MercadoLibre,5);
    buscarEmpleadoPorEdad(MercadoLibre,5);
    buscarEmpleadoPorNombre(MercadoLibre,5);
    return 0;
}
