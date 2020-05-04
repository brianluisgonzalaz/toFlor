#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "alumnos.h"
#include "menus.h"

void inicializarListadoAlumnos(eAlumno listadoDeAlumnos[],int tam)
{
    int i;

    for(i=0;i<tam;i++)
    {
        listadoDeAlumnos[i].estado=LIBRE;
    }
}
int buscarLibre(eAlumno listadoDeAlumnos[],int tam)
{
    int i;
    int indice;
    indice = -1;

    for(i=0; i<tam; i++)
    {
        if(listadoDeAlumnos[i].estado==LIBRE)
        {
            indice = i;
            break;
        }
    }
    return indice;
}
int legajoAutomatico (eAlumno listadoDeAlumnos[], int tam)
{
    int i;
    int flag;
    int legajo;
    flag = 0;
    for(i=0;i<tam;i++)
    {
        if(listadoDeAlumnos[i].estado==LIBRE&&flag == 0)
        {
            legajo=i;
            flag =1;
            break;
        }
    }
    return legajo;
}
void altaNombreAlumno(char auxString[],char mensaje[])
{
    char nombre[50];
    printf("%s", mensaje);
    fflush(stdin);
    scanf("%[^\n]",nombre);
    strcpy(auxString, nombre);
}
int altaNotasAlumnos(char mensaje[])
{
    int nota;
    printf("%s",mensaje);
    scanf("%d",&nota);
    return nota;
}
float promedioAlumnos(int nota1, int nota2)
{
    float promedio;
    promedio= (float)(nota1+nota2)/2;
    return promedio;
}
int altaAlumno(eAlumno listadoDeAlumnos[],int tam)
{
    int indice;
    indice = buscarLibre(listadoDeAlumnos,tam);
    if(indice!=-1)
    {
        listadoDeAlumnos[indice].legajo=legajoAutomatico(listadoDeAlumnos,tam);
        altaNombreAlumno(listadoDeAlumnos[indice].nombre, "Ingrese su nombre: \n");
        listadoDeAlumnos[indice].nota1 = altaNotasAlumnos("Ingrese su primer nota: \n");
        listadoDeAlumnos[indice].nota2 = altaNotasAlumnos("Ingrese su segunda nota: \n");
        listadoDeAlumnos[indice].promedio=promedioAlumnos(listadoDeAlumnos[indice].nota1,listadoDeAlumnos[indice].nota2);
        listadoDeAlumnos[indice].estado = OCUPADO;
        indice = 1;
    }
    return indice;
}
void mostrarAlumnos(eAlumno listadoDeAlumnos[],int tam)
{
    int i;
    for(i=0; i<tam; i++)
    {
        if(listadoDeAlumnos[i].estado==OCUPADO)
        {
            printf("legajo\t\t nombre\t\t nota1\t\t nota2\t\t promedio\n");
            printf("%10d %10s %10d %10d %10f\n",listadoDeAlumnos[i].legajo,
                                                listadoDeAlumnos[i].nombre,
                                                listadoDeAlumnos[i].nota1,
                                                listadoDeAlumnos[i].nota2,
                                                listadoDeAlumnos[i].promedio);
        }
    }
}
