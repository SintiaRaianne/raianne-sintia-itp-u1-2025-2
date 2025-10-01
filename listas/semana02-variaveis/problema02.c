#include <stdio.h>

int main() {

    float celsius;
    float fahrenheit;
    float kelvin;

    printf("\nInforme a temperatura em graus Celsius: ");
    scanf("%f", &celsius);
    
    // Calcular a temperatura em kelvin e fahrenheit com os dados forcencidos
    fahrenheit = (celsius * 9/5) + 32;
    kelvin = (celsius + 273.15);

    printf("\nTemperatura em Fahrenheit: %.1f\n", fahrenheit);
    printf("Temperatura em Kelvin: %.1f\n ", kelvin);

    return 0;
}