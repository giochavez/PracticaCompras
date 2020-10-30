#ifndef ARTICULOS_H_INCLUDED
#define ARTICULOS_H_INCLUDED

struct Articulo {
    char* nombre;
    int cantidad;
    double precio;
};

void leerArticulo(struct Articulo* art);
void imprimirArticulo(struct Articulo art);

#endif // ARTICULOS_H_INCLUDED
