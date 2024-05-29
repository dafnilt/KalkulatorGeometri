#include <stdio.h>
#include <string.h>
#include "VolumeBangunRuang.h"
#include "KalkulatorTree.h"
#include "BinaryTree.h"
#include "input.h"




void buatInfixDariKubus(float sisi, char* infix) {
    sprintf(infix, "%.2f*%.2f*%.2f", sisi, sisi, sisi);
}

void buatInfixDariBalok(float panjang, float lebar, float tinggi, char* infix) {
    sprintf(infix, "%.2f*%.2f*%.2f", panjang, lebar, tinggi);
}

void buatInfixDariLimasPersegi(float sisiAlas, float tinggi, char* infix) {
    sprintf(infix, "(%.2f*%.2f*%.2f)/3", sisiAlas, sisiAlas, tinggi);
}

void buatInfixDariPrismaSegitiga(float alas, float tinggi, float panjang, char* infix) {
    sprintf(infix, "(0.5*%.2f*%.2f)*%.2f", alas, tinggi, panjang);
}

void buatInfixDariBola(float jariJari, char* infix) {
    sprintf(infix, "(4.0/3.0)*3.14159*%.2f*%.2f*%.2f", jariJari, jariJari, jariJari);
}

void buatInfixDariTabung(float jariJari, float tinggi, char* infix) {
    sprintf(infix, "3.14159*%.2f*%.2f*%.2f", jariJari, jariJari, tinggi);
}

void hitungDanTampilkanVolume(float nilai1, float nilai2, float nilai3, char* bentuk) {
    char infix[100];
    char postfix[100];
    BinTree expTree;

    if (strcmp(bentuk, "kubus") == 0) {
        buatInfixDariKubus(nilai1, infix);
    } else if (strcmp(bentuk, "balok") == 0) {
        buatInfixDariBalok(nilai1, nilai2, nilai3, infix);
    } else if (strcmp(bentuk, "limasPersegi") == 0) {
        buatInfixDariLimasPersegi(nilai1, nilai2, infix);
    } else if (strcmp(bentuk, "prismaSegitiga") == 0) {
        buatInfixDariPrismaSegitiga(nilai1, nilai2, nilai3, infix);
    } else if (strcmp(bentuk, "bola") == 0) {
        buatInfixDariBola(nilai1, infix);
    } else if (strcmp(bentuk, "tabung") == 0) {
        buatInfixDariTabung(nilai1, nilai2, infix);
    } else {
        printf("Bentuk tidak dikenali\n");
        return;
    }

    printf("Infix: %s\n", infix);  // Debugging line

    InfixToPostfix(infix, postfix);
    printf("Postfix: %s\n", postfix);  // Debugging line

    expTree = buildTreeFromPostfix(postfix);
    float hasil = CalculationOfTree(expTree);
    printf("Volume %s adalah %.2f\n", bentuk, hasil);
}

