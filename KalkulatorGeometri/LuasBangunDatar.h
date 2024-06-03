#ifndef LUASBANGUNDATAR_H
#define LUASBANGUNDATAR_H

#define PI 3.14159265359
#define Nil NULL
#define Info(P) (P)->info
#define Left(P) (P)->left
#define Right(P) (P)->right
#define Next(P) (P)->next

#include "KalkulatorTree.h"
#include "BinaryTree.h"
#include <math.h>
#include <conio.h>


void buatInfixDariSisiPersegi(float sisi, char* infix) ;

void buatInfixDariPanjangLebarPersegiPanjang(float panjang, float lebar, char* infix) ;

void buatInfixDariRadiusLingkaran(float radius, char* infix) ;

void buatInfixDariAlasTinggiSegitiga(float alas, float tinggi, char* infix) ;

void buatInfixDariAlasTinggiJajargenjang(float alas, float tinggi, char* infix) ;

void buatInfixDariSisiSejajarTinggiTrapesium(float sisiSejajar1, float sisiSejajar2, float tinggi, char* infix);

void buatInfixDariDiagonalLayangLayang(float diagonal1, float diagonal2, char* infix);

void buatInfixLuasBelahKetupat(float diagonal1, float diagonal2, char* infix);

void hitungDanTampilkanLuas(float nilai1, float nilai2, float nilai3, char* bentuk);

#endif

