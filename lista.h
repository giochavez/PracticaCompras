#ifndef LISTA_H_INCLUDED
#define LISTA_H_INCLUDED
#include "nodo.h"

struct lista{
    Nodo *inicio;
    Nodo *fin;
};

typedef struct lista Lista;

void iniciarLista(Lista *pLista);
int vacia(Lista *pLista);
void agregarNodo(Lista *pLista, Nodo *pNodo);
void imprimirLista(Lista *pLista);

#endif // LISTA_H_INCLUDED
