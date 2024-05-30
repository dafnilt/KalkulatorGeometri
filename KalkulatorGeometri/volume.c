#include <stdio.h>

// Fungsi untuk mengkonversi volume dari satu satuan ke satuan lain
void convertVolume(float value, int fromUnit, int toUnit) {
    // Faktor konversi ke meter kubik
    float conversionFactors[] = {1e12, 1e9, 1e6, 1, 1e-3, 1e-6, 1e-9};
    
    // Konversi dari satuan asal ke meter kubik
    float valueInCubicMeters = value * conversionFactors[fromUnit - 1];
    
    // Konversi dari meter kubik ke satuan tujuan
    float convertedValue = valueInCubicMeters / conversionFactors[toUnit - 1];
    
    printf("Nilai setelah konversi: %.2f\n", convertedValue);
}

int mainVolume() {
    int fromUnit, toUnit;
    float value;
    
    printf("Pilih satuan volume asal:\n");
    printf("1. Kilometer Kubik\n");
    printf("2. Hektameter Kubik\n");
    printf("3. Dekameter Kubik\n");
    printf("4. Meter Kubik\n");
    printf("5. Desimeter Kubik\n");
    printf("6. Centimeter Kubik\n");
    printf("7. Milimeter Kubik\n");
    printf("Masukkan pilihan (1-7): ");
    scanf("%d", &fromUnit);

    printf("Pilih satuan volume tujuan:\n");
    printf("1. Kilometer Kubik\n");
    printf("2. Hektameter Kubik\n");
    printf("3. Dekameter Kubik\n");
    printf("4. Meter Kubik\n");
    printf("5. Desimeter Kubik\n");
    printf("6. Centimeter Kubik\n");
    printf("7. Milimeter Kubik\n");
    printf("Masukkan pilihan (1-7): ");
    scanf("%d", &toUnit);

    printf("Masukkan nilai yang ingin dikonversi: ");
    scanf("%f", &value);
    
    convertVolume(value, fromUnit, toUnit);
    
    return 0;
}
