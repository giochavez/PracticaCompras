#include <stdlib.h>
#include "nodo.h"

Nodo *crearNodo(){
    Nodo *n;
    n = malloc(sizeof(Nodo));
    // (*n).siguiente = NULL;
    n->siguiente = NULL;
    return n;
}
