#ifndef KELILING_H
#define KELILING_H

#include <stdio.h>
#include "LuasBangunDatar.h"
#include "KalkulatorTree.h"
#include "BinaryTree.h"


void buatInfixDariPersegi(float sisi, char* infix);
void buatInfixDariPersegiPanjang(float panjang, float lebar, char* infix);
void buatInfixDariKelilingJajarGenjang(float alas, float sisimiring, char* infix);
void buatInfixDariKelilingBelahKetupat(float sisi, char* infix);
void buatInfixDariKelilingLayangLayang(float sisiA, float sisiB, char* infix);
void buatInfixDariKelilingTrapesium(float sisisamapanjang, float alaspanjang, float alaspendek, char* infix);
void buatInfixDariKelilingLingkaran(float jariJari, char* infix);
void buatInfixDariKelilingSegitiga(float sisi1, float sisi2, float sisi3, char* infix);

void hitungDanTampilkanKeliling(float nilai1, float nilai2, float nilai3, char* bentuk);


#endif
