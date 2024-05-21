#include <stdio.h>

int main() {
    int numero, mayor = 0;

    // Solicitamos al usuario que introduzca números hasta que ingrese -99.
    printf("Introduce una serie de números positivos distintos de cero (termina con -99):\\n");
    do {
        scanf("%d", &numero);
        // Si el número es mayor que cero y mayor que el mayor actual, lo actualizamos.
        if(numero > 0 && numero > mayor) {
            mayor = numero;
        }
        // Continuamos solicitando números hasta que el usuario introduzca -99.
    } while(numero != -99);

    // Si el mayor sigue siendo 0, significa que no se ingresaron números válidos.
    if(mayor > 0) {
        printf("El número mayor es: %d\\n", mayor);
    } else {
        printf("No se ingresaron números positivos.\\n");
    }

    return 0;
}
