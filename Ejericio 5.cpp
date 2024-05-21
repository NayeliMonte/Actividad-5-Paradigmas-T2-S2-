#include <stdio.h>

int main() {
    int numeros[10];
    int sumaPares = 0;
    int contadorPares = 0;
    float mediaPares;

    // Solicitar los 10 números enteros
    printf("Introduzca 10 números enteros:\n");
    for (int i = 0; i < 10; i++) {
        printf("Número %d: ", i + 1);
        scanf("%d", &numeros[i]);
        // Sumar si el número es par
        if (numeros[i] % 2 == 0) {
            sumaPares += numeros[i];
            contadorPares++;
        }
    }

    // Calcular la media aritmética de los números pares
    if (contadorPares > 0) {
        mediaPares = (float)sumaPares / contadorPares;
    } else {
        mediaPares = 0;
    }

    // Mostrar resultados
    printf("La suma de los números pares es: %d\n", sumaPares);
    printf("La cantidad de números pares es: %d\n", contadorPares);
    printf("La media aritmética de los números pares es: %.2f\n", mediaPares);

    return 0;
}
