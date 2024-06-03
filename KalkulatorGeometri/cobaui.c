#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<conio.h>
#include<windows.h>
#include<time.h>
#include<mmsystem.h>
#include "cobaui.h"

#define BLACK           0
#define DARK_BLUE       1
#define GREEN           2
#define TURQUOISE       3
#define DARK_RED        4
#define PURPLE          5
#define FOREST_GREEN    6
#define LIGHT_GRAY      7
#define GRAY            8
#define BLUE            9
#define LIGHT_GREEN    10
#define LIGHT_BLUE     11
#define RED            12
#define PINK           13
#define YELLOW         14
#define WHITE          15
#define ORANGE         16
#define STDALERT      140
#define STDHEADER     143
#define STDBACKGROUND 159

void warnateks(int warna) //modul yang berfungsi untuk memberi warna ke karakter
{ 
	HANDLE hConsole; 
	hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole, warna);
}

void gotoxy(int x, int y) //modul untuk memfungsikan fungsi gotoxy
{ 
	HANDLE hConsoleOutput;  
	COORD dwCursorPosition;  
	dwCursorPosition.X = x;  
	dwCursorPosition.Y = y;  
	hConsoleOutput = GetStdHandle(STD_OUTPUT_HANDLE);  
	SetConsoleCursorPosition(hConsoleOutput,dwCursorPosition);   
}

// Fungsi untuk memainkan suara ketika menginput
void playInputSound() {
    Beep(600, 300); // Frekuensi: 800 Hz, Durasi: 200 ms
}

void playMelody() {
    Beep(523, 500);  // Do (C)
    Beep(587, 500);  // Re (D)
    Beep(659, 500);  // Mi (E)
    Beep(698, 500);  // Fa (F)
    Beep(784, 500);  // Sol (G)
    Beep(880, 500);  // La (A)
    Beep(988, 500);  // Si (B)
}

void judul(){
	warnateks(YELLOW);
	gotoxy(8,1); 
	printf(" лл  лл   лллл   лл      лл  лл  лл   лл  лл       лллл   лллллллл   ллллл   ллллл   \n");
	printf("         лл лл   лл  лл  лл      лл лл   лл   лл  лл      лл  лл     лл     лл   лл  лл  лл  \n");
	warnateks(LIGHT_BLUE);       
	printf("         ллл     лл  лл  лл      ллл     лл   лл  лл      лл  лл     лл     лл   лл  лл  лл  \n"); 
	printf("         ллл     лллллл  лл      ллл     лл   лл  лл      лллллл     лл     лл   лл  лллл    \n");
	warnateks(TURQUOISE);
	printf("         лл лл   лл  лл  лл      лл лл   лл   лл  лл      лл  лл     лл     лл   лл  лл  лл   \n");
	printf("         лл  лл  лл  лл  лллллл  лл  лл   ллллл   лллллл  лл  лл     лл      ллллл   лл  лл  \n \n\n\n\n\n");
}

void loadingMenu() {
    gotoxy(53, 23);
    warnateks(WHITE); printf("Loading "); Sleep(1000);
    printf(". "); Sleep(1000);
    printf(". "); Sleep(1000);
    printf(". "); Sleep(1000);
}

void Backspace() {
    int key;
    do {
        key = getch();
    } while (key != 8); // 8 adalah kode ASCII untuk backspace
}

void displayHistoryMenu(int selectedOption) {
    system("cls");
    judul();
	gotoxy(40, 9); warnateks(BLUE); printf("%c Kalkulator Umum\n", (selectedOption == 1) ? '>' : ' ');
    gotoxy(40, 10); warnateks(PURPLE); printf("%c Kalkulator Geometri\n", (selectedOption == 2) ? '>' : ' ');
    gotoxy(40, 11); warnateks(YELLOW); printf("%c Konversi\n", (selectedOption == 3) ? '>' : ' ');
    gotoxy(40, 12); warnateks(DARK_RED); printf("%c Exit\n", (selectedOption == 4) ? '>' : ' ');
    
}

void GeometriMenu(int selectedOption) {
    system("cls");
    MainMenu();
    gotoxy(40, 9); warnateks(BLUE); printf("%c Bangun Datar\n", (selectedOption == 1) ? '>' : ' ');
    gotoxy(40, 10); warnateks(PURPLE); printf("%c Bangun Ruang\n", (selectedOption == 2) ? '>' : ' ');
    gotoxy(40, 11); warnateks(DARK_RED); printf("%c Exit\n", (selectedOption == 3) ? '>' : ' ');

}

void MainMenu() {
    gotoxy(8, 1);
    warnateks(PINK);
    printf(" лл       лл   лллл   лллллл  лл      лл     лл       лл  ллллллл  лл      лл  лл   лл  \n");
	printf("         ллл     ллл  лл  лл    лл    лллл    лл     ллл     ллл  лл       ллл     лл  лл   лл  \n");
	printf("         лл лл лл лл  лл  лл    лл    лл ллл  лл     лл лл лл лл  ллллл    лл ллл  лл  лл   лл  \n");
	warnateks(RED);
	printf("         лл  ллл  лл  лллллл    лл    лл  ллл лл     лл  ллл  лл  лл       лл  ллл лл  лл   лл  \n");
	printf("         лл       лл  лл  лл    лл    лл    лллл     лл       лл  лл       лл    лллл  лл   лл  \n");
	printf("         лл       лл  лл  лл  лллллл  лл      лл     лл       лл  ллллллл  лл      лл   ллллл   \n \n\n\n\n\n");

}

void persegi() {
	warnateks(RED); 
    printf("              ______________        \n");
    printf("             |              |        \n");        
    printf("             |              |        \n");
    printf("             |              |        \n");
    printf("             |              |        \n");
    printf("             |              |        \n");
    printf("             |              |        \n");
    printf("             |______________|        \n \n\n\n");
    warnateks(WHITE); 
}

void panjangpersegipanjang() {
    warnateks(RED); printf("              _________________________        \n");
    warnateks(WHITE); printf("             |                         |        \n");
    printf("             |                         |        \n");
    printf("             |                         |        \n");
    printf("             |                         |        \n");
    printf("             |                         |        \n");
    printf("             |                         |        \n");
    printf("             |_________________________|        \n \n\n\n");
}

void lebarpersegipanjang() {
    warnateks(WHITE);
	printf("              _________________________        \n");
    printf("             |                         ");
	warnateks(RED); printf("|        \n");
    warnateks(WHITE); printf("             |                         ");
	warnateks(RED); printf("|        \n");
    warnateks(WHITE); printf("             |                         ");
	warnateks(RED); printf("|        \n");
    warnateks(WHITE); printf("             |                         ");
	warnateks(RED); printf("|        \n");
    warnateks(WHITE); printf("             |                         ");
	warnateks(RED); printf("|        \n");
    warnateks(WHITE); printf("             |                         ");
	warnateks(RED); printf("|        \n");
    warnateks(WHITE); printf("             |_________________________");
	warnateks(RED); printf("|        \n \n\n\n");
	warnateks(WHITE);
}



void lingkaran() {
    warnateks(WHITE);
    printf("                *****        \n");
    printf("            ***       ***    \n");
    printf("          **             **  \n");
    printf("         **               ** \n");
    printf("        **                 **\n");
    printf("        **         ");
	warnateks(RED); printf("*********");
	warnateks(WHITE);printf("*\n");
    printf("        **                 **\n");
    printf("         **               ** \n");
    printf("          **             **  \n");
    printf("            ***       ***    \n");
    printf("                *****        \n \n\n\n");
}

void panjangbalok() {
	warnateks(WHITE);
    printf("              +----------------+      \n");
    printf("             /                /|      \n");
    printf("            /                / |      \n");
    printf("           +----------------+  +      \n");
    printf("           |                |  /       \n");
    printf("           |                | /        \n");
    printf("           |                |/         \n");
    warnateks(RED); printf("           +----------------+          \n");
    warnateks(WHITE);
}

void lebarbalok() {
	warnateks(WHITE); 
	printf("              +----------------+      \n");
    printf("             /                /|      \n");
    printf("            /                / |      \n");
    printf("           +----------------+  +      \n");
    printf("           |                |");
	warnateks(RED); printf("  /       \n");
    warnateks(WHITE); printf("           |                |");
	warnateks(RED); printf(" /        \n");
    warnateks(WHITE); printf("           |                |");
	warnateks(RED); printf("/         \n");
    warnateks(WHITE); printf("           +----------------+          \n");
    warnateks(WHITE);
}

void tinggibalok() {
	warnateks(WHITE);
    printf("              +----------------+      \n");
    printf("             /                /|      \n");
    printf("            /                / |      \n");
    printf("           +----------------+  +      \n");
    printf("           |                ");
    warnateks(RED); printf("|");
	warnateks(WHITE); printf("  /       \n");
    warnateks(WHITE);printf("           |                ");
	warnateks(RED); printf("|");
	warnateks(WHITE); printf(" /        \n");
    printf("           |                ");
	warnateks(RED); printf("|");
	warnateks(WHITE); printf("/         \n");
    printf("           +----------------+          \n");
    warnateks(WHITE);
}

void kubus() {
	warnateks(WHITE);
    printf("              +");
	warnateks(RED); printf("--------");
	warnateks(WHITE); printf("+      \n");
    warnateks(RED);printf("             /        /|      \n");
    printf("            /        / |      \n");
    warnateks(WHITE); printf("           +");
	warnateks(RED);printf("--------");
	warnateks(WHITE); printf("+  +      \n");
    warnateks(RED); printf("           |        |  /       \n");
    printf("           |        | /        \n");
    printf("           |        |/         \n");
    warnateks(WHITE); printf("           +");
	warnateks(RED); printf("--------");
	warnateks(WHITE); printf("+          \n");
	warnateks(WHITE);
}

void sisisejajartrapesium() {
	warnateks(WHITE);
    warnateks(RED); printf("           ______________          \n");
    warnateks(WHITE); printf("          /              \\        \n");
    printf("         /                \\       \n");
    printf("        /                  \\      \n");
    warnateks(RED); printf("       /____________________\\     \n");
    warnateks(WHITE);
}


void alasjajargenjang() {
    warnateks(WHITE);
    printf("          _______________         \n");
    printf("         /              /         \n");
    printf("        /              /          \n");
    printf("       /              /           \n");
    printf("      /              /            \n");
    printf("     /");
	warnateks(RED); printf("______________");
	warnateks(WHITE); printf("/             \n \n\n\n");
	warnateks(WHITE);
}

void diagonal1belahketupat() {
    warnateks(WHITE);
    printf("     /|\\      \n");
    printf("    / | \\     \n");
    printf("   /  |  \\    \n");
    printf("  /   |   \\   \n");
    printf(" /");
	warnateks(RED); printf("____");
	warnateks(WHITE); printf("|");
	warnateks(RED); printf("____");
	warnateks(WHITE); printf("\\  \n");
    printf(" \\    |    /  \n");
    printf("  \\   |   /   \n");
    printf("   \\  |  /    \n");
    printf("    \\ | /     \n");
    printf("     \\|/      \n");
    warnateks(WHITE);
}

void sisibelahketupat() {
    warnateks(WHITE);
    printf("     /|\\      \n");
    printf("    / | \\     \n");
    printf("   /  |  \\    \n");
    printf("  /   |   \\   \n");
    printf(" /         \\  \n");
    printf(" \\    |    /  \n");
    printf("  \\   |   /   \n");
    printf("   \\  |  /    \n");
    printf("    \\ | /     \n");
    printf("     \\|/      \n");
    warnateks(WHITE);
}

void diagonal2belahketupat() {
    warnateks(WHITE);
    printf("     /");
    warnateks(RED); printf("|");
	warnateks(WHITE); printf("\\      \n");
    printf("    / ");
    warnateks(RED); printf("|");
	warnateks(WHITE); printf(" \\     \n");
    printf("   /  ");
    warnateks(RED); printf("|");
	warnateks(WHITE); printf("  \\    \n");
    printf("  /   ");
    warnateks(RED); printf("|");
	warnateks(WHITE); printf("   \\   \n");
    printf(" /____");
    warnateks(RED); printf("|");
	warnateks(WHITE); printf("____\\  \n");
    printf(" \\    ");
    warnateks(RED); printf("|");
	warnateks(WHITE); printf("    /  \n");
    printf("  \\   ");
    warnateks(RED); printf("|");
	warnateks(WHITE); printf("   /   \n");
    printf("   \\  ");
    warnateks(RED); printf("|");
	warnateks(WHITE); printf("  /    \n");
    printf("    \\ ");
    warnateks(RED); printf("|");
	warnateks(WHITE); printf(" /     \n");
    printf("     \\");
    warnateks(RED); printf("|");
	warnateks(WHITE); printf("/      \n");
	warnateks(WHITE);
}

void tinggijajargenjang() {
    warnateks(WHITE);
    printf("          _______________         \n");
    printf("         /");
    warnateks(RED); printf("|");
	warnateks(WHITE); printf("             /         \n");
    printf("        / ");
    warnateks(RED); printf("|");
	warnateks(WHITE); printf("            /          \n");
    printf("       /  ");
    warnateks(RED); printf("|");
	warnateks(WHITE); printf("           /           \n");
    printf("      /   ");
    warnateks(RED); printf("|");
	warnateks(WHITE); printf("          /            \n");
    printf("     /____");
    warnateks(RED); printf("|");
	warnateks(WHITE); printf("_________/             \n \n\n\n");
	warnateks(WHITE);
}

void tinggitrapesium() {
	warnateks(WHITE);
    printf("           ______________          \n");
    printf("          /            ");
	warnateks(RED); printf("|");
	warnateks(WHITE); printf(" \\        \n");
    printf("         /             ");
	warnateks(RED); printf("|");
	warnateks(WHITE); printf("  \\       \n");
    printf("        /              ");
	warnateks(RED); printf("|");
	warnateks(WHITE); printf("   \\      \n");
    printf("       /_______________");
    warnateks(RED); printf("|");
	warnateks(WHITE); printf("____\\     \n");
}

void alassegitiga() {
	warnateks(WHITE);
    printf("            /\\              \n");
    printf("           /  \\             \n");
    printf("          /    \\            \n");
    printf("         /      \\           \n");
    printf("        /        \\          \n");
    printf("       /          \\         \n");
    printf("      /            \\        \n");
    printf("     /              \\       \n");
    printf("    /                \\      \n");
    printf("   /");
	warnateks(RED); printf("__________________");
	warnateks(WHITE); printf("\\     \n \n\n\n");
}

void sisisegitiga() {
	warnateks(RED);
    printf("            /\\              \n");
    printf("           /  \\             \n");
    printf("          /    \\            \n");
    printf("         /      \\           \n");
    printf("        /        \\          \n");
    printf("       /          \\         \n");
    printf("      /            \\        \n");
    printf("     /              \\       \n");
    printf("    /                \\      \n");
    printf("   /__________________\\     \n");
    warnateks(WHITE);
}

void tinggisegitiga() {
	warnateks(WHITE);
    printf("\n\n            /");
    warnateks(RED); printf("|");
    warnateks(WHITE);
	printf("\\             \n");
    printf("           / ");
    warnateks(RED); printf("|");
    warnateks(WHITE);
	printf(" \\             \n");
    printf("          /  ");
    warnateks(RED); printf("|");
    warnateks(WHITE);
	printf("  \\            \n");
    printf("         /   ");
    warnateks(RED); printf("|");
    warnateks(WHITE);
	printf("   \\           \n");
    printf("        /    ");
    warnateks(RED); printf("|");
    warnateks(WHITE);
	printf("    \\          \n");
    printf("       /     ");
    warnateks(RED); printf("|");
    warnateks(WHITE);
	printf("     \\         \n");
    printf("      /      ");
    warnateks(RED); printf("|");
    warnateks(WHITE);
	printf("      \\        \n");
    printf("     /       ");
    warnateks(RED); printf("|");
    warnateks(WHITE);
	printf("       \\       \n");
    printf("    /        ");
    warnateks(RED); printf("|");
    warnateks(WHITE);
	printf("        \\      \n");
    printf("   /_________");
    warnateks(RED); printf("|");
    warnateks(WHITE);
	printf("_________\\     \n \n\n\n");
}

void d1layang() {
	warnateks(WHITE);
    printf("      /\\      \n");
    printf("     /  \\     \n");
    printf("    /    \\    \n");
    printf("   /");
	warnateks(RED); printf("______");
	warnateks(WHITE);printf("\\   \n \N");
}

void d2layang() {
	warnateks(RED);
	printf("  ____________ \n");
	warnateks(WHITE);printf(" \\          / \n");
    printf("  \\        /  \n");
    printf("   \\      /   \n");
    printf("    \\    /    \n");
    printf("     \\  /     \n");
    printf("      \\/      \n\n");
    warnateks(WHITE);
}

void Menu() {
    int key;
    int selectedOption = 1;


    while (1) {
        displayHistoryMenu(selectedOption);

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
                system("cls");
				printf("coba 1");
                break;
            case 2:
                system("cls");
                printf("coba 2");
                break;
            case 3:
                system("cls");
                printf("coba 3");
                break;
            case 4:
                system("cls");
                printf("coba 4");
                break;
            case 5:
                return;
            }
            printf("\nTekan backspace untuk kembali ke menu history.");
            while (getch() != 8); // Wait for backspace key (ASCII 8)
            break;
        default:
            break;
        }
    }
}

//int main () {
//	judul();
//	//loadingMenu();
//	Menu();
//}
