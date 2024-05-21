#include <stdio.h>
int main() {
    int sumaPares = 0, sumaImpares = 0;
    int limite, i;

    // Solicitar al usuario que ingrese el número límite
    printf("Ingrese un número entre 1 y 200: ");
    scanf("%d", &limite);

    // Verificar que el número esté en el rango correcto
    if(limite < 1 || limite > 200) {
        printf("El número debe estar entre 1 y 200.\n");
        return 1;
    }

    // Calcular la suma de números pares e impares
    for(i = 1; i <= limite; i++) {
        if(i % 2 == 0) {
            sumaPares += i;
        } else {
            sumaImpares += i;
        }
    }

    // Mostrar resultados
    printf("La suma de los números pares entre 1 y %d es: %d\n", limite, sumaPares);
    printf("La suma de los números impares entre 1 y %d es: %d\n", limite, sumaImpares);

    return 0;
}
