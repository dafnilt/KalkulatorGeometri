#include <stdio.h>
#include <string.h>
#include "input.h"
#include "KalkulatorTree.h"
#include "BinaryTree.h"
#include "LuasPBangunRuang.h"

void buatInfixLuasPKubus(float sisi, char* infix) {
    sprintf(infix, "%.2f*%.2f*6", sisi, sisi); // Ubah dari "6*%.2f*%.2f" menjadi "%.2f*%.2f*6"
}

void buatInfixLuasPBalok(float panjang, float lebar, float tinggi, char* infix) {
    sprintf(infix, "(2*%.2f*%.2f) + (2*%.2f*%.2f) + (2*%.2f*%.2f)", panjang, lebar, panjang, tinggi, lebar, tinggi);
}

void buatInfixLuasPLimasPersegi(float sisiAlas, float tinggi, char* infix) {
    sprintf(infix, "(%.2f*%.2f*4) + (0.5*%.2f*%.2f*4)", sisiAlas, sisiAlas, sisiAlas, tinggi);
}

void buatInfixLuasPPrismaSegitiga(float alas, float tinggi, float panjang, char* infix) {
    sprintf(infix, "(%.2f*%.2f) + (0.5*%.2f*%.2f*3)", alas, panjang, alas, tinggi);
}

void buatInfixLuasPBola(float jariJari, char* infix) {
    sprintf(infix, "4*3.14159*%.2f*%.2f", jariJari, jariJari);
}

void buatInfixLuasPTabung(float jariJari, float tinggi, char* infix) {
    sprintf(infix, "2*3.14159*%.2f*%.2f + (2*3.14159*%.2f*%.2f)", jariJari, tinggi, jariJari, jariJari);
}

// Fungsi untuk menghitung dan menampilkan luas permukaan bangun ruang
void hitungDanTampilkanLuasPermukaan(float nilai1, float nilai2, float nilai3, char* bentuk) {
    char infix[100];
    char postfix[100];
    BinTree expTree;

    if (strcmp(bentuk, "kubus") == 0) {
        buatInfixLuasPKubus(nilai1, infix);
    } else if (strcmp(bentuk, "balok") == 0) {
        buatInfixLuasPBalok(nilai1, nilai2, nilai3, infix);
    } else if (strcmp(bentuk, "limasPersegi") == 0) {
        buatInfixLuasPLimasPersegi(nilai1, nilai2, infix);
    } else if (strcmp(bentuk, "prismaSegitiga") == 0) {
        buatInfixLuasPPrismaSegitiga(nilai1, nilai2, nilai3, infix);
    } else if (strcmp(bentuk, "bola") == 0) {
        buatInfixLuasPBola(nilai1, infix);
    } else if (strcmp(bentuk, "tabung") == 0) {
        buatInfixLuasPTabung(nilai1, nilai2, infix);
    } else {
        printf("Bentuk tidak dikenali\n");
        return;
    }

    printf("Infix: %s\n", infix);  // Garis debugging

    InfixToPostfix(infix, postfix);
    printf("Postfix: %s\n", postfix);  // Garis debugging

    expTree = buildTreeFromPostfix(postfix);
    float hasil = CalculationOfTree(expTree);
    printf("\n\n");
    ShowInfoTree(expTree);
    printf("\n\n");
    printf("= %.2f\n", hasil);

    // Menampilkan luas permukaan yang telah dihitung
    printf("Luas permukaan %s adalah %.2f\n", bentuk, hasil);
}

