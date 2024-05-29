#include <stdio.h>
#include "input.h"

float getInput(char* prompt) {
    float value;
    printf("%s", prompt);
    scanf("%f", &value);
    return value;
}

float getSisiDariPengguna() {
    return getInput("Masukkan sisi: ");
}

float getTinggiDariPengguna() {
    return getInput("Masukkan tinggi: ");
}

float getPanjangDariPengguna() {
    return getInput("Masukkan panjang: ");
}

float getLebarDariPengguna() {
    return getInput("Masukkan lebar: ");
}

float getJariJariDariPengguna() {
    return getInput("Masukkan jari-jari: ");
}

