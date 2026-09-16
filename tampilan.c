#include "library.c"
#include "validasi.c"
#define sys system("color xy")


//////////////////////////////////////////////////
///                 BISMILLAH                  ///
///                 MY PROJEK                  ///
///             JUDUL = SKULROOM               ///
///                                            ///
///                                            ///
///           Velly Rahmiatul Fidima           ///
///          D3 Manajemen Informatika          ///
///              PUB A24 STRING                ///
///                                            ///
///                                            ///
//////////////////////////////////////////////////

///////////////////PROTOTYPE////////////////////
void text1();
void text2();
void text3();
void setcolor();
void book();
void hp();
void loginadm();
void adbotex();
void admin();
void gotoxy(int x, int y);
void slidetransition();
void tampadm();
void materi();
void sosio();
void edit();
void profiladm();
void about();
void tampil();
void tambah();
void update();
void hapus();



///////////////////VARIABEL GLOBAL//////////////
int pilih = 0;
int posisi = 0;
int tekan;
int background =0;
int text = 0;
int usia;


//////kode///////////////
// 176  = ░
// 177  = ▒
// 178  = ▓
// 179  = |
// 186  = ║
// 187  = ╗
// 188  = ╝
// 220  = ▄
// 221  = ▌
// 222  = ▐
// 223  = ▀



///        buat warna text dan background    ///
void warna_text(int new_color)
{
    text = new_color;
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), new_color + background * 16);

}

void warna_background(int new_color)
{
    background = new_color;
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),text + new_color * 16);
}


void setcolor(int text,int background){
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),background*16+text);
}


void bungkam(int x, int y, int panjang,int lebar)
{
    // setcolor(14,3);
    for(int i = 0; i < panjang ; i++)
    {
        gotoxy(x,y+i);
        for(int j = 0 ; j < lebar ; j++)
        {
            if(i==0||j==0|| i == panjang - 1 || j == lebar - 1)
            {
                printf("%c",219);
            }else{
                printf(" ");
            }
        }
    }
}

void slidetransition(){
    setcolor(1,1);
    for(int x = 0; x < 137; x++){
        for(int y = 0; y < 36; y++){
            gotoxy(x, y);
            printf("%c", 219); // █
        }
        Sleep(15); // makin kecil makin ngebut
    }
}

void load()
{
    for (int a = 1; a <= 50; a++)
    {
        gotoxy(40 + a, 26);
        printf("%c",219);
        Sleep(45);
        gotoxy(58, 27);
        printf("Loading...%d%%", a * 2);
    }
    Sleep(2000);
}

void load2()
{
    for (int a = 1; a <= 50; a++)
    {
        gotoxy(15 + a, 22);
        printf("%c",219);
        Sleep(45);
        gotoxy(34, 23);
        printf("Loading...%d%%", a * 2);
    }
    Sleep(2000);
}


///       untuk atur posisi     ///
void gotoxy(int x, int y)
{
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

void text1(){
    system ("color 73");
    setcolor(15,3);
    int a=219,b=220,c=223;
    bungkam(10,3,27,113);
    gotoxy(45,5);
    printf(" %c%c   %c%c  %c%c%c%c%c%c  %c%c      %c%c      %c%c%c%c%c%c\n",b,a,b,a,b,a,a,a,a,b,b,a,b,a,b,a,a,a,a,b);
    gotoxy(45,6);
    printf(" %c%c   %c%c  %c%c      %c%c      %c%c     %c%c    %c%c\n",a,a,a,a,a,a,a,a,a,a,a,a,a,a);
    gotoxy(45,7);
    printf(" %c%c%c%c%c%c%c  %c%c%c%c%c   %c%c      %c%c     %c%c    %c%c\n",a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a);
    gotoxy(45,8);
    printf(" %c%c   %c%c  %c%c      %c%c      %c%c     %c%c    %c%c\n",a,a,a,a,a,a,a,a,a,a,a,a,a);
    gotoxy(45,9);
    printf(" %c%c   %c%c  %c%c%c%c%c%c  %c%c%c%c%c%c  %c%c%c%c%c%c  %c%c%c%c%c%c\n",c,a,c,a,c,a,a,a,a,c,c,a,a,a,a,c,c,a,a,a,a,c,c,a,a,a,a,c);

    text2();
    text3(); 
    load();
    slidetransition();
    system("cls");
}
void text2(){
    int a=219,b=220,c=223;
    gotoxy(24,11); 
    printf(" %c%c    %c%c %c%c%c%c%c%c %c%c    %c%c     %c%c%c%c%c  %c%c%c%c%c  %c%c    %c%c %c%c%c%c%c%c      %c%c%c%c%c%c%c%c  %c%c%c%c%c\n",b,a,a,b,b,a,a,a,a,b,b,a,b,a,b,a,a,a,b,b,a,a,a,b,b,a,a,b,b,a,a,a,a,b,b,a,a,a,a,a,a,b,b,a,a,a,b);
    gotoxy(24,12);
    printf(" %c%c    %c%c %c%c     %c%c    %c%c    %c%c     %c%c   %c%c %c%c%c  %c%c%c %c%c             %c%c    %c%c   %c%c\n",a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a); 
    gotoxy(24,13);
    printf(" %c%c %c%c %c%c %c%c%c%c%c  %c%c    %c%c    %c%c     %c%c   %c%c %c%c %c%c %c%c %c%c%c%c%c          %c%c    %c%c   %c%c\n",a,a,b,b,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,c,c,a,a,a,a,a,a,a,a,a,a,a,a,a); 
    gotoxy(24,14);
    printf(" %c%c%c  %c%c%c %c%c     %c%c    %c%c    %c%c     %c%c   %c%c %c%c    %c%c %c%c             %c%c    %c%c   %c%c\n",a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a);
    gotoxy(24,15);
    printf(" %c%c    %c%c %c%c%c%c%c%c %c%c%c%c%c %c%c%c%c%c  %c%c%c%c%c  %c%c%c%c%c  %c%c    %c%c %c%c%c%c%c%c         %c%c     %c%c%c%c%c\n",c,a,a,c,c,a,a,a,a,c,c,a,a,a,c,c,a,a,a,c,c,a,a,a,c,c,a,a,a,c,c,a,a,c,c,a,a,a,a,c,a,a,c,a,a,a,c);


}

void text3(){
    int a = 219,b=220,c=223;
    gotoxy(30,19);
    printf("  %c%c%c%c%c  %c%c   %c%c  %c%c   %c%c  %c%c      %c%c%c%c%c%c     %c%c%c%c      %c%c%c%c   %c%c    %c%c  \n",a,a,a,a,b,b,a,a,b,b,a,a,b,b,a,b,a,a,a,a,b,b,a,a,b,b,a,a,b,b,a,a,b);
    gotoxy(30,20);
    printf(" %c%c      %c%c %c%c    %c%c   %c%c  %c%c      %c%c   %c%c   %c%c  %c%c    %c%c  %c%c  %c%c%c  %c%c%c\n",a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a);
    gotoxy(30,21);
    printf("  %c%c%c%c   %c%c%c%c     %c%c   %c%c  %c%c      %c%c%c%c%c    %c%c    %c%c  %c%c    %c%c %c%c %c%c %c%c\n",a,a,a,b,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,c,c,a,a,a);
    gotoxy(30,22);
    printf("     %c%c  %c%c %c%c    %c%c   %c%c  %c%c      %c%c  %c%c    %c%c  %c%c    %c%c  %c%c  %c%c    %c%c\n",a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a);
    gotoxy(30,23);
    printf(" %c%c%c%c%c   %c%c   %c%c   %c%c%c%c%c   %c%c%c%c%c   %c%c   %c%c    %c%c%c%c      %c%c%c%c   %c%c    %c%c\n",b,a,a,a,a,c,a,a,c,c,a,a,a,c,c,a,a,a,c,c,a,c,a,c,a,a,c,c,a,a,c,c,a,a,c);
}

void book()
{
    system ("color 73");
    int a = 004;
    setcolor(15,3);
    bungkam(7,2,32,121);
   gotoxy(20,7);
   printf("   __                               __\n");
   gotoxy(20,8);
   printf("  |__|            __               |__|\n"); 
   gotoxy(20,9);
   printf("  |__|         __|__|     ___      |##|\n");
   gotoxy(20,10);
   printf("  |##|       /__/|##|____|___|_____|##|\n");
   gotoxy(20,11);
   printf("  |##|      /__/ |##|____|###|_____|##|\n");
   gotoxy(20,12);
   printf("  |##|     /$$/  |##|****|###|_____|##|\n");
   gotoxy(20,13);
   printf("  |##|    /$$/   |##|****|###|=====|##|\n");
   gotoxy(20,14);
   printf("  |##|   /$$/    |##|****|###|=====|##|\n");
   gotoxy(20,15);
   printf("  |##|  /$$/     |##|____|###|=====|__|\n");
   gotoxy(20,16);
   printf("  |__| /__/      |__|    |___|=====|##|\n");
   gotoxy(20,17);
   printf(" _|__|/__/_______|__|____|___|_____|__|_\n");
   gotoxy(20,18);
   printf("|_______________________________________|\n");
   gotoxy(23,20);
   printf("%c_________________%c_________________%c\n", a, a,a);
   gotoxy(21,23);
   printf("    Lines of code were born at night,    \n");
   gotoxy(21,24);
   printf("    Silent screens, a restless mind.     \n");
   gotoxy(21,25);
   printf("    This application took its shape,     \n");
   gotoxy(21,26);
   printf("    From logic, patience, and time.      \n");
   gotoxy(23,28);
   printf("%c_________________%c_________________%c\n", a, a,a);

   hp();
   adbotex();

}

void hp(){
    gotoxy(72,4);
    printf("         .::::::::::::::::::::::::::::::::..\n");
    gotoxy(67,5);
    printf("        ..+#%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%#=..\n");
    gotoxy(67,6);
    printf("       .:**%=:.....*@@@@@@@@@@@@@@@@@@@@@+.....:=%#*:.\n");
    gotoxy(67,7);
    printf("       .###.       .*@@@@@@@@@@@@@@@@@@%+.       :###.\n");
    gotoxy(67,8);
    printf("       .###                                      .###:.\n");
    gotoxy(67,9);
    printf("       .###                                      .###..\n");
    gotoxy(67,10);
    printf("       .###                                      .###:\n");
    gotoxy(67,11);
    printf("      ..###                                      .###:\n");
    gotoxy(67,12);
    printf("       .###                                      .###\n");
    gotoxy(67,13);
    printf("       .###                                      .###.\n");
    gotoxy(67,14);
    printf("       .###                                      .###.\n");
    gotoxy(67,15);
    printf("       .###                                      .###:\n");
    gotoxy(67,16);
    printf("       .###                                      .###:\n");
    gotoxy(67,17);
    printf("       .###                                      .###:\n");
    gotoxy(67,18);
    printf("       .###                                      .###:\n");
    gotoxy(67,19);
    printf("       .###                                      .###:\n");
    gotoxy(67,10);
    printf("       .###                                      .###:\n");
    gotoxy(67,20);
    printf("       .###                                      .###:\n");
    gotoxy(67,21);
    printf("       .###                                      .###:\n");
    gotoxy(67,22);
    printf("       .###                                      .###:\n");
    gotoxy(67,23);
    printf("       .###                                      .###:\n");
    gotoxy(67,24);
    printf("       .###                                      .###:\n");
    gotoxy(67,25);
    printf("       .###                                      .###:\n");
    gotoxy(67,26);
    printf("       .###                                      .###:\n");
    gotoxy(67,27);
    printf("       .###                                      .###:\n");
    gotoxy(67,28);
    printf("       .###                                      .###:\n");
    gotoxy(67,29);
    printf("       .###                                      .###:\n");
    gotoxy(67,30);
    printf("       .:**%*-$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$-*%#*..\n");
    gotoxy(72,31);
    printf("        ..-*#%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%#**-.  \n");
                                                        
}

void adbotex(){
    bungkam(88,9,5,20);
    gotoxy(95,11);
    printf(" ADMIN ");
    bungkam(88,16,5,20);
    gotoxy(95,18);
    printf(" USER ");
    bungkam(88,23,5,20);
    gotoxy(95,25);
    printf(" ABOUT ");

    while ((tekan = getch()) != 13) {

    if (tekan == 72) {          // ↑
        if (posisi > 1) posisi--;
    }
    else if (tekan == 80) {     // ↓
        if (posisi < 3) posisi++;
    }

    setcolor(15,3);
    bungkam(88,9,5,20);  gotoxy(95,11); printf(" ADMIN ");
    bungkam(88,16,5,20); gotoxy(95,18); printf(" USER ");
    bungkam(88,23,5,20); gotoxy(95,25); printf(" ABOUT  ");

    setcolor(8,14);
    if (posisi == 1) {
        bungkam(88,9,5,20); gotoxy(95,11); printf(" ADMIN ");
    }
    else if (posisi == 2) {
        bungkam(88,16,5,20); gotoxy(95,18); printf(" USER ");
    }
    else if (posisi == 3) {
        bungkam(88,23,5,20); gotoxy(95,25); printf(" ABOUT  ");
    }
    
}  
pilih = posisi;  
if(pilih == 1){
    slidetransition();

    system ("cls");
    loginadm();
}else if(pilih == 2){
    slidetransition();
    system("cls");
    tampuser();
    
}else if(pilih == 3){
    slidetransition();
    system("cls");
    about();
}

}

void admin(){
// 176  = ░
// 177  = ▒
// 178  = ▓
// 179  = |
// 186  = ║
// 187  = ╗
// 188  = ╝
// 220  = ▄
// 221  = ▌
// 222  = ▐
// 223  = ▀
    char username[30], password[30];
    int a=219,b=220,c=223,d=186,e=187,f=188,g=188,h=205;
    system("color 73");
    setcolor(15,3);
    bungkam(7,2,32,121);
    hp();
    gotoxy(20,6);
    printf("%c%c%c     %c%c%c%c%c   %c%c%c%c%c   %c%c%c  %c%c%c   %c%c%c",b,a,e,a,a,a,a,e,a,a,a,a,a,a,a,e,a,a,a,a,a,e);
    gotoxy(20,7);
    printf("%c%c%c    %c%c%c %c%c%c %c%c%c      %c%c%c  %c%c%c%c  %c%c%c",a,a,d,a,a,d,a,a,d,a,a,d,a,a,d,a,a,a,a,a,a,d);
    gotoxy(20,8);
    printf("%c%c%c    %c%c%c %c%c%c %c%c%c%c%c%c%c%c %c%c%c  %c%c%c%c%c %c%c%c",a,a,d,a,a,d,a,a,d,a,a,d,a,a,a,a,e,a,a,d,a,a,d,a,a,a,a,d);
    gotoxy(20,9);
    printf("%c%c%c    %c%c%c %c%c%c %c%c%c  %c%c%c %c%c%c  %c%c%c %c%c%c%c%c",a,a,d,a,a,d,a,a,d,a,a,d,a,a,d,a,a,d,a,a,d,a,a,a,a,d);
    gotoxy(20,10);
    printf("%c%c%c%c%c%c  %c%c%c%c%c   %c%c%c%c%c%c%c %c%c%c  %c%c%c  %c%c%c%c",c,a,a,a,a,c,a,a,a,a,g,a,a,a,a,a,h,g,a,a,f,a,a,f,a,a,a,f);
}

void loginadm(){
    admin();
    char username[50], password[50];
    char tekan;

    bungkam(81,10,5,33);
    gotoxy(80,9); printf("USERNAME : ");
    bungkam(81,17,5,33);
    gotoxy(80,16); printf("PASSWORD : ");
    bungkam(81,10,5,33);
    gotoxy(83,12);
    valuser(username);
    bungkam(81,17,5,33);
    gotoxy(83,19);
    valpw(password);
    // getch();
    if (strcmp(username, "Vellyadm") == 0 &&
        strcmp(password, "141207") == 0)
    {
        gotoxy(33,20);
        printf("Login Berhasil!");
        load2();
        slidetransition();
        tampadm();
    }
    else
    {
        gotoxy(25,20);
        printf("Login Gagal! Data tidak sesuai.");
        gotoxy(22,22);
        printf("Tekan tombol apa saja untuk mengulangi...");
        getch();
        system("cls");
        loginadm();
    }

    }
    
void tampadm(){
    system("color 73");
    setcolor(7,3);
    bungkam(7,2,32,121);
    gotoxy(40,5);
    printf("      ##      ####    ###     ## ## ###     ##");
    gotoxy(40,6);
    printf("     ## ##    ##  ##  ## #  # ## ## ## ##   ##");
    gotoxy(40,7);
    printf("    #######   ##   ## ##  ##  ## ## ##  ##  ##");
    gotoxy(40,8);
    printf("   ##     ##  ##  ##  ##      ## ## ##   ## ##");
    gotoxy(40,9);
    printf("  ##       ## ####    ##      ## ## ##     ###");

        setcolor(15,3);
        bungkam(35,15,5,20);
        gotoxy(36,17);
        printf(" CLASS ");
        
        setcolor(15,3);
        bungkam(75,15,5,20);
        gotoxy(76,17);
        printf(" PROFILE ADMIN ");
        
    while(1){
        gotoxy(45,25);
        printf("Tekan ESC untuk kembali ke Adbotex");

    if(posisi == 1){
        setcolor(8,14);
        bungkam(35,15,5,20);
        gotoxy(36,17);
        printf(" CLASS ");

        setcolor(15,3);
        bungkam(75,15,5,20);
        gotoxy(76,17);
        printf(" PROFILE ADMIN ");
    }
    else{
        setcolor(15,3);
        bungkam(35,15,5,20);
        gotoxy(36,17);
        printf(" CLASS ");

        setcolor(8,14);
        bungkam(75,15,5,20);
        gotoxy(76,17);
        printf(" PROFILE ADMIN ");
    }

    tekan = getch();

    if(tekan == 27){
        // slidetransition();
        system("cls");
        book();
        return;
    }


    if(tekan == 13) break;

    if(tekan == 0 || tekan == 224){
        tekan = getch();

        if(tekan == 75 && posisi > 1) posisi--;
        else if(tekan == 77 && posisi < 2) posisi++;
    }
}
        pilih = posisi;  
        if(pilih == 1){
        slidetransition();
        system ("cls");
        materi();
        
        }else if(pilih == 2){
        slidetransition();
        system("cls");
        profiladm();
    }
}

void materi(){
    int a=219,b=220,c=223,d=186,e=187,f=188,g=188,h=205;
    system("color 73");
    setcolor(15,3);
    bungkam(7,2,32,121);
    gotoxy(15,5);
    printf("%c%c%c%c  %c%c%c%c   %c%c%c%c  %c%c%c%c%c%c%c%c  %c%c%c%c%c%c  %c%c",b,a,a,b,b,a,a,b,b,a,a,b,c,a,a,a,a,a,a,b,a,a,a,a,a,c,a,a);
    gotoxy(15,6);
    printf("%c%c %c%c%c%c %c%c  %c%c  %c%c  %c%c   %c%c  %c%c      %c%c",a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a);
    gotoxy(15,7);
    printf("%c%c  %c%c  %c%c  %c%c%c%c%c%c  %c%c%c%c%c%c%c  %c%c%c%c%c%c  %c%c",a,a,c,c,a,a,a,a,a,a,a,a,a,a,a,a,a,a,c,a,a,a,a,a,a,a,a);
    gotoxy(15,8);
    printf("%c%c      %c%c  %c%c  %c%c  %c%c       %c%c      %c%c",a,a,a,a,a,a,a,a,a,a,a,a,a,a);
    gotoxy(15,9);
    printf("%c%c      %c%c  %c%c  %c%c  %c%c       %c%c%c%c%c%c  %c%c%c%c%c%c",a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,b,a,a,a,a,a,b);

    bungkam(75,10,14,30);
    gotoxy(84,12);
    printf(" SOSIOLOGI ");

    gotoxy(76,14);
    printf("----------------------------");


    // Input
    gotoxy(76,20);
    printf("Pilih : ");

    gotoxy(84,20);
    pilih = valpilih(); 
    
    if(pilih == 1){
        slidetransition();
        system("cls");
        sosio();
    }
}
void sosio() {
    system("color 73");
    setcolor(15,3);
    bungkam(7,2,32,121);


    int pilih;
    // int x = 15;
    // int y;

    do {
        // y = 5;
        gotoxy(20,5);
        printf("=== MENU MATERI ===");
        gotoxy(20,11); 
        printf("1. Tampilkan Materi");
        gotoxy(20,12);
        printf("2. Tambah Materi");
        gotoxy(20,13);
        printf("3. Update Materi");
        gotoxy(20,14);
        printf("4. Hapus Materi");
        gotoxy(20,15);
        printf("5. Keluar");
        gotoxy(20,16);
        printf("Pilih: ");
        pilih = valpilihadmin();
        // getchar();

        if(pilih == 1){ 
            system("cls");
            tampil();
        }else if(pilih == 2){
             tambah();
        }else if(pilih == 3){
            update();
        }
        else if(pilih == 4){
             hapus();
        }

    } while(pilih != 5);

gotoxy(20,18);
printf("Tekan apa saja untuk kembali ke menu admin...");
getch();

system("cls");
tampadm();
}

void tampil() {
    system("color 73");
    setcolor(15,3);
    bungkam(7,2,32,121);

    FILE *fp;
    char teks[200];
    int x = 15;
    int y = 4;

    // system("cls");


    fp = fopen("materi.txt", "r");
    if(fp == NULL) {
        gotoxy(x,y);
        printf("File belum ada!");
        return;
    }

    while(fgets(teks, sizeof(teks), fp)) {
        gotoxy(x,y++);
        printf("%s", teks);
    }

    fclose(fp);
     gotoxy(15,y+2);
    printf("Tekan apa saja untuk kembali(kecuali tombol power)...");
    getch();
    sosio();
}

void tambah() {
    system("color 73");
    setcolor(15,3);
    bungkam(7,2,32,121);

    FILE *fp;
    char judul[100];
    char kalimat[200];
    int x = 15;
    int y = 5;

    fp = fopen("materi.txt", "a");
    if(fp == NULL){
        gotoxy(x,y);
        printf("File tidak bisa dibuka!");
        return;
    }

    gotoxy(x,y++);
    printf("Masukkan Judul Materi: ");
    valkalimatjudul(judul);           // <<< validasi judul
    fprintf(fp, "%s\n", judul);  // simpan ke file

    gotoxy(x,y++);
    printf("Masukkan 5 kalimat penjelasan:");

    for(int i=1; i<=5; i++) {
        gotoxy(x,y++);
        printf("Kalimat %d: ", i);

        valkalimat(kalimat);      // <<< validasi tiap kalimat
        fprintf(fp, "%s\n", kalimat);
    }

    fprintf(fp, "---\n");

    fclose(fp);

    gotoxy(x,y+1);
    printf("Materi berhasil ditambahkan!");

    gotoxy(20,y+2);
    printf("Tekan apa saja untuk kembali(kecuali tombol power)...");
    getch();
    sosio();
}

void update() {
    system("color 73");
    setcolor(15,3);
    bungkam(7,2,32,121);

    FILE *fp, *temp;
    char teks[200];
    char judul[100];
    char kalimat[200];
    int ketemu = 0;
    int x= 15;
    int y= 6;

    gotoxy(x,y++);
    printf("Masukkan judul yang mau diupdate: ");
    fgets(judul, sizeof(judul), stdin);

    fp = fopen("materi.txt", "r");
    temp = fopen("temp.txt", "w");

    while(fgets(teks, sizeof(teks), fp)) {
        if(strcmp(teks, judul) == 0) {
            ketemu = 1;

            fputs(judul, temp);

            gotoxy(x,y++);
            printf("Masukkan 5 kalimat baru:\n");
            for(int i=1; i<=5; i++) {
                gotoxy(x,y++);
                printf("Kalimat %d: ", i);
                valkalimat(kalimat);   /////////////validasi tiap kalimat/////////////////
                fprintf(temp, "%s\n", kalimat);
            }

            fputs("-------------------------------------------------------------------\n", temp);

            for(int i=0; i<5; i++)
                fgets(teks, sizeof(teks), fp);
        }
        else {
            fputs(teks, temp);
        }
    }

    fclose(fp);
    fclose(temp);

    remove("materi.txt");
    rename("temp.txt", "materi.txt");

    if(ketemu){
        gotoxy(x,y+1);
        printf("Materi berhasil diupdate!\n");
    }else{
        gotoxy(x,y+1);
        printf("Judul tidak ditemukan!\n");
    }
    
    gotoxy(20,y+2);
    printf("Tekan apa saja untuk kembali(kecuali tombol power)...");
    getch();
    sosio();

}

void hapus() {
    system("color 73");
    setcolor(15,3);
    bungkam(7,2,32,121);

    FILE *fp, *temp;
    char teks[200];
    char judul[100];
    int hapus = 0;
    int x= 15;
    int y= 6;


    gotoxy(x,y);
    printf("Masukkan judul yang mau dihapus: ");
    fgets(judul, sizeof(judul), stdin);

    fp = fopen("materi.txt", "r");
    temp = fopen("temp.txt", "w");

    while(fgets(teks, sizeof(teks), fp)) {
        if(strcmp(teks, judul) == 0) {
            hapus = 1;

            for(int i=0; i<5; i++)
                fgets(teks, sizeof(teks), fp);
        }
        else {
            fputs(teks, temp);
        }
    }

    fclose(fp);
    fclose(temp);

    remove("materi.txt");
    rename("temp.txt", "materi.txt");

    if(hapus){
        gotoxy(x,y+1);
        printf("Materi berhasil dihapus!\n");
    }else{
        gotoxy(x,y+1);
        printf("Judul tidak ditemukan!\n");
    }
    gotoxy(20,y+2);
    printf("Tekan apa saja untuk kembali(kecuali tombol power)...");
    getch();
    sosio();

}

void profiladm(){
    system("color 73");
    setcolor(15,3);
    bungkam(7,2,32,121);
    gotoxy(10,5);
    printf("     ___       __   ");
    gotoxy(10,6);
    printf("   //   \\    ||  \\  ||\\  /|| || ||\\  ||");
    gotoxy(10,7);
    printf("  //$$$$$\\   ||   \\ || \\/ || || || \\ ||");
    gotoxy(10,8);
    printf(" //       \\  ||   / ||    || || ||  \\||");
    gotoxy(10,9);
    printf("//         \\ ||__/  ||    || || ||   ||");

    setcolor(5,11);
    bungkam(70,10,15,40);
    FILE *fp;
    char nama[50], gender[20], alamat[100], email[100], nohp[20];
    int usia;

    fp = fopen("admin.txt", "r");

    if(fp == NULL){
        printf("Data belum ada!\n");
        return;
    }

    fscanf(fp, "%[^|]|%[^|]|%[^|]|%[^|]|%d|%[^\n]",
           nama, gender, alamat, email, &usia, nohp);

    fclose(fp);

    // printf("\n===== PROFILE ADMIN =====\n");
    gotoxy(74,12);
    printf("Nama   : %s\n", nama);
    gotoxy(74,14);
    printf("Gender : %s\n", gender);
    gotoxy(74,16);
    printf("Alamat : %s\n", alamat);
    gotoxy(74,18);
    printf("Email  : %s\n", email);
    gotoxy(74,20);
    printf("Usia   : %d\n", usia);
    gotoxy(74,22);
    printf("No HP  : %s\n", nohp);

   while(1){
    pilih = getch();
    gotoxy(70,26);
    printf("edit profile?");

    if(pilih == 'y' || pilih == 'Y'){
        system("cls");
        edit();
        break;
    }
    else if(pilih == 't' || pilih == 'T'){
        system("cls");
        tampadm();
        break;
    }
}

}
void edit(){
    system("color 73");
    setcolor(15,3);
    bungkam(7,2,32,121);

    setcolor(5,11);
    bungkam(47,10,15,40);
    FILE *fp;
    char nama[50], gender[20], alamat[100], email[100], nohp[20];
    int usia;
    

    fp = fopen("admin.txt", "w");   // w = overwrite (edit)

    if(fp == NULL){
        printf("File tidak bisa dibuka!\n");
        return;
    }

    gotoxy(51,12);
    printf("Nama     : ");
    gotoxy(62,12);
    valnama(nama);
    gotoxy(51,14);
    printf("Gender   : ");
    valgender(gender);
    gotoxy(51,16);
    printf("Alamat   : ");
    valalamat(alamat);
    gotoxy(51,18);
    printf("Email    : ");
    valemail(email);
    gotoxy(51,20);
    printf("Usia     : ");
    usia = valusia();
    // while(getchar() != '\n');
    gotoxy(51,22);
    printf("No HP    : "); 
    valhp(nohp);
 
    fprintf(fp, "%s|%s|%s|%s|%d|%s\n",
            nama, gender, alamat, email, usia, nohp);

    fclose(fp);

    getch();
    slidetransition();
    tampadm();      // kembali ke tampilan admin
    return;
    
}

void tampuser(){
    system("color 73");
    setcolor(15,3);
    bungkam(7,2,32,121);

do{
    gotoxy(20,10);
    printf("+++++++++++++++ MENU USER ++++++++++++++");
    gotoxy(20,12);
    printf("1. Lihat Materi");
    gotoxy(20,13);
    printf("2. Kembali");
    gotoxy(20,15);
    printf("PILIH :");

    pilih = valpilihuser();

    if(pilih == '1'){
        system("cls");
        userlihat();
    }
    else if(pilih == '2'){

        gotoxy(20,17);
        printf("Yakin ingin kembali?");
        gotoxy(20,18);
        printf("1. Ya");
        gotoxy(20,19);
        printf("2. Tidak");
        gotoxy(20,20);
        printf("Pilih : ");

        char konfirmasi = getch();

        if(konfirmasi == '2'){
            pilih = '0';   // batal keluar tetap di menu
            system("cls");
            system("color 73");
            setcolor(15,3);
            bungkam(7,2,32,121);

        }
        // kalau pilih 1 → langsung keluar loop
    }

    }while(pilih != '2');

    book();
}

void userlihat(){
    system("color 73");
    system("cls");
    setcolor(15,3);
    bungkam(7,2,32,121);

    FILE *fp;
    char teks[200];
    int x = 15;
    int y = 5;

    fp = fopen("materi.txt", "r");
    if(fp == NULL){
        gotoxy(x,y);
        printf("Materi belum tersedia!");
        getch();
        tampuser(); 
        return;
    }

    while(fgets(teks, sizeof(teks), fp)){
        gotoxy(x,y++);
        printf("%s", teks);
    }

    fclose(fp);

    gotoxy(20,y+2);
    printf("Tekan apa saja untuk kembali...");
    getch();

    tampuser();   // kembali ke menu user
}




void about(){
    system("color 73");
    setcolor(15,3);
    bungkam(7,2,32,121);
    gotoxy(33, 5);
    printf("  ______         _______          ______         __    __        ________ \n");
    gotoxy(33, 6);
    printf(" /      \\       /       \\        /      \\       /  |  /  |      /        |\n");
    gotoxy(33, 7);
    printf("/$$$$$$  |      $$$$$$$  |      /$$$$$$  |      $$ |  $$ |      $$$$$$$$/ \n");
    gotoxy(33, 8);
    printf("$$ |__$$ |      $$ |__$$ |      $$ |  $$ |      $$ |  $$ |         $$ |   \n");
    gotoxy(33, 9);
    printf("$$    $$ |      $$    $$<       $$ |  $$ |      $$ |  $$ |         $$ |   \n");
    gotoxy(33, 10);
    printf("$$$$$$$$ |      $$$$$$$  |      $$ |  $$ |      $$ |  $$ |         $$ |   \n");
    gotoxy(33, 11);
    printf("$$ |  $$ |      $$ |__$$ |      $$ \\__$$ |      $$ \\__$$ |         $$ |   \n");
    gotoxy(33, 12);
    printf("$$ |  $$ |      $$    $$/       $$    $$/       $$    $$/          $$ |   \n");
    gotoxy(33, 13);
    printf("$$/   $$/       $$$$$$$/         $$$$$$/         $$$$$$/           $$/    \n");

    bungkam(20,16,13,100);
    gotoxy(15,18);
    printf("               Aplikasi **Classroom** yang saya buat merupakan sistem pembelajaran sederhana                ");
    gotoxy(15,19);
    printf("                  yang membantu proses belajar menjadi lebih terstruktur dan mudah diakses.                 ");
    gotoxy(15,20);
    printf("               Pengguna harus melakukan login terlebih dahulu agar keamanan dan pengelolaan                 ");
    gotoxy(15,21);
    printf("               data tetap terjaga. Di dalam aplikasi tersedia satu mata pelajaran utama yang                ");
    gotoxy(15,22);
    printf("                 dapat dipelajari sesuai pilihan. Terdapat fitur User yang berfungsi untuk                  ");
    gotoxy(15,23);
    printf("                menampilkan materi kepada pengguna secara rapi dan terorganisir. Selain itu,                ");
    gotoxy(15,24);
    printf("                  tersedia juga fitur Profile Admin yang memuat informasi pengelola sistem.                 ");
    gotoxy(15,25);
    printf("                  Menu About turut disediakan untuk menjelaskan tujuan dan fungsi aplikasi                  ");
    gotoxy(15,26);
    printf("                                      secara singkat dan jelas.                                             ");

    gotoxy(10,31);
    printf("Tekan apa saja untuk kembali(kecuali tombol power)...");
    getch();
    system("cls");
    book();

}