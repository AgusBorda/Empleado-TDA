#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Empleado.h"
#include "Empresa.h"
///CARGAR
struct empresa cargarEmpresa(char n[], char p[], float i){
struct empresa e;
strcpy(e.nombre,n);
strcpy(e.pais,p);
e.ingresos=i;
return e;
};
void cargarEmpleadosEnEmpresa(struct empresa *e, int cant){
int a;
for(a=0;a<cant;a++){
  printf("----EMPLEADO %i----", a+1);
  e->emp[a]=cargarEmpleado();
  }
}
///MOSTRAR
void mostrarEmpresa(struct empresa e){
printf("...DATOS DE LA EMPRESA...");
printf("\n  Nombre: %s", e.nombre);
printf("\n  Pais: %s", e.pais);
printf("\n  Ingresos: $%f\n", e.ingresos);
system("pause");
system("cls");
}
void mostrarEmpleadosEmpresa(struct empresa e, int cant){
int a;
for(a=0;a<cant;a++){
   printf("\n\n---EMPLEADO %i---\n", a+1);
   printf("  Nombre: %s\n", e.emp[a].nombre);
   printf("  Edad: %i\n", e.emp[a].edad);
   printf("  Puesto: %s" , e.emp[a].puesto);
    }
}
///BUSCAR
void buscarEmpleadoPorEdad(struct empresa e, int cant){
int edadAux;
printf("\n");
system("pause");
system("cls");
printf("\n--BUSQUEDA DE EMPLEADO--");
printf("\nEdad del empleado:");
scanf("%i", &edadAux);
for(int a=0;a<cant;a++){
    if(e.emp[a].edad==edadAux){
        mostrarEmpleado(e.emp[a]);
    }
  }
}
void buscarEmpleadoPorNombre(struct empresa e, int cant){
char nombreaux[25];
printf("\n");
system("pause");
system("cls");
printf("\n\n--BUSQUEDA DE EMPLEADOS--");
printf("\nNombre:");
fflush(stdin);
gets(nombreaux);
for(int a=0;a<cant;a++){
    if(strcmp(nombreaux,e.emp[a].nombre)==0){
       mostrarEmpleado(e.emp[a]);
  }
 }
}
