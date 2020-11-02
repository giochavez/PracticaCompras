#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "articulos.h"

void leerArticulo(struct Articulo* art) {
    char cadena[100];

    printf("Nombre del articulo? ");

    fflush(stdin);
    gets(cadena);
    (*art).nombre = strdup(cadena);
    printf("Cantidad en exitencia? ");
    scanf("%d",&((*art).cantidad));
    printf("Precio unitario? ");
    scanf("%lf",&((*art).precio));
}



void imprimirArticulo(struct Articulo art) {
    printf("Nombre: %s\n",art.nombre);
    printf("existencias: %d\n",art.cantidad);
    printf("precio unitario $%0.2f\n",art.precio);
}
