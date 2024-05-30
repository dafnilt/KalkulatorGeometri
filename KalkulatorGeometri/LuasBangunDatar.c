#include <stdio.h>
#include <string.h>
#include "LuasBangunDatar.h"
#include "KalkulatorTree.h"
#include "BinaryTree.h"
#include "input.h"

#define PI 3.14159265359

void buatInfixDariSisiPersegi(float sisi, char* infix) {
    sprintf(infix, "%.2f*%.2f", sisi, sisi);
}

void buatInfixDariPanjangLebarPersegiPanjang(float panjang, float lebar, char* infix) {
    sprintf(infix, "%.2f*%.2f", panjang, lebar);
}

void buatInfixDariRadiusLingkaran(float radius, char* infix) {
    sprintf(infix, "%.2f*%.2f^2", PI, radius);
}

void buatInfixDariAlasTinggiSegitiga(float alas, float tinggi, char* infix) {
    sprintf(infix, "(0.5)*%.2f*%.2f", alas, tinggi);
}

void buatInfixDariAlasTinggiJajargenjang(float alas, float tinggi, char* infix) {
    sprintf(infix, "%.2f*%.2f", alas, tinggi);
}

void buatInfixDariSisiSejajarTinggiTrapesium(float sisiSejajar1, float sisiSejajar2, float tinggi, char* infix) {
    sprintf(infix, "0.5*(%.2f+%.2f)*%.2f", sisiSejajar1, sisiSejajar2, tinggi);
}

void buatInfixDariDiagonalLayangLayang(float diagonal1, float diagonal2, char* infix) {
    sprintf(infix, "(0.5)*%.2f*%.2f", diagonal1, diagonal2);
}

void buatInfixDariDiagonalBelahKetupat(float diagonal1, float diagonal2, char* infix) {
    sprintf(infix, "(0.5)*%.2f*%.2f", diagonal1, diagonal2);
}

void hitungDanTampilkanLuas(float nilai1, float nilai2, float nilai3, char* bentuk) {
    char infix[100];
    char postfix[100];
    BinTree expTree;

    if (strcmp(bentuk, "persegi") == 0) {
        buatInfixDariSisiPersegi(nilai1, infix);
    } else if (strcmp(bentuk, "persegi panjang") == 0) {
        buatInfixDariPanjangLebarPersegiPanjang(nilai1, nilai2, infix);
    } else if (strcmp(bentuk, "lingkaran") == 0) {
        buatInfixDariRadiusLingkaran(nilai1, infix);
    } else if (strcmp(bentuk, "segitiga") == 0) {
        buatInfixDariAlasTinggiSegitiga(nilai1, nilai2, infix);
    } else if (strcmp(bentuk, "jajargenjang") == 0) {
        buatInfixDariAlasTinggiJajargenjang(nilai1, nilai2, infix);
    } else if (strcmp(bentuk, "trapesium") == 0) {
        buatInfixDariSisiSejajarTinggiTrapesium(nilai1, nilai2, nilai3, infix);
    } else if (strcmp(bentuk, "layang-layang") == 0) {
        buatInfixDariDiagonalLayangLayang(nilai1, nilai2, infix);
    } else if (strcmp(bentuk, "belah ketupat") == 0) {
        buatInfixDariDiagonalBelahKetupat(nilai1, nilai2, infix);        
    } else {
        printf("Bentuk tidak dikenali\n");
        return;
    }

    printf("Infix: %s\n", infix);
    InfixToPostfix(infix, postfix);
    printf("Postfix: %s\n", postfix);

    expTree = buildTreeFromPostfix(postfix);
    float hasil = CalculationOfTree(expTree);
    printf("\n\n");
    ShowInfoTree(expTree);
    printf("\n\n");
    printf("= %.2f\n", hasil);
    printf("Luas %s adalah %.2f\n", bentuk, hasil);
}
