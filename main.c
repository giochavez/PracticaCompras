#include <stdio.h>
#include "lista.h"
#include "menu.h"

int main()
{
    //struct Articulo unArticulo;
    int opcion;

    //leerArticulo(&unArticulo);
    //imprimirArticulo(unArticulo);

    Lista listaArticulos, carritoCompras;
    Nodo *pNodo;
    iniciarLista(&listaArticulos);
    iniciarLista(&carritoCompras);

    printf("Hola buenas tardes!\n");
    do {
        opcion = leerOpcion(); /*definimos la existencia */
        switch (opcion) {
            case 1: printf("agregando un Articulo\n");
                pNodo = crearNodo();
                leerArticulo(&(pNodo->informacion));
                agregarNodo(&listaArticulos, pNodo);
                break;
            case 2: printf("mostrando los Articulos\n");
                imprimirLista(&listaArticulos);
                break;
            case 3: printf("agragando al carro un articulo\n");
                break;
            case 4: printf("retirando del carro un articulo\n");
                break;
            case 5: printf("vendendiendo\n");
                break;
            case 0: printf("Hasta luego\n");
               break;
            default: printf("Opcion no reconocida %d\n",opcion);
               break;
        }
    } while(opcion != 0);
}


