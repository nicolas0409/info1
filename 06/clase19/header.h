#ifndef HEADER_H_INCLUDED
#define HEADER_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>
typedef struct
{
    int dia ;
    int mes;
    int anio;
}fecha;

typedef struct
{
    int legajo;
    char nombre[20];
    float sueldo;
    fecha Fecha;
}Eempleado;


 void cargarempleado(Eempleado* unempleado);
#endif // HEADER_H_INCLUDED
