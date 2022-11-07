#ifndef EMPRESA_H_INCLUDED
#define EMPRESA_H_INCLUDED


struct empresa{
 char nombre[25];
 char pais[25];
 float ingresos;
 struct empleado emp[5];
};
///CARGAR
struct empresa cargarEmpresa(char n[], char p[], float i);
void cargarEmpleadosEnEmpresa(struct empresa *e, int cant);
///MOSTRAR
void mostrarEmpresa(struct empresa e);
void mostrarEmpleadosEmpresa(struct empresa e, int cant);
///BUSCAR EMPLEADO
void buscarEmpleadoPorEdad(struct empresa e, int cant);
void buscarEmpleadoPorNombre(struct empresa e, int cant);

#endif // EMPRESA_H_INCLUDED
