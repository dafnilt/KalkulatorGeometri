#ifndef LUAS_P_BANGUN_RUANG_H
#define LUAS_P_BANGUN_RUANG_H

#include <stdio.h>
#include <string.h>
#include "VolumeBangunRuang.h"
#include "KalkulatorTree.h"
#include "BinaryTree.h"

// Fungsi-fungsi untuk menghitung dan menampilkan luas permukaan dari beberapa bangun ruang
void buatInfixLuasPKubus(float sisi, char* infix);
void buatInfixLuasPBalok(float panjang, float lebar, float tinggi, char* infix);
void buatInfixLuasPLimasPersegi(float sisiAlas, float tinggi, char* infix);
void buatInfixLuasPPrismaSegitiga(float alas, float tinggi, float panjang, char* infix);
void buatInfixLuasPBola(float jariJari, char* infix);
void buatInfixLuasPTabung(float jariJari, float tinggi, char* infix);

// Fungsi untuk menghitung dan menampilkan luas permukaan bangun ruang
void hitungDanTampilkanLuasPermukaan(float nilai1, float nilai2, float nilai3, char* bentuk);

#endif /* LUAS_PERMUKAAN_BANGUN_RUANG_H */

