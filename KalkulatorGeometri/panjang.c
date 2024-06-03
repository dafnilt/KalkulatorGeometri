#include <stdio.h>

// Fungsi untuk mengkonversi panjang dari satu satuan ke satuan lain
void convertLength(float value, int fromUnit, int toUnit) {
    // Faktor konversi ke meter
    float conversionFactors[] = {1000, 100, 10, 1, 0.1, 0.01, 0.001};
    
    // Konversi dari satuan asal ke meter
    float valueInMeters = value * conversionFactors[fromUnit - 1];
    
    // Konversi dari meter ke satuan tujuan
    float convertedValue = valueInMeters / conversionFactors[toUnit - 1];
    
    printf("Nilai setelah konversi: %.2f\n", convertedValue);
}

int mainPanjang() {
    int fromUnit, toUnit;
    float value;
    
    printf("Pilih satuan panjang asal:\n");
    printf("1. Kilometer\n");
    printf("2. Hektometer\n");
    printf("3. Dekameter\n");
    printf("4. Meter\n");
    printf("5. Desimeter\n");
    printf("6. Sentimeter\n");
    printf("7. Milimeter\n");
    printf("Masukkan pilihan (1-7): ");
    scanf("%d", &fromUnit);

    printf("Pilih satuan panjang tujuan:\n");
    printf("1. Kilometer\n");
    printf("2. Hektometer\n");
    printf("3. Dekameter\n");
    printf("4. Meter\n");
    printf("5. Desimeter\n");
    printf("6. Sentimeter\n");
    printf("7. Milimeter\n");
    printf("Masukkan pilihan (1-7): ");
    scanf("%d", &toUnit);

    printf("Masukkan nilai yang ingin dikonversi: ");
    scanf("%f", &value);
    
    convertLength(value, fromUnit, toUnit);
    
    return 0;
}
