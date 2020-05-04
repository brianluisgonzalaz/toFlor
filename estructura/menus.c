#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "alumnos.h"
#include "menus.h"
void menuPrincipal(eAlumno listadoDeAlumnos[],int tam)
{
    int opcion;

    do
    {

        printf("1.Alta usuarios\n2.Mostrar Usuarios\n3.Modificacion\n4.Eliminar Empleados\n5.Ordenar por legajo y nombre\n6.Salir\n");
        printf("ingrese una opcion: \n");
        scanf("%d",&opcion);
        switch(opcion)
        {
        case 1:
                altaAlumno(listadoDeAlumnos,tam);
        break;

        case 2:
                mostrarAlumnos(listadoDeAlumnos,tam);
        break;

        case 3:

        break;

        case 4:

        break;

        case 5:

        break;

        case 6:
                printf("Saliendo del programa...\n");
        break;

        default:
                printf("Opcion no valida\n");
        break;
        }
        system("pause");
        system("cls");
    }while(opcion!=6);
}

