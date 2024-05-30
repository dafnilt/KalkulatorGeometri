#ifndef COBAUI_H
#define COBAUI_H

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
void MainMenu();
void warnateks(int warna);
void gotoxy(int x, int y);
void playInputSound();
void playMelody();
void judul();
void loadingMenu();
void Backspace();
void displayHistoryMenu(int selectedOption);
void Menu();
void GeometriMenu(int selectedOption);


void persegi();
void panjangpersegipanjang();
void lebarpersegipanjang();
void lingkaran();
void panjangbalok();
void lebarbalok();
void tinggibalok();
void kubus();
void sisisejajartrapesium();

void tinggitrapesium();
void alassegitiga();
void tinggisegitiga();
void alasjajargenjang();
void tinggijajargenjang();
void diagonal1belahketupat();
void diagonal2belahketupat();
void d1layang();
void d2layang();
void sisisegitiga();

#endif
