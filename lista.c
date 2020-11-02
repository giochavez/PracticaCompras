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
        printf("Nombre: %s \n", pLista->inicio->informacion.nombre); //Imprimimos el nombre que esta apuntado en informacion en la propiedad nombre
        printf("Cantidad en stock: %d\n", pLista->inicio->informacion.cantidad); //Imprimimos la cantidad en stock que esta en nuestro "inicio" en nuestra propiedad informacion.cantidad
        printf("Precio unitario: %0.2lf\n\n", pLista->inicio->informacion.precio); //Imprimimos el precio que esta guardado en la propiedad informacion.precio
        pLista->inicio = pLista->inicio->siguiente; //condicionamos a que inicio apunte a su siguiente (asi hasta null)
        } //De esa manera aseguramos que el contador vaya navegando atraves de los apuntadores desde su propiedad siguiente hasta que encuentre un NULL
    } //De no hacer "informacion.propiedad" nos marcará error ya que estamos ocupando apuntadores, y al solo poner %d o %s, nos estamos refiriendo a valores simples y enteros
}
