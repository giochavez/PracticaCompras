#include "menu.h"
#include <stdio.h>

void menu() {
    printf("\n\n");
    printf("       MENU DE COMPRAS\n");
    printf("(0) Terminar\n");
    printf("(1) agregar un Articulo\n");
    printf("(2) mostrar los Aticulos\n");
    printf("(3) agragar al carro un articulo\n");
    printf("(4) retirar del carro un articulo\n");
    printf("(5) vender\n");
}


/* definio la funcion */
int leerOpcion() {
    int respuesta;
    do {
        menu();
        printf("Cual es tu eleccion? ");
        scanf("%d",&respuesta);
        if (respuesta<0 || respuesta>5) {
            printf("Hay un error en tu eleccion!\n");
            printf("Valores solo entre 0 y 5 por favor\n");
        }
    } while(respuesta<0 || respuesta>5);
    printf("\n");
    return respuesta;

}
