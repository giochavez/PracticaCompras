#include "menu.h"
#include <stdio.h>

void menu() {
    printf("\n\n");
    printf("       MEN%c DE COMPRAS\n", 233);
    printf("(0) Terminar\n");
    printf("(1) Agregar un Art%cculo\n", 161);
    printf("(2) Mostrar los At%cculos\n", 161);
    printf("(3) Agregar al carro un art%cculo\n", 161);
    printf("(4) Retirar del carro un art%cculo\n", 161);
    printf("(5) Vender\n\n");
}


/* definio la funcion */
int leerOpcion() {
    int respuesta;
    do {
        menu();
        printf("\t%cCu%cl es tu elecci%cn? ", 168, 160, 162);
        scanf("%d",&respuesta);
        if (respuesta<0 || respuesta>5) {
            printf("Hay un error en tu elecci%cn!\n", 162);
            printf("Valores solo entre 0 y 5 por favor\n");
        }
    } while(respuesta<0 || respuesta>5);
    printf("\n");
    return respuesta;

}
