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

// Function prototypes
float getSisiFromUser();
void createInfixFromSisi(float sisi, char* infix);
void convertInfixToPostfix(const char* infix, char* postfix);
BinTree buildTreeFromPostfix(const char* postfix);
void calculateAndDisplayLuasPersegi(float sisi);

float getPanjangFromUser();
float getLebarFromUser();
void createInfixFromPanjangLebar(float panjang, float lebar, char* infix);

#endif 	
void calculateAndDisplayLuasPersegiPanjang(float panjang, float lebar);

float getRadiusFromUser();
void createInfixFromRadius(float radius, char* infix);
void calculateAndDisplayLuasLingkaran(float radius);

float getAlasFromUser();
float getTinggiFromUser();
void createInfixFromAlasTinggi(float alas, float tinggi, char* infix);
void calculateAndDisplayLuasSegitiga(float alas, float tinggi);

void createInfixFromAlasTinggiJajargenjang(float alas, float tinggi, char* infix);
void calculateAndDisplayLuasJajargenjang(float alas, float tinggi);

float getSisiSejajar1FromUser();
float getSisiSejajar2FromUser();
float getTinggiTrapesiumFromUser();
void createInfixFromSisiSejajarTinggi(float sisiSejajar1, float sisiSejajar2, float tinggi, char* infix);
void calculateAndDisplayLuasTrapesium(float sisiSejajar1, float sisiSejajar2, float tinggi);

// Deklarasi fungsi-fungsi untuk layang-layang
float getDiagonal1FromUser();
float getDiagonal2FromUser();
void createInfixFromLayangLayang(float diagonal1, float diagonal2, char* infix);
void calculateAndDisplayLuasLayangLayang(float diagonal1, float diagonal2);

// Deklarasi fungsi-fungsi untuk belah ketupat
void createInfixFromBelahKetupat(float diagonal1, float diagonal2, char* infix);
void calculateAndDisplayLuasBelahKetupat(float diagonal1, float diagonal2);


