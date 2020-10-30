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
    printf("Se va a imprimir algo\n");
}
