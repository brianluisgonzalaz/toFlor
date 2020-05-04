#define LIBRE 0
#define OCUPADO 1


typedef struct
{
    int legajo;
    char nombre[50];
    int nota1;
    int nota2;
    float promedio;
    int estado;
}eAlumno;

/*
typedef struct
{
    char descripcion[50];
    int duracion;
    int estado;
}eCursos;
*/
void inicializarListadoAlumnos(eAlumno listadoDeAlumnos[],int tam);
int buscarLibre(eAlumno listadoDeAlumnos[],int tam);
int legajoAutomatico (eAlumno listadoDeAlumnos[], int tam);
int altaAlumno(eAlumno listadoDeAlumnos[], int tam);
void altaNombreAlumno(char auxString[], char mensaje[]);
int altaNotasAlumnos(char mensaje[]);
float promedioAlumnos(int nota1, int nota2);
void mostrarAlumnos(eAlumno  listadoDeAlumnos[],int tam);
