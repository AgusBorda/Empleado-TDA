#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Empleado.h"
#include "Empresa.h"

///CARGAR
struct empleado cargarEmpleado(){
struct empleado p;
printf("\nNombre del empleado: ");
fflush(stdin);
gets(p.nombre);
printf("\nEdad:");
scanf("%i", &p.edad);
printf("\nPuesto:");
fflush(stdin);
gets(p.puesto);
system("cls");
return p;
};
void cargarEmpleados(struct empleado e[]){
int i;
for(i=0;i<5;i++){
    e[i]=cargarEmpleado();
 }
}
///MOSTRAR
void mostrarEmpleados(struct empleado e[], int cant){
int j;
printf("\n");
system("pause");
system("cls");
for(j=0;j<cant;j++){
    mostrarEmpleado(e[j]);
    printf("\n\n");
 }
}
void mostrarEmpleado(struct empleado e){
printf("\n...EMPLEADO...");
printf("\nNombre: %s", e.nombre);
printf("\nEdad: %i", e.edad);
printf("\nPuesto: %s",e.puesto);
}

