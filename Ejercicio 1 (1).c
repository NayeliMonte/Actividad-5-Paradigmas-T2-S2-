#include <stdio.h>

int main() {
    unsigned long long suma = 0, producto = 1;
    int numero, i;

    // Solicitar al usuario que ingrese un número
    printf("Ingrese un número entre 20 y 400: ");
    scanf("%d", &numero);

    // Verificar que el número esté en el rango correcto
    if(numero < 20 || numero > 400) {
        printf("El número debe estar entre 20 y 400.\n");
        return 1;
    }

    // Calcular la suma y el producto
    for(i = 20; i <= numero; i++) {
        suma += i;
        producto *= i;
    }

    // Mostrar resultados
    printf("La suma de los números del 20 al %d es: %llu\n", numero, suma);
    printf("El producto de los números del 20 al %d es: %llu\n", numero, producto);

    return 0;
}
