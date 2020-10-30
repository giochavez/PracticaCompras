#ifndef NODO_H_INCLUDED
#define NODO_H_INCLUDED
#include "articulos.h"

struct nodo{
    struct Articulo informacion;
    struct nodo *siguiente;
};

typedef struct nodo Nodo;

Nodo *crearNodo();


#endif // NODO_H_INCLUDED
