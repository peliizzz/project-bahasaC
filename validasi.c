void valpw(char pass[])
{
    int i = 0;
    char ch;
    // gotoxy(82,12);    
    // printf("PASSWORD : \n");

    while ((ch = getch()) != 13)
    {
        if (ch >= '0' && ch <= '9' && i < 6)
        {
            pass[i++] = ch;
            printf("*");
        }
        else if (ch == 8 && i > 0)
        {
            i--;
            printf("\b \b");
        }
    }

    pass[i] = '\0';
}


void valemail(char email[])
{
    char ch;
    int i = 0;
    int panjang_nama = 0; 
    // gotoxy(82,18);    
    // printf("EMAIL : \n");

    while ((ch = getch()) != 13) // Enter
    {
        if (((ch >= 'a' && ch <= 'z') ||
             (ch >= 'A' && ch <= 'Z') ||
             (ch >= '0' && ch <= '9')) 
             && panjang_nama < 11)
        {
            email[i++] = ch;
            panjang_nama++;
            printf("%c", ch);
        }

        // Ketik @ (hanya boleh jika sudah isi nama)
        else if (ch == '@' && panjang_nama > 0)
        {
            email[i++] = '@';
            printf("@");
        }

        // Setelah @ tekan g → otomatis gmail.com
        else if (ch == 'g' || ch == 'G')
        {
            strcpy(&email[i], "gmail.com");
            printf("gmail.com");
            i += 9; // panjang gmail.com
            break;  // selesai langsung
        }

        // Backspace
        else if (ch == 8 && i > 0)
        {
            i--;
            printf("\b \b");

            if (panjang_nama > 0)
                panjang_nama--;
        }
    }

    email[i] = '\0';
}


void valuser(char user[])
{
    char ch;
    int i = 0;

    // gotoxy(82,12);    
    // printf("USERNAME : \n");

    while ((ch = getch()) != 13)
    {
        if (((ch >= 'A' && ch <= 'Z') ||
             (ch >= 'a' && ch <= 'z')) && i < 20)
        {
            user[i++] = ch;
            printf("%c", ch);
        }
        else if (ch == 8 && i > 0)
        {
            i--;
            printf("\b \b");
        }
    }

    user[i] = '\0';
}

char valpilih() {
    char tombol;

    while(1){
        tombol = getch();

        if(tombol == '1'){
            printf("%c", tombol);
            return 1;
        }
        else if(tombol == 8){
            printf("\b \b");
        }
    }
}
int valpilihadmin() {
    char ch;
    int pilih = 0;

    while (1) {
        ch = getch();

        if (ch >= '1' && ch <= '5' && pilih == 0) {
            pilih = ch - '0';
            printf("%c", ch);
        }
        else if (ch == 8 && pilih != 0) {
            printf("\b \b");
            pilih = 0;
        }
        else if (ch == 13 && pilih != 0) {
            return pilih;
        }
    }
}
char valpilihuser() {
    char tombol;
    char pilih = 0; 

    while(1){
        tombol = getch();

        if((tombol == '1' || tombol == '2') && pilih == 0){
            pilih = tombol;
            printf("%c", tombol);
        }

        else if(tombol == 8 && pilih != 0){
            printf("\b \b");
            pilih = 0;
        }

        else if(tombol == 13 && pilih != 0){
            return pilih;
        }
    }
}
void valnama(char nama[]){
    char s;
    int a = 0;

        while((s = getch()) != 13 && a < 22){   // ENTER dan max 22 huruf

            if((s >= 'A' && s <= 'Z')|| (s>= 'a' && s<='z') ){

                if(a == 0 || nama[a-1] == ' '){   
                    if(s >= 'A' && s <= 'Z'){
                    nama[a] = s;
                    printf("%c", s);
                    a++;
                }          // jadikan kapital
            }else{
               nama[a] = s;
                printf("%c", s);
                a++;
        }
        
        }

    // jika spasi (tidak boleh spasi di awal / spasi dobel)
    else if(s == 32 && a > 0 && nama[a-1] != ' '){
        nama[a] = s;
        printf("%c", s);
        a++;
    }

    // jika backspace
    else if(s == 8 && a > 0){
        a--;
        printf("\b \b");
    }
}

    nama[a] = '\0';
}

void valgender(char gender[]){
        char input;

        while(1){
        input = getch();

        // kalau huruf kecil, ubah manual jadi besar
        if(input == 'l')
            input = 'L';
        else if(input == 'p')
            input = 'P';

        // kalau sudah L atau P
        if(input == 'L' || input == 'P')
        {
            printf("%c", input);
            gender[0] = input;
            gender[1] = '\0';
        }

        // backspace
        else if(input == 8)
        {
            printf("\b \b");
            gender[0] = '\0';
        }

        // enter (tidak boleh kosong)
        else if(input == 13 && gender[0] != '\0')
        {
            break;
        }
    }

}

void valalamat(char alamat[]){
{
    // char alamat[100] = "";
    char input;
    int jumlah = 0;

    while (1)
    {
        input = getch();

        // ENTER (minimal 2 huruf)
        if (input == 13)
        {
            if (jumlah >= 2)
            {
                break;
            }
        }
        else if (input == 8)   // BACKSPACE
        {
            if (jumlah > 0)
            {
                printf("\b \b");
                jumlah--;
                alamat[jumlah] = '\0';
            }
        }
        else
        {
            // Cek maksimal 20 huruf
            if (jumlah < 20)
            {
                // Cek hanya huruf
                if ((input >= 'a' && input <= 'z') ||
                    (input >= 'A' && input <= 'Z'))
                {
                    printf("%c", input);
                    alamat[jumlah] = input;
                    jumlah++;
                    alamat[jumlah] = '\0';
                }
            }
        }
    }

    return strcpy(alamat, alamat);
}
}

void valhp(char nohp[]){
    char inp;
    int panjang = 0;

    while (1)
    {
        inp = getch();

        // ENTER (minimal 10 karakter)
        if (inp == 13)
        {
            if (panjang >= 10)
                break;
        }
        else if (inp == 8)   // BACKSPACE
        {
            if (panjang > 0)
            {
                printf("\b \b");
                panjang--;
                nohp[panjang] = '\0';
            }
        }
        else
        {
            if (panjang < 13)  
            {
                // Karakter pertama
                if (panjang == 0 && (inp == '0' || inp == '+'))
                {
                    printf("%c", inp);
                    nohp[panjang++] = inp;
                }
                // mulai dengan 08
                else if (panjang == 1 && nohp[0] == '0' && inp == '8')
                {
                    printf("%c", inp);
                    nohp[panjang++] = inp;
                }
                //mulai dengan +62
                else if (panjang == 1 && nohp[0] == '+' && inp == '6')
                {
                    printf("%c", inp);
                    nohp[panjang++] = inp;
                }
                else if (panjang == 2 && nohp[0] == '+' && nohp[1] == '6' && inp == '2')
                {
                    printf("%c", inp);
                    nohp[panjang++] = inp;
                }
                else if ((nohp[0] == '0' && nohp[1] == '8' && inp >= '0' && inp <= '9') ||
                         (nohp[0] == '+' && nohp[1] == '6' && nohp[2] == '2' && inp >= '0' && inp <= '9'))
                {
                    printf("%c", inp);
                    nohp[panjang++] = inp;
                }
            }
        }
    }

    nohp[panjang] = '\0';
    return nohp;
}


int valusia()
{
    char d1, d2, tekan;
    char teks[3];
    int umur;

    while (1)
    {
        d1 = getch();

        if (d1 >= '1' && d1 <= '9')
        {
            printf("%c", d1);

            d2 = getch();

            if (d2 == 8)  // backspace di digit kedua
            {
                printf("\b \b");
            }
            else if (d2 >= '0' && d2 <= '9')
            {
                printf("%c", d2);

                teks[0] = d1;
                teks[1] = d2;
                teks[2] = '\0';

                umur = atoi(teks);

                if (umur >= 10 && umur <= 99)
                {
                    // sekarang tunggu ENTER atau BACKSPACE
                    while (1)
                    {
                        tekan = getch();

                        if (tekan == 13)   // ENTER
                        {
                            return umur;
                        }
                        else if (tekan == 8)  // BACKSPACE
                        {
                            printf("\b \b\b \b"); // hapus 2 digit
                            break;  // kembali ke awal input
                        }
                    }
                }
                else
                {
                    printf("\b \b\b \b");
                }
            }
            else
            {
                printf("\b \b\b \b");
            }
        }
    }
}

void valkalimat(char kalimat[]){
    char s;
    int a = 0;

    while((s = getch()) != 13 && a < 70){   // ENTER & max 70 karakter

        // HURUF
        if((s >= 'A' && s <= 'Z') || (s >= 'a' && s <= 'z')){

            if(a == 0){  
                // huruf pertama kapital
                if(s >= 'a' && s <= 'z')
                    s -= 32;
            } 
            else {
                // selain pertama jadi kecil
                if(s >= 'A' && s <= 'Z')
                    s += 32;
            }

            kalimat[a++] = s;
            printf("%c", s);
        }

        // SPASI (tidak boleh di awal & tidak boleh dobel)
        else if(s == 32 && a > 0 && kalimat[a-1] != ' '){
            kalimat[a++] = s;
            printf("%c", s);
        }

        // TITIK atau KOMA (tidak boleh di awal & tidak boleh dobel)
        else if((s == '.' || s == ',') && a > 0 && 
                kalimat[a-1] != ' ' && 
                kalimat[a-1] != '.' && 
                kalimat[a-1] != ','){

            kalimat[a++] = s;
            printf("%c", s);
        }

        // BACKSPACE
        else if(s == 8 && a > 0){
            a--;
            printf("\b \b");
        }
    }

    kalimat[a] = '\0';
}

void valkalimatjudul(char judul[]){
    char s;
    int a = 0;

    while((s = getch()) != 13 && a < 70){   // ENTER & max 70 karakter

        // Hanya huruf KAPITAL A-Z
        if(s >= 'A' && s <= 'Z'){
            judul[a++] = s;
            printf("%c", s);
        }

        // Spasi (tidak boleh di awal & tidak boleh dobel)
        else if(s == 32 && a > 0 && judul[a-1] != ' '){
            judul[a++] = s;
            printf("%c", s);
        }

        // Backspace
        else if(s == 8 && a > 0){
            a--;
            printf("\b \b");
        }
    }

    judul[a] = '\0';
}