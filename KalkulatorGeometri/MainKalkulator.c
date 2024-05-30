#include<conio.h>
#include<windows.h>
#include "cobaui.h"
#define PI 3.14159265359
#include "KalkulatorTree.h"
#include "LuasBangunDatar.h"
#include "input.h"
#include "keliling.h"
#include "LuasPBangunRuang.h"
#include "VolumeBangunRuang.h"
#include "massa.h"
#include "panjang.h"
#include "suhu.h"
#include "volume.h"


int main() {
    int status = 1;
    int key, key2, key3;
    int selectedOption = 1;

    int pilihanGeometri, pilihanOperasi, choice;
    float sisi, panjang, radius, lebar, jarijari, alas, tinggi, sisiSejajar1, sisiSejajar2, diagonal1, diagonal2, sisimiring, alaspen, alaspan, sisisama, sisi1, sisi2, sisi3, alasj, tinggij;

    // BinTree expTree;
    // String postfix, input, hasil, in;

    while (status == 1) {
        displayHistoryMenu(selectedOption);

        key = getch();
        switch (key) {
        case 72:  // Up arrow key
            selectedOption = (selectedOption > 1) ? selectedOption - 1 : 4;
            Beep(700, 200);
            break;
        case 80:  // Down arrow key
            selectedOption = (selectedOption < 4) ? selectedOption + 1 : 1;
            Beep(700, 200);
            break;
        case 13:  // Enter key
            switch (selectedOption) {
            case 1:
                system("cls");
                printf("coba 1");
                break;
            case 2:
                status++;
                system("cls");
                selectedOption = 1; // Mengatur selectedOption kembali ke 1
                while (status == 2) {
                    GeometriMenu(selectedOption);
                    key2 = getch();
                    switch (key2) {
                    case 72:  // Up arrow key
                        selectedOption = (selectedOption > 1) ? selectedOption - 1 : 3;
                        Beep(700, 200);
                        break;
                    case 80:  // Down arrow key
                        selectedOption = (selectedOption < 3) ? selectedOption + 1 : 1;
                        Beep(700, 200);
                        break;
                    case 13:  // Enter key
                        switch (selectedOption) {
                        case 1:
							status++;
	                        selectedOption = 1;
	                        system("cls");
	                        while (status == 3) {
	                        	gotoxy(40, 3); warnateks(WHITE); printf("Pilih Menu : \n");
	                        	gotoxy(40, 4); warnateks(YELLOW); printf("%c Hutung Keliling\n", (selectedOption == 1) ? '>' : ' ');
    							gotoxy(40, 5); warnateks(TURQUOISE); printf("%c Hitung Luas\n", (selectedOption == 2) ? '>' : ' ');
    							
    							key = getch();
                                switch (key) {
                                case 72:  // Up arrow key
			                        selectedOption = (selectedOption > 1) ? selectedOption - 1 : 3;
			                        Beep(700, 200);
			                        break;
			                    case 80:  // Down arrow key
			                        selectedOption = (selectedOption < 3) ? selectedOption + 1 : 1;
			                        Beep(700, 200);
			                        break;
			                    case 13:  // Enter key
			                        switch (selectedOption) {
                                	case 1:
                            			status++;
				                        selectedOption = 1;
				                        system("cls");
				                        while (status == 4) {
				                        	gotoxy(8, 1);
										    warnateks(PINK);
										    printf(" ��       ��   ����   ������  ��      ��     ��       ��  �������  ��      ��  ��   ��  \n");
											printf("         ���     ���  ��  ��    ��    ����    ��     ���     ���  ��       ���     ��  ��   ��  \n");
											printf("         �� �� �� ��  ��  ��    ��    �� ���  ��     �� �� �� ��  �����    �� ���  ��  ��   ��  \n");
											warnateks(RED);
											printf("         ��  ���  ��  ������    ��    ��  ��� ��     ��  ���  ��  ��       ��  ��� ��  ��   ��  \n");
											printf("         ��       ��  ��  ��    ��    ��    ����     ��       ��  ��       ��    ����  ��   ��  \n");
											printf("         ��       ��  ��  ��  ������  ��      ��     ��       ��  �������  ��      ��   �����   \n \n\n\n");

				                        	warnateks(YELLOW);
				                            gotoxy(40, 9); printf("%c Pilih bentuk yang ingin dihitung kelilingnya:\n", ' ');
				                            warnateks(WHITE);
				                            gotoxy(40, 10); printf("%c  Persegi\n", (selectedOption == 1) ? '>' : ' ');
				                            gotoxy(40, 11); printf("%c  Persegi Panjang\n", (selectedOption == 2) ? '>' : ' ');
				                            gotoxy(40, 12); printf("%c  Lingkaran\n", (selectedOption == 3) ? '>' : ' ');
				                            gotoxy(40, 13); printf("%c  Segitiga\n", (selectedOption == 4) ? '>' : ' ');
				                            gotoxy(40, 14); printf("%c  Jajargenjang\n", (selectedOption == 5) ? '>' : ' ');
				                            gotoxy(40, 15); printf("%c  Trapesium\n", (selectedOption == 6) ? '>' : ' ');
				                            gotoxy(40, 16); printf("%c  Layang-layang\n", (selectedOption == 7) ? '>' : ' ');
				                            gotoxy(40, 17); printf("%c  Belah ketupat\n", (selectedOption == 8) ? '>' : ' ');	
			    							key = getch();
			                                switch (key) {
			                                case 72:  // Up arrow key
						                        selectedOption = (selectedOption > 1) ? selectedOption - 1 : 8;
						                        Beep(700, 200);
						                        break;
						                    case 80:  // Down arrow key
						                        selectedOption = (selectedOption < 8) ? selectedOption + 1 : 1;
						                        Beep(700, 200);
						                        break;
						                    case 13:  // Enter key
						                        switch (selectedOption) {
					                            case 1:
					                                system("cls");
					                                sisi = getSisiDariPengguna();
					                                hitungDanTampilkanKeliling(sisi, 0, 0, "Persegi");
					                                break;
					                            case 2:
					                                system("cls");
					                                panjang = getPanjangDariPengguna();
					                                lebar = getLebarDariPengguna();
					                                hitungDanTampilkanKeliling(panjang, lebar, 0, "persegiPanjang");
					                                break;
					                            case 3:
					                                system("cls");
					                                jarijari = getJariJariDariPengguna();
					                                hitungDanTampilkanKeliling(jarijari, 0, 0, "lingkaran");
					                                break;
					                            case 4:
					                                system("cls");
										            sisi1 = getSisiSegitigaDariPengguna();
										            sisi2 = getSisiSegitigaDariPengguna();
										            sisi3 = getSisiSegitigaDariPengguna();
										            hitungDanTampilkanKeliling(sisi1, sisi2, sisi3, "segitiga");
										            break;
					                            case 5:
					                                system("cls");
					                                alas = getAlasFromUser();
					                                sisimiring = getSisiMiringFromUser();
					                                hitungDanTampilkanKeliling(alas, sisimiring, 0, "jajarGenjang");
					                                break;
					                            case 6:
					                                system("cls");
					                                sisisama = getSisiSamaPanjangFromUser();
					                                alaspan = getAlasPanjangFromUser();
					                                alaspen = getAlasPendekFromUser();
					                                hitungDanTampilkanKeliling(sisisama, alaspan, alaspen, "trapesium");
					                                break;
					                            case 7:
					                                system("cls");
					                                sisi1 = getSisiAFromUser();
					                                sisi2 = getSisiBFromUser();
					                                hitungDanTampilkanKeliling(sisi1, sisi2, 0, "layangLayang");
					                                break;
					                            case 8:
					                                system("cls");
					                                sisi = getSisiDariPengguna();
					                                hitungDanTampilkanKeliling(sisi, 0, 0, "belahKetupat");
					                                break;
					                		}	
                                		printf("\nTekan backspace untuk kembali ke menu.");
            						while (getch() != 8);
									system("cls"); // Wait for backspace key (ASCII 8)
            						break;
                                	}
                                	}
                                	case 2:
                            			status++;
				                        selectedOption = 1;
				                        system("cls");
				                        while (status == 4) {
				                        	gotoxy(8, 1);
										    warnateks(PINK);
										    printf(" ��       ��   ����   ������  ��      ��     ��       ��  �������  ��      ��  ��   ��  \n");
											printf("         ���     ���  ��  ��    ��    ����    ��     ���     ���  ��       ���     ��  ��   ��  \n");
											printf("         �� �� �� ��  ��  ��    ��    �� ���  ��     �� �� �� ��  �����    �� ���  ��  ��   ��  \n");
											warnateks(RED);
											printf("         ��  ���  ��  ������    ��    ��  ��� ��     ��  ���  ��  ��       ��  ��� ��  ��   ��  \n");
											printf("         ��       ��  ��  ��    ��    ��    ����     ��       ��  ��       ��    ����  ��   ��  \n");
											printf("         ��       ��  ��  ��  ������  ��      ��     ��       ��  �������  ��      ��   �����   \n \n\n\n");

				                        	warnateks(YELLOW);
				                            gotoxy(40, 9); printf("%c Pilih bentuk yang ingin dihitung luasnya:\n", ' ');
				                            warnateks(WHITE);
				                            gotoxy(40, 10); printf("%c  Persegi\n", (selectedOption == 1) ? '>' : ' ');
				                            gotoxy(40, 11); printf("%c  Persegi Panjang\n", (selectedOption == 2) ? '>' : ' ');
				                            gotoxy(40, 12); printf("%c  Lingkaran\n", (selectedOption == 3) ? '>' : ' ');
				                            gotoxy(40, 13); printf("%c  Segitiga\n", (selectedOption == 4) ? '>' : ' ');
				                            gotoxy(40, 14); printf("%c  Jajargenjang\n", (selectedOption == 5) ? '>' : ' ');
				                            gotoxy(40, 15); printf("%c  Trapesium\n", (selectedOption == 6) ? '>' : ' ');
				                            gotoxy(40, 16); printf("%c  Layang-layang\n", (selectedOption == 7) ? '>' : ' ');
				                            gotoxy(40, 17); printf("%c  Belah ketupat\n", (selectedOption == 8) ? '>' : ' ');	
			    							key = getch();
			                                switch (key) {
			                                case 72:  // Up arrow key
						                        selectedOption = (selectedOption > 1) ? selectedOption - 1 : 8;
						                        Beep(700, 200);
						                        break;
						                    case 80:  // Down arrow key
						                        selectedOption = (selectedOption < 8) ? selectedOption + 1 : 1;
						                        Beep(700, 200);
						                        break;
						                    case 13:  // Enter key
						                        switch (selectedOption) {
					                            case 1:
									            	system("cls");
									                sisi = getSisiDariPengguna();
									                hitungDanTampilkanLuas(sisi, 0, 0, "persegi");
									                break;
									            case 2:
									            	system("cls");
									                panjang = getPanjangDariPengguna();
									                lebar = getLebarDariPengguna();
									                hitungDanTampilkanLuas(panjang, lebar, 0, "persegi panjang");
									                break;
									            case 3:
									            	system("cls");
									                jarijari = getJariJariDariPengguna();
									                hitungDanTampilkanLuas(jarijari, 0, 0, "lingkaran");
									                break;
									            case 4:
									            	system("cls");
									                alas = getAlasPanjangFromUser();
									                tinggi = getTinggiDariPengguna();
									                hitungDanTampilkanLuas(alas, tinggi, 0, "segitiga");
									                break;
									            case 5:
									            	system("cls");
									                alasj = getAlasJajargenjangFromUser();
									                tinggij = getTinggiJajargenjangDariPengguna();
									                hitungDanTampilkanLuas(alasj, tinggij, 0, "jajargenjang");
									                break;
									            case 6:
									            	system("cls");
									                sisiSejajar1 = getSisiSamaPanjangFromUser();
									                sisiSejajar2 = getSisiSamaPanjangFromUser();
									                tinggi = getTinggiDariPengguna();
									                hitungDanTampilkanLuas(sisiSejajar1, sisiSejajar2, tinggi, "trapesium");
									                break;
									            case 7:
									            	system("cls");
									                sisi1 = getSisiAFromUser();
									                sisi2 = getSisiBFromUser();
									                hitungDanTampilkanLuas(sisi1, sisi2, 0, "layang-layang");
									                break;
									            case 8:
									            	system("cls");
									                diagonal1 = getDiagonal1FromUser();
									                diagonal2 = getDiagonal2FromUser();
									                hitungDanTampilkanLuas(diagonal1, diagonal2, 0, "belah ketupat");
									                break;
					                		}	
                                		printf("\nTekan backspace untuk kembali ke menu.");
            						while (getch() != 8);
									system("cls"); // Wait for backspace key (ASCII 8)
            						break;
                                	}
                                	}
								}
                            break;
                        }
                        }
                        case 2:
                        	status++;
	                        selectedOption = 1;
	                        system("cls");
	                        while (status == 3) {
	                        	gotoxy(40, 3); warnateks(WHITE); printf("Pilih Menu : \n");
	                        	gotoxy(40, 4); warnateks(YELLOW); printf("%c Hitung Volume\n", (selectedOption == 1) ? '>' : ' ');
    							gotoxy(40, 5); warnateks(TURQUOISE); printf("%c Hitung Luas Permukaan\n", (selectedOption == 2) ? '>' : ' ');
    							
    							key = getch();
                                switch (key) {
                                case 72:  // Up arrow key
			                        selectedOption = (selectedOption > 1) ? selectedOption - 1 : 3;
			                        Beep(700, 200);
			                        break;
			                    case 80:  // Down arrow key
			                        selectedOption = (selectedOption < 3) ? selectedOption + 1 : 1;
			                        Beep(700, 200);
			                        break;
			                    case 13:  // Enter key
			                        switch (selectedOption) {
                                	case 1:
                            			status++;
				                        selectedOption = 1;
				                        system("cls");
				                        while (status == 4) {
				                        	gotoxy(8, 1);
										    warnateks(PINK);
										    printf(" ��       ��   ����   ������  ��      ��     ��       ��  �������  ��      ��  ��   ��  \n");
											printf("         ���     ���  ��  ��    ��    ����    ��     ���     ���  ��       ���     ��  ��   ��  \n");
											printf("         �� �� �� ��  ��  ��    ��    �� ���  ��     �� �� �� ��  �����    �� ���  ��  ��   ��  \n");
											warnateks(RED);
											printf("         ��  ���  ��  ������    ��    ��  ��� ��     ��  ���  ��  ��       ��  ��� ��  ��   ��  \n");
											printf("         ��       ��  ��  ��    ��    ��    ����     ��       ��  ��       ��    ����  ��   ��  \n");
											printf("         ��       ��  ��  ��  ������  ��      ��     ��       ��  �������  ��      ��   �����   \n \n\n\n");

				                        	warnateks(YELLOW);
				                            gotoxy(40, 9); printf("%c Pilih bentuk yang ingin dihitung volume:\n", ' ');
				                            warnateks(WHITE);
				                            gotoxy(40, 10); printf("%c  Kubus\n", (selectedOption == 1) ? '>' : ' ');
				                            gotoxy(40, 11); printf("%c  Balok\n", (selectedOption == 2) ? '>' : ' ');
				                            gotoxy(40, 12); printf("%c  Limas Persegi\n", (selectedOption == 3) ? '>' : ' ');
				                            gotoxy(40, 12); printf("%c  Prisma Segitiga\n", (selectedOption == 4) ? '>' : ' ');
				                            gotoxy(40, 13); printf("%c  Bola\n", (selectedOption == 5) ? '>' : ' ');
				                            gotoxy(40, 14); printf("%c  Tabung\n", (selectedOption == 6) ? '>' : ' ');	
			    							key = getch();
			                                switch (key) {
			                                case 72:  // Up arrow key
						                        selectedOption = (selectedOption > 1) ? selectedOption - 1 : 8;
						                        Beep(700, 200);
						                        break;
						                    case 80:  // Down arrow key
						                        selectedOption = (selectedOption < 8) ? selectedOption + 1 : 1;
						                        Beep(700, 200);
						                        break;
						                    case 13:  // Enter key
						                        switch (selectedOption) {
					                            case 1:
					                                system("cls");
					                                sisi = getSisiDariPengguna();
					                                hitungDanTampilkanVolume(sisi, 0, 0, "kubus");
					                                break;
					                            case 2:
					                                system("cls");
					                                panjang = getPanjangDariPengguna();
					                                lebar = getLebarDariPengguna();
					                                tinggi = getTinggiDariPengguna();
					                                hitungDanTampilkanVolume(panjang, lebar, tinggi, "balok");
					                                break;
					                            case 3:
					                                system("cls");
					                                float sisiAlas = getSisiDariPengguna();
					                                tinggi = getTinggiDariPengguna();
					                                hitungDanTampilkanVolume(sisiAlas, tinggi, 0, "limasPersegi");
					                                break;
					                            case 4:
					                                system("cls");
					                                alas = getSisiDariPengguna();
					                                tinggi = getTinggiDariPengguna();
					                                panjang = getPanjangDariPengguna();
					                                hitungDanTampilkanVolume(alas, tinggi, panjang, "prismaSegitiga");
					                                break;
					                            case 5:
					                                system("cls");
					                                float jariJari = getJariJariDariPengguna();
					                                hitungDanTampilkanVolume(jariJari, 0, 0, "bola");
					                                break;
					                            case 6:
					                                system("cls");
					                                jariJari = getJariJariDariPengguna();
					                                tinggi = getTinggiDariPengguna();
					                                hitungDanTampilkanVolume(jariJari, tinggi, 0, "tabung");
					                                break;
					                		}	
                                		printf("\nTekan backspace untuk kembali ke menu.");
            						while (getch() != 8);
									system("cls"); // Wait for backspace key (ASCII 8)
            						break;
                                	}
                                	}
                                	case 2:
                            			status++;
				                        selectedOption = 1;
				                        system("cls");
				                        while (status == 4) {
				                        	gotoxy(8, 1);
										    warnateks(PINK);
										    printf(" ��       ��   ����   ������  ��      ��     ��       ��  �������  ��      ��  ��   ��  \n");
											printf("         ���     ���  ��  ��    ��    ����    ��     ���     ���  ��       ���     ��  ��   ��  \n");
											printf("         �� �� �� ��  ��  ��    ��    �� ���  ��     �� �� �� ��  �����    �� ���  ��  ��   ��  \n");
											warnateks(RED);
											printf("         ��  ���  ��  ������    ��    ��  ��� ��     ��  ���  ��  ��       ��  ��� ��  ��   ��  \n");
											printf("         ��       ��  ��  ��    ��    ��    ����     ��       ��  ��       ��    ����  ��   ��  \n");
											printf("         ��       ��  ��  ��  ������  ��      ��     ��       ��  �������  ��      ��   �����   \n \n\n\n");

				                        	warnateks(YELLOW);
				                            gotoxy(40, 9); printf("%c Pilih bentuk yang ingin dihitung luas permukaannya:\n", ' ');
				                            warnateks(WHITE);
				                            gotoxy(40, 10); printf("%c  Kubus\n", (selectedOption == 1) ? '>' : ' ');
				                            gotoxy(40, 11); printf("%c  Balok\n", (selectedOption == 2) ? '>' : ' ');
				                            gotoxy(40, 12); printf("%c  Limas Persegi\n", (selectedOption == 3) ? '>' : ' ');
				                            gotoxy(40, 12); printf("%c  Prisma Segitiga\n", (selectedOption == 4) ? '>' : ' ');
				                            gotoxy(40, 13); printf("%c  Bola\n", (selectedOption == 5) ? '>' : ' ');
				                            gotoxy(40, 14); printf("%c  Tabung\n", (selectedOption == 6) ? '>' : ' ');	
			    							key = getch();
			                                switch (key) {
			                                case 72:  // Up arrow key
						                        selectedOption = (selectedOption > 1) ? selectedOption - 1 : 6;
						                        Beep(700, 200);
						                        break;
						                    case 80:  // Down arrow key
						                        selectedOption = (selectedOption < 6) ? selectedOption + 1 : 1;
						                        Beep(700, 200);
						                        break;
						                    case 13:  // Enter key
						                        switch (selectedOption) {
					                            case 1:
					                                system("cls");
					                                sisi = getSisiDariPengguna();
					                                hitungDanTampilkanLuasPermukaan(sisi, 0, 0, "kubus");
					                                break;
					                            case 2:
					                                system("cls");
					                                panjang = getPanjangDariPengguna();
					                                lebar = getLebarDariPengguna();
					                                tinggi = getTinggiDariPengguna();
					                                hitungDanTampilkanLuasPermukaan(panjang, lebar, tinggi, "balok");
					                                break;
					                            case 3:
					                                system("cls");
					                                float sisiAlas = getSisiDariPengguna();
					                                tinggi = getTinggiDariPengguna();
					                                hitungDanTampilkanLuasPermukaan(sisiAlas, tinggi, 0, "limasPersegi");
					                                break;
					                            case 4:
					                                system("cls");
					                                alas = getSisiDariPengguna();
					                                tinggi = getTinggiDariPengguna();
					                                panjang = getPanjangDariPengguna();
					                                hitungDanTampilkanLuasPermukaan(alas, tinggi, panjang, "prismaSegitiga");
					                                break;
					                            case 5:
					                                system("cls");
					                                float jariJari = getJariJariDariPengguna();
					                                hitungDanTampilkanLuasPermukaan(jariJari, 0, 0, "bola");
					                                break;
					                            case 6:
					                                system("cls");
					                                jariJari = getJariJariDariPengguna();
					                                tinggi = getTinggiDariPengguna();
					                                hitungDanTampilkanLuasPermukaan(jariJari, tinggi, 0, "tabung");
					                                break;
					                		}	
                                		printf("\nTekan backspace untuk kembali ke menu.");
            						while (getch() != 8);
									system("cls"); // Wait for backspace key (ASCII 8)
            						break;
                                	}
                                	}
								}
                            break;
                        }
                        }
                        case 3:
                            system("cls");
                            printf("coba 3");
                            break;
                        case 4:
                            return 0; // mengakhiri program dengan nilai kembali yang benar
                        }
                        break; // Keluar dari switch (selectedOption)
                    default:
                        break;
                    }
                }
                break; // Keluar dari switch (selectedOption)
            case 3:
                system("cls");
                printf("coba 3");
                break;
            case 4:
                system("cls");
                printf("coba 4");
                break;
            case 5:
                return 0; // mengakhiri program dengan nilai kembali yang benar
            }
            printf("\nTekan backspace untuk kembali ke menu history.");
            while (getch() != 8); // Wait for backspace key (ASCII 8)
            break;
        default:
            break;
        }
    }
    return 0;

}



//	int nomor;	
//	do {
//		system("cls");
//		tampilan();
//		puts("\n\t\t\tMain Menu\n ");
//		puts("\t\t\t1. Kalkulator");
//		puts("\t\t\t2. About");
//		puts("\t\t\t3. History");
//		puts("\t\t\t4. Exit");
//		printf("Masukkan pilihan sesuai nomor : ");
//		scanf("%d", &nomor);
//		switch(nomor) {	
//		    case 1 :
//		    	Menu();		    	
//				break;
//			case 2 : 
//				system("cls");
//				tampilan();
//				showAbout();
//				break;
//			case 3 :
//				system("cls");
//				showHistory();
//				break;
//			case 4 :
//				system("cls");
//				tampilan();
//				puts("\n\t\t\tTerima kasih telah menggunakan program kalkulator ini :)\n\n\t\t\t\t\t\t@2023");
//				return 0;
//				break;
//			default :
//				puts("\nNomor yang Anda masukkan tidak valid!");
//				getchar();
//				getchar();
//				break;
//		}
//	} while (nomor != 4);
	


