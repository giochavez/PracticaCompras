#include <stdlib.h>
#include <stdio.h>
#include "lista.h"

void iniciarLista(Lista *pLista){
    pLista->inicio = NULL;
    pLista->fin = NULL;
}

int vacia(Lista *pLista){
    if(pLista->inicio == NULL){
        return 1;
    }
    return 0;
}
void agregarNodo(Lista *pLista, Nodo *pNodo){
    if(vacia(pLista)==1){
        pLista->inicio = pNodo;
        pLista->fin = pNodo;
        return;
    }
    pLista->fin->siguiente = pNodo;
    pLista->fin = pNodo;
}
void imprimirLista(Lista *pLista){
    if(pLista->inicio== NULL){
        printf("La lista esta vacia");
    }else{
        while(pLista->inicio != NULL){
        printf("Nombre: %s \nCantidad: %d\nPrecio: %0.2lf\n\n", pLista->inicio->informacion);
        pLista->inicio = pLista->inicio->siguiente;
        }
    }
}
