#include <stdio.h>
#include <string.h>
#include "LuasBangunDatar.h"
#include "KalkulatorTree.h"
#include "BinaryTree.h"
#include "keliling.h"
#include "input.h"

void buatInfixDariPersegi(float sisi, char* infix) {
    sprintf(infix, "%.2f+%.2f+%.2f+%.2f", sisi, sisi, sisi, sisi);
}

void buatInfixDariPersegiPanjang(float panjang, float lebar, char* infix) {
    sprintf(infix, "2*%.2f+%.2f*2", panjang, lebar);
}

void buatInfixDariKelilingJajarGenjang(float alas, float sisimiring, char* infix) {
    sprintf(infix, "2*(%.2f+%.2f)", alas, sisimiring);
}

void buatInfixDariKelilingBelahKetupat(float sisi, char* infix) {
    sprintf(infix, "4*%.2f", sisi);
}

void buatInfixDariKelilingLayangLayang(float sisiA, float sisiB, char* infix) {
    sprintf(infix, "2*(%.2f+%.2f)", sisiA, sisiB);
}

void buatInfixDariKelilingTrapesium(float sisisamapanjang, float alaspanjang, float alaspendek, char* infix) {
    sprintf(infix, "%.2f+%.2f+%.2f+%.2f", sisisamapanjang, sisisamapanjang, alaspanjang, alaspendek);
}

void buatInfixDariKelilingLingkaran(float jariJari, char* infix) {
    sprintf(infix, "2*3.14159*%.2f", jariJari);
}

void hitungDanTampilkanKeliling(float nilai1, float nilai2, float nilai3, char* bentuk) {
    char infix[100];
    char postfix[100];
    BinTree expTree;

    if (strcmp(bentuk, "Persegi") == 0) {
        buatInfixDariPersegi(nilai1, infix);
    } else if (strcmp(bentuk, "persegiPanjang") == 0) {
        buatInfixDariPersegiPanjang(nilai1, nilai2, infix);
    } else if (strcmp(bentuk, "jajarGenjang") == 0) {
        buatInfixDariKelilingJajarGenjang(nilai1, nilai2, infix);
    } else if (strcmp(bentuk, "belahKetupat") == 0) {
        buatInfixDariKelilingBelahKetupat(nilai1, infix);
    } else if (strcmp(bentuk, "layangLayang") == 0) {
        buatInfixDariKelilingLayangLayang(nilai1, nilai2, infix);
    } else if (strcmp(bentuk, "trapesium") == 0) {
        buatInfixDariKelilingTrapesium(nilai1, nilai2, nilai3, infix);
    } else if (strcmp(bentuk, "lingkaran") == 0) {
        buatInfixDariKelilingLingkaran(nilai1, infix);        
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
    printf("Keliling %s adalah %.2f\n", bentuk, hasil);
}

