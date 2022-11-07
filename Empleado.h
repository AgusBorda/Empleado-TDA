#ifndef EMPLEADO_H_INCLUDED
#define EMPLEADO_H_INCLUDED

struct empleado{
 char nombre [25];
 int edad;
 char puesto[25];
};
///MOSTRAR
void mostrarEmpleado(struct empleado e);
void mostrarEmpleados(struct empleado e[], int cant);
///CARGAR
struct empleado cargarEmpleado();
void cargarEmpleados(struct empleado e[]);


#endif // EMPLEADO_H_INCLUDED
