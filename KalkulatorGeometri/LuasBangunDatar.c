#pragma once
#pragma warning(disable: 4996)
#define PI 3.14159265359
#include "LuasBangunDatar.h"

//PERSEGI
float getSisiFromUser() {
    float sisi;
    printf("Masukkan sisi persegi: ");
    scanf("%f", &sisi);
    return sisi;
}

void createInfixFromSisi(float sisi, char* infix) {
    sprintf(infix, "%.2f*%.2f", sisi, sisi);  // Generates infix from the area formula of the square (side * side)
}

void calculateAndDisplayLuasPersegi(float sisi) {
    char infix[100];   // Adjust size based on your needs
    char postfix[100]; // Adjust size based on your needs
    BinTree expTree;

    createInfixFromSisi(sisi, infix);
    convertInfixToPostfix(infix, postfix);
    expTree = buildTreeFromPostfix(postfix);
    
    float hasil = CalculationOfTree(expTree); 
    printf("Luas persegi dengan sisi %.2f adalah %.2f\n", sisi, hasil);
}

//PERSEGI PANJANG
float getPanjangFromUser() {
    float panjang;
    printf("Masukkan panjang persegi panjang: ");
    scanf("%f", &panjang);
    return panjang;
}

float getLebarFromUser() {
    float lebar;
    printf("Masukkan lebar persegi panjang: ");
    scanf("%f", &lebar);
    return lebar;
}

void createInfixFromPanjangLebar(float panjang, float lebar, char* infix) {
    sprintf(infix, "%.2f*%.2f", panjang, lebar);  // Generates infix from the area formula of the rectangle (length * width)
}

void calculateAndDisplayLuasPersegiPanjang(float panjang, float lebar) {
    char infix[100];   // Adjust size based on your needs
    char postfix[100]; // Adjust size based on your needs
    BinTree expTree;

    createInfixFromPanjangLebar(panjang, lebar, infix);
    convertInfixToPostfix(infix, postfix);
    expTree = buildTreeFromPostfix(postfix);
    
    float hasil = CalculationOfTree(expTree); 
    printf("Luas persegi panjang dengan panjang %.2f dan lebar %.2f adalah %.2f\n", panjang, lebar, hasil);
}

//LINGKARAN
float getRadiusFromUser() {
    float radius;
    printf("Masukkan jari-jari lingkaran: ");
    scanf("%f", &radius);
    return radius;
}

void createInfixFromRadius(float radius, char* infix) {
    sprintf(infix, "%.2f*%.2f^2", PI, radius);  // Generates infix from the area formula of the circle (pi * r^2)
}

void calculateAndDisplayLuasLingkaran(float radius) {
    char infix[100];   // Adjust size based on your needs
    char postfix[100]; // Adjust size based on your needs
    BinTree expTree;

    createInfixFromRadius(radius, infix);
    convertInfixToPostfix(infix, postfix);
    expTree = buildTreeFromPostfix(postfix);
    
    float hasil = CalculationOfTree(expTree); 
    printf("Luas lingkaran dengan jari-jari %.2f adalah %.2f\n", radius, hasil);
}

float getAlasFromUser() {
    float alas;
    printf("Masukkan panjang alas: ");
    scanf("%f", &alas);
    return alas;
}

float getTinggiFromUser() {
    float tinggi;
    printf("Masukkan tinggi: ");
    scanf("%f", &tinggi);
    return tinggi;
}

//SEGITIGA
void createInfixFromAlasTinggi(float alas, float tinggi, char* infix) {
    sprintf(infix, "(0.5)*%.2f*%.2f", alas, tinggi);  // Generates infix from the area formula of the triangle (0.5 * base * height)
}

void calculateAndDisplayLuasSegitiga(float alas, float tinggi) {
    char infix[100];   // Adjust size based on your needs
    char postfix[100]; // Adjust size based on your needs
    BinTree expTree;

    createInfixFromAlasTinggi(alas, tinggi, infix);
    convertInfixToPostfix(infix, postfix);
    expTree = buildTreeFromPostfix(postfix);
    
    float hasil = CalculationOfTree(expTree); 
    printf("Luas segitiga dengan alas %.2f dan tinggi %.2f adalah %.2f\n", alas, tinggi, hasil);
}

//JAJARGENJANG
void createInfixFromAlasTinggiJajargenjang(float alas, float tinggi, char* infix) {
    sprintf(infix, "%.2f*%.2f", alas, tinggi);  // Generates infix from the area formula of the triangle (0.5 * base * height)
}

void calculateAndDisplayLuasJajargenjang(float alas, float tinggi) {
    char infix[100];
    char postfix[100];
    BinTree expTree;

    createInfixFromAlasTinggiJajargenjang(alas, tinggi, infix);
    convertInfixToPostfix(infix, postfix);
    expTree = buildTreeFromPostfix(postfix);

    float hasil = CalculationOfTree(expTree); 
    printf("Luas jajargenjang dengan alas %.2f dan tinggi %.2f adalah %.2f\n", alas, tinggi, hasil);
}

//TRAPESIUM
float getSisiSejajar1FromUser() {
    float sisiSejajar1;
    printf("Masukkan panjang sisi sejajar pertama trapesium: ");
    scanf("%f", &sisiSejajar1);
    return sisiSejajar1;
}

float getSisiSejajar2FromUser() {
    float sisiSejajar2;
    printf("Masukkan panjang sisi sejajar kedua trapesium: ");
    scanf("%f", &sisiSejajar2);
    return sisiSejajar2;
}

float getTinggiTrapesiumFromUser() {
    float tinggi;
    printf("Masukkan tinggi trapesium: ");
    scanf("%f", &tinggi);
    return tinggi;
}

void createInfixFromSisiSejajarTinggi(float sisiSejajar1, float sisiSejajar2, float tinggi, char* infix) {
    sprintf(infix, "0.5*(%.2f+%.2f)*%.2f", sisiSejajar1, sisiSejajar2, tinggi);  // Generates infix from the area formula of the trapezoid (0.5 * (base1 + base2) * height)
}

void calculateAndDisplayLuasTrapesium(float sisiSejajar1, float sisiSejajar2, float tinggi) {
    char infix[100];
    char postfix[100];
    BinTree expTree;

    createInfixFromSisiSejajarTinggi(sisiSejajar1, sisiSejajar2, tinggi, infix);
    convertInfixToPostfix(infix, postfix);
    expTree = buildTreeFromPostfix(postfix);

    float hasil = CalculationOfTree(expTree); 
    printf("Luas trapesium dengan sisi sejajar %.2f dan %.2f dan tinggi %.2f adalah %.2f\n", sisiSejajar1, sisiSejajar2, tinggi, hasil);
}

//LAYANG LAYANG
float getDiagonal1FromUser() {
    float diagonal1;
    printf("Masukkan panjang diagonal 1: ");
    scanf("%f", &diagonal1);
    return diagonal1;
}

float getDiagonal2FromUser() {
    float diagonal2;
    printf("Masukkan panjang diagonal 2: ");
    scanf("%f", &diagonal2);
    return diagonal2;
}

void createInfixFromLayangLayang(float diagonal1, float diagonal2, char* infix) {
    sprintf(infix, "(0.5)*%.2f*%.2f", diagonal1, diagonal2);  // Generates infix from the area formula of the kite (0.5 * d1 * d2)
}

void calculateAndDisplayLuasLayangLayang(float diagonal1, float diagonal2) {
    char infix[100];
    char postfix[100];
    BinTree expTree;

    createInfixFromLayangLayang(diagonal1, diagonal2, infix);
    convertInfixToPostfix(infix, postfix);
    expTree = buildTreeFromPostfix(postfix);

    float hasil = CalculationOfTree(expTree); 
    printf("Luas layang-layang dengan diagonal 1 %.2f dan diagonal 2 %.2f adalah %.2f\n", diagonal1, diagonal2, hasil);
}

//BELAH KETUPAT
void createInfixFromBelahKetupat(float diagonal1, float diagonal2, char* infix) {
    sprintf(infix, "(0.5)*%.2f*%.2f", diagonal1, diagonal2);  // Generates infix from the area formula of the rhombus (0.5 * d1 * d2)
}

void calculateAndDisplayLuasBelahKetupat(float diagonal1, float diagonal2) {
    char infix[100];
    char postfix[100];
    BinTree expTree;

    createInfixFromBelahKetupat(diagonal1, diagonal2, infix);
    convertInfixToPostfix(infix, postfix);
    expTree = buildTreeFromPostfix(postfix);

    float hasil = CalculationOfTree(expTree); 
    printf("Luas belah ketupat dengan diagonal 1 %.2f dan diagonal 2 %.2f adalah %.2f\n", diagonal1, diagonal2, hasil);
}


