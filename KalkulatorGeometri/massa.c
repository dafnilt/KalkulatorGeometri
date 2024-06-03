#include <stdio.h>

// Fungsi untuk mengkonversi massa dari satu satuan ke satuan lain
void convertMass(float value, int fromUnit, int toUnit) {
    // Faktor konversi ke gram
    float conversionFactors[] = {1000, 100, 10, 1, 0.1, 0.01, 0.001};
    
    // Konversi dari satuan asal ke gram
    float valueInGrams = value * conversionFactors[fromUnit - 1];
    
    // Konversi dari gram ke satuan tujuan
    float convertedValue = valueInGrams / conversionFactors[toUnit - 1];
    
    printf("Nilai setelah konversi: %.2f\n", convertedValue);
}

int mainMassa() {
    int fromUnit, toUnit;
    float value;
    
    printf("Pilih satuan massa asal:\n");
    printf("1. Kilogram\n");
    printf("2. Hektogram\n");
    printf("3. Dekagram\n");
    printf("4. Gram\n");
    printf("5. Desigram\n");
    printf("6. Sentigram\n");
    printf("7. Miligram\n");
    printf("Masukkan pilihan (1-7): ");
    scanf("%d", &fromUnit);

    printf("Pilih satuan massa tujuan:\n");
    printf("1. Kilogram\n");
    printf("2. Hektogram\n");
    printf("3. Dekagram\n");
    printf("4. Gram\n");
    printf("5. Desigram\n");
    printf("6. Sentigram\n");
    printf("7. Miligram\n");
    printf("Masukkan pilihan (1-7): ");
    scanf("%d", &toUnit);

    printf("Masukkan nilai yang ingin dikonversi: ");
    scanf("%f", &value);
    
    convertMass(value, fromUnit, toUnit);
    
    return 0;
}
