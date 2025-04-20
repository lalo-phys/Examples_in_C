#include <stdio.h>
#include "temperature.h" // Incluye el archivo de encabezado para usar la función y las constantes

int main() {
    float fahr, celsius;
    int lower = LOWER_LIMIT;
    int upper = UPPER_LIMIT;
    int step = STEP_SIZE;

    fahr = lower;
    printf("=====================\n");
    printf("Fahrenheit to Celsius\n");
    printf("=====================\n");
    while (fahr <= upper) {
        celsius = fahrenheit_a_celsius(fahr); // Llama a la función de conversión
        printf("%3.0f %6.1f\n", fahr, celsius);
        fahr = fahr + step;
    }
    printf("=====================\n");
    printf("        \n");
    printf("        \n");
    return 0; // Buena práctica incluir return 0 en main
}