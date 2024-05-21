#include <stdio.h>

int main() {
    int numero, suma = 0;
    printf("Ingrese un número: ");
    scanf("%d", &numero);

    for (int i = 1; i <= numero; i++) {
        suma += i * i;
    }

    printf("La suma de los cuadrados de los primeros %d números naturales es: %d\n", numero, suma);
    return 0;
}
