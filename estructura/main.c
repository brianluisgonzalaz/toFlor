#include <stdio.h>
#include <stdlib.h>
#include "alumnos.h"
#include "menus.h"
#define T 10


/*
1. Listado de alumnos con la descripción del curso.
2. Listado de cursos con todos sus alumnos.
3. El usuario elige un curso, y listamos todos sus alumnos.
4. Cantidad de alumnos que cursan Java.
5. Sumatoria de horas de cada curso, en función de los alumnos que lo cursan.
Por ejemplo. Si a duración de java es 7 Hs, y hay 5 alumnos que eligen ese
curso debería mostrar Java: 35 Hs
6. El promedio de Nota 2 para los alumnos de un curso elegido por el usuario.
7. El curso más elegido.
*/


int main()
{

//eCursos listaDeCursadoAlumnos[T];
eAlumno listadoDeAlumnos[T];

menuPrincipal(listadoDeAlumnos,T);




    return 0;
}
