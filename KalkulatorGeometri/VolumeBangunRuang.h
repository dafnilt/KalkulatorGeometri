#ifndef VOLUMEBANGUNRUANG_H
#define VOLUMEBANGUNRUANG_H

#include <stdio.h>
#include <string.h>
#include "KalkulatorTree.h"
#include "BinaryTree.h"

// Deklarasi fungsi untuk mendapatkan input dari pengguna
float getInput(char* prompt);
float getSisiDariPengguna();
float getTinggiDariPengguna();
float getPanjangDariPengguna();
float getLebarDariPengguna();
float getJariJariDariPengguna();

// Deklarasi fungsi untuk membuat ekspresi infix berdasarkan bentuk geometri
void buatInfixDariKubus(float sisi, char* infix);
void buatInfixDariBalok(float panjang, float lebar, float tinggi, char* infix);
void buatInfixDariLimasPersegi(float sisiAlas, float tinggi, char* infix);
void buatInfixDariPrismaSegitiga(float alas, float tinggi, float panjang, char* infix);
void buatInfixDariBola(float jariJari, char* infix);
void buatInfixDariTabung(float jariJari, float tinggi, char* infix);

// Deklarasi fungsi untuk menghitung dan menampilkan volume
void hitungDanTampilkanVolume(float nilai1, float nilai2, float nilai3, char* bentuk);
#endif 
