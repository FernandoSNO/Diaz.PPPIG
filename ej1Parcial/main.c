#include <stdio.h>
#include <stdlib.h>

float descuento(float precio)
{
   float precioTotal;

   precioTotal=precio-precio*0.05;

   return precioTotal;
}

int main()
{
    float productoPrecio = 100;
    float precioFinal;

    precioFinal = descuento(productoPrecio);

    printf("%0.2f", precioFinal);

    return 0;
}
