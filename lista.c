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
    if(pLista->inicio== NULL){ // revisamos si la lista está o no vacía
        printf("La lista esta vac%ca", 161);
    }else{ //si la lista esta vacia
        while(pLista->inicio != NULL){ // y mientras lista sea diferente a nulo 
        printf("Nombre: %s \nCantidad en stock: %d\nPrecio unitario: %0.2lf\n\n", pLista->inicio->informacion);
        pLista->inicio = pLista->inicio->siguiente; //condicionamos a que inicio apunte a su siguiente (asi hasta null)
        } //De esa manera aseguramos que el contador vaya navegando atraves de los apuntadores
    }
}
