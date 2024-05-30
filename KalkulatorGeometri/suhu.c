#include <stdio.h>

void celsiusToFahrenheit(float celsius) {
    float fahrenheit = (celsius * 9 / 5) + 32;
    printf("%.2f C = %.2f F\n", celsius, fahrenheit);
}

void fahrenheitToCelsius(float fahrenheit) {
    float celsius = (fahrenheit - 32) * 5 / 9;
    printf("%.2f °F = %.2f °C\n", fahrenheit, celsius);
}

void celsiusToKelvin(float celsius) {
    float kelvin = celsius + 273.15;
    printf("%.2f °C = %.2f K\n", celsius, kelvin);
}

void kelvinToCelsius(float kelvin) {
    float celsius = kelvin - 273.15;
    printf("%.2f K = %.2f °C\n", kelvin, celsius);
}

void fahrenheitToKelvin(float fahrenheit) {
    float kelvin = (fahrenheit - 32) * 5 / 9 + 273.15;
    printf("%.2f °F = %.2f K\n", fahrenheit, kelvin);
}

void kelvinToFahrenheit(float kelvin) {
    float fahrenheit = (kelvin - 273.15) * 9 / 5 + 32;
    printf("%.2f K = %.2f °F\n", kelvin, fahrenheit);
}

int mainSuhu() {
    int choice;
    float temperature;

    printf("Pilih konversi suhu yang ingin dilakukan:\n");
    printf("1. Celsius ke Fahrenheit\n");
    printf("2. Fahrenheit ke Celsius\n");
    printf("3. Celsius ke Kelvin\n");
    printf("4. Kelvin ke Celsius\n");
    printf("5. Fahrenheit ke Kelvin\n");
    printf("6. Kelvin ke Fahrenheit\n");
    printf("Masukkan pilihan (1-6): ");
    scanf("%d", &choice);

    switch(choice) {
        case 1:
            printf("Masukkan suhu dalam Celsius: ");
            scanf("%f", &temperature);
            celsiusToFahrenheit(temperature);
            break;
        case 2:
            printf("Masukkan suhu dalam Fahrenheit: ");
            scanf("%f", &temperature);
            fahrenheitToCelsius(temperature);
            break;
        case 3:
            printf("Masukkan suhu dalam Celsius: ");
            scanf("%f", &temperature);
            celsiusToKelvin(temperature);
            break;
        case 4:
            printf("Masukkan suhu dalam Kelvin: ");
            scanf("%f", &temperature);
            kelvinToCelsius(temperature);
            break;
        case 5:
            printf("Masukkan suhu dalam Fahrenheit: ");
            scanf("%f", &temperature);
            fahrenheitToKelvin(temperature);
            break;
        case 6:
            printf("Masukkan suhu dalam Kelvin: ");
            scanf("%f", &temperature);
            kelvinToFahrenheit(temperature);
            break;
        default:
            printf("Pilihan tidak valid.\n");
            break;
    }

    return 0;
}
