#include <stdio.h>
#include "input.h"
#include "cobaui.h"

float getInput(char* prompt) {
    float value;
    printf("%s", prompt);
    scanf("%f", &value);
    return value;
}

float getSisiDariPengguna() {
    return getInput("Masukkan sisi: ");
}

float getSisiSegitigaDariPengguna() {
	sisisegitiga();
	return getInput("Masukkan sisi: ");
}

float getTinggiDariPengguna() {
    return getInput("Masukkan tinggi: ");
}

float getTinggiTrapesiumDariPengguna() {
	tinggitrapesium();
    return getInput("Masukkan tinggi trapesium: ");
}

float getPanjangDariPengguna() {
    return getInput("Masukkan panjang: ");
}

float getLebarDariPengguna() {
    return getInput("Masukkan lebar: ");
}

float getJariJariDariPengguna() {
	lingkaran();
    return getInput("Masukkan jari-jari: ");
}

float getSisiMiringFromUser() {
    return getInput("Masukkan sisi miring: ");
}

float getSisiSamaPanjangFromUser() {
	sisisejajartrapesium();
    return getInput("Masukkan sisi sama panjang: ");
}

float getAlasPanjangFromUser() {
    return getInput("Masukkan salah satu sisi sejajar yang panjang: ");
}

float getAlasSegitigaFromUser() {
    return getInput("Masukkan alas segitiga: ");
}

float getAlasJajargenjangFromUser() {
	alasjajargenjang();
    return getInput("Masukkan alas jajargenjang: ");
}

float getTinggiJajargenjangDariPengguna() {
	tinggijajargenjang();
    return getInput("Masukkan tinggi jajargenjang: ");
}

float getAlasPendekFromUser() {
    return getInput("Masukkan salah satu sisi sejajar yang pendek: ");
}

float getSisiAFromUser() {
	d1layang();
    return getInput("Masukkan sisi A: ");
}

float getSisiBFromUser() {
	d2layang();
    return getInput("Masukkan sisi B: ");
}

float getAlasFromUser() {
    return getInput("Masukkan alas: ");
}

float getDiagonal1FromUser() {
	diagonal1belahketupat();
    return getInput("Masukkan panjang diagonal 1: ");
}

float getDiagonal2FromUser() {
	diagonal2belahketupat();
    return getInput("Masukkan panjang diagonal 2: ");
}
