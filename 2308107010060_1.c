#include <stdio.h>

int main() 
{
    char opsi;
    int angka_desimal, angka_biner = 0, angka_oktal = 0, sisa;
    int i = 1;

    printf("Pilih Opsi yang Ingin Dicari: \n");
    printf("a. Konversi Bilangan Desimal ke Biner\n");
    printf("b. Konversi Bilangan Biner ke Desimal\n");
    printf("c. Konversi Bilangan Desimal ke oktal\n");
    printf("d. Konversi Bilangan oktal ke Desimal\n");
    printf("Masukkan Salah Satu Opsi Pilihan Anda: ");
    scanf("%s", &opsi);

    switch (opsi) {
        case 'a':
            //input bilangan desimal dari user
            printf("Masukkan bilangan desimal: ");
            scanf("%d", &angka_desimal);

            //konversi desimal ke biner
            while (angka_desimal > 0) {
                sisa = angka_desimal % 2;
                angka_desimal /= 2;
                angka_biner += sisa * i; 
                i *= 10;
            }
            
            //output hasil bilangan biner yang telah dikonversi
            printf("Bilangan Biner yang Telah Dikonversi adalah: %d\n", angka_biner);
            break;
               
        case 'b':
            //input bilangan biner dari user
            printf("Masukkan Bilangan Biner: ");
            scanf("%d", &angka_biner);

            //konversi biner ke desimal
            angka_desimal = 0;
            sisa = 1;
            while (angka_biner > 0) {
                sisa = angka_biner % 10;
                angka_biner /= 10;
                angka_desimal += sisa * i;
                i *= 2;
            }
            
            //output hasil bilangan desimal yang telah dikonversi
            printf("Bilangan Desimal yang Telah Dikonversi adalah: %d\n", angka_desimal);
            break;
        
        case 'c':
            //input bilangan desimal dari user
            printf("Masukkan bilangan desimal: ");
            scanf("%d", &angka_desimal);

            //konversi desimal ke oktal
            sisa = 1;
            while (angka_desimal > 0) {
                sisa = angka_desimal % 8;
                angka_desimal /= 8;
                angka_oktal += sisa * i;
                i *= 10;
            }

            //output hasil bilangan oktal yang telah dikonversi
            printf("Bilangan Oktal yang Telah Dikonversi adalah: %d\n", angka_oktal);
            break;
        
        case 'd':
            //input bilangan oktal dari user
            printf("Masukkan bilangan oktal: ");
            scanf("%d", &angka_oktal);

            //konversi oktal ke desimal
            angka_desimal = 0;
            sisa = 1;
            while(angka_oktal > 0){
                sisa = angka_oktal % 10;
                angka_oktal /= 10;
                angka_desimal += sisa * i;
                i *= 8;
            }

            //output hasil bilangan desimal yang telah dikonversi
            printf("Bilangan Desimal yang Telah Dikonversi adalah: %d\n", angka_desimal);
            break;

    //menolak permintaan user jika memasukkan input yang tidak sesuai opsi
    default:
        printf("Pilihan tidak valid.\n");
        break;
    }

    return 0;
}