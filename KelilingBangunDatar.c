#include <stdio.h>
#include <string.h>
#include "LuasBangunDatar.h"
#include "KalkulatorTree.h"
#include "BinaryTree.h"

float getInput(char* prompt) {
    float value;
    printf("%s", prompt);
    scanf("%f", &value);
    return value;
}

float getSisiDariPengguna() {
    return getInput("Masukkan sisi: ");
}

//float getTinggiDariPengguna() {
//    return getInput("Masukkan tinggi: ");
//}

float getPanjangDariPengguna() {
    return getInput("Masukkan panjang: ");
}

float getLebarDariPengguna() {
    return getInput("Masukkan lebar: ");
}

float getJariJariDariPengguna() {
    return getInput("Masukkan jari-jari: ");
}

//void buatInfixDariKubus(float sisi, char* infix) {
//    sprintf(infix, "%.2f*%.2f*%.2f", sisi, sisi, sisi);
//}
void buatInfixDariPersegi(float sisi, char* infix) {
    sprintf(infix, "%.2f+%.2f+%.2f+%.2f", sisi, sisi, sisi, sisi);
}

//void buatInfixDariBalok(float panjang, float lebar, float tinggi, char* infix) {
//    sprintf(infix, "%.2f*%.2f*%.2f", panjang, lebar, tinggi);
//}
void buatInfixDariPersegiPanjang(float panjang, float lebar, char* infix) {
    sprintf(infix, "2*%.2f+%.2f*2", panjang, lebar);
}

//void buatInfixDariLimasPersegi(float sisiAlas, float tinggi, char* infix) {
//    sprintf(infix, "(%.2f*%.2f*%.2f)/3", sisiAlas, sisiAlas, tinggi);
//}
void buatInfixDariKelilingJajarGenjang(float alas, float sisimiring, char* infix) {
    sprintf(infix, "2*(%.2f+%.2f)", alas, sisimiring);
}

//void buatInfixDariPrismaSegitiga(float alas, float tinggi, float panjang, char* infix) {
//    sprintf(infix, "(0.5*%.2f*%.2f)*%.2f", alas, tinggi, panjang);
//}

void buatInfixDariKelilingBelahKetupat(float sisi, char* infix) {
    sprintf(infix, "4*%.2f", sisi);  // Generates infix for the perimeter formula of the rhombus (4 * side)
}

//void buatInfixDariBola(float jariJari, char* infix) {
//    sprintf(infix, "(4.0/3.0)3.14159%.2f*%.2f*%.2f", jariJari, jariJari, jariJari);
//}
void buatInfixDariKelilingLayangLayang(float sisiA, float sisiB, char* infix) {
    sprintf(infix, "2*(%.2f+%.2f)", sisiA, sisiB);
}

//void buatInfixDariTabung(float jariJari, float tinggi, char* infix) {
//    sprintf(infix, "3.14159*%.2f*%.2f*%.2f", jariJari, jariJari, tinggi);
//}

void buatInfixDariKelilingTrapesium(float sisisamapanjang, float alaspanjang, float alaspendek, char* infix) {
    sprintf(infix, "%.2f+%.2f+%.2f+%.2f", sisisamapanjang, sisisamapanjang, alaspanjang, alaspendek);
}

void buatInfixDariKelilingLingkaran(float jariJari, char* infix) {
    sprintf(infix, "2*3.14159*%.2f", jariJari);  // Generates infix for the perimeter formula of the circle (2 * pi * radius)
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
        buatInfixDariJajarGenjang(nilai1, nilai2, infix);
    } else if (strcmp(bentuk, "belahKetupat") == 0) {
        buatInfixDariBelahKetupat(nilai1, infix);
    } else if (strcmp(bentuk, "layangLayang") == 0) {
        buatInfixDariLayangLayang(nilai1, nilai2, infix);
    } else if (strcmp(bentuk, "trapesium") == 0) {
        buatInfixDariTrapesium(nilai1, nilai2, nilai3, infix);
    } else if (strcmp(bentuk, "lingkaran") == 0) {
        buatInfixDariLingkaran(nilai1, infix);        
    } else {
        printf("Bentuk tidak dikenali\n");
        return;
    }

    printf("Infix: %s\n", infix);  // Debugging line

    InfixToPostfix(infix, postfix);
    printf("Postfix: %s\n", postfix);  // Debugging line

    expTree = buildTreeFromPostfix(postfix);
    float hasil = CalculationOfTree(expTree);
    printf("Keliling %s adalah %.2f\n", bentuk, hasil);
}