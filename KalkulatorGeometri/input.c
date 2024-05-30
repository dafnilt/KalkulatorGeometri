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
	persegi();
    return getInput("Masukkan sisi: ");
}

float getSisiSegitigaDariPengguna() {
	sisisegitiga();
	return getInput("Masukkan sisi: ");
}

float getTinggiDariPengguna() {
	tinggisegitiga();
    return getInput("Masukkan tinggi: ");
}

float getTinggiTrapesiumDariPengguna() {
	tinggitrapesium();
    return getInput("Masukkan tinggi trapesium: ");
}

float getPanjangDariPengguna() {
	panjangpersegipanjang();
    return getInput("Masukkan panjang: ");
}

float getLebarDariPengguna() {
	lebarpersegipanjang();
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
    return getInput("Masukkan alas pendek: ");
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
