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

float getSisiMiringFromUser() {
    return getInput("Masukkan sisi miring: ");
}

float getSisiSamaPanjangFromUser() {
    return getInput("Masukkan sisi sama panjang: ");
}

float getAlasPanjangFromUser() {
    return getInput("Masukkan alas panjang: ");
}

float getAlasPendekFromUser() {
    return getInput("Masukkan alas pendek: ");
}

float getSisiAFromUser() {
    return getInput("Masukkan sisi A: ");
}

float getSisiBFromUser() {
    return getInput("Masukkan sisi B: ");
}

float getAlasFromUser() {
    return getInput("Masukkan alas: ");
}

float getDiagonal1FromUser() {
    return getInput("Masukkan diagonal 1: ");
}

float getDiagonal2FromUser() {
    return getInput("Masukkan diagonal 2: ");
}
