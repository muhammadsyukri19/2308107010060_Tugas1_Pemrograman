#include <stdio.h>

int main()
{
   int tahun;

    //meminta input tahun
    printf("Masukkan Tahun Kabisat yang Ingin Kamu Ketahui: ");
    scanf("%d", &tahun);

    //mengatur inputan user agar terdiri 4 angka dan tidak boleh huruf
    while (tahun > 10000 || tahun <= 1000 ){ 
        printf("Inputan Harus Terdiri Dari 4 Angka\n");
        printf("Masukkan Kembali Tahun Kabisat yang Ingin Kamu Ketahui: ");
        scanf("%d", &tahun);
        while(getchar() !='\n') {}
    }
    
    //menampilkan hasil tahun kabisat
    if ((tahun %4 == 0 && tahun %100 != 0) || tahun %400 == 0 ){ 
        printf("%d Adalah Tahun Kabisat!\n", tahun); 
    }
    else {
        printf("%d Bukan Tahun Kabisat!\n", tahun);
        printf("Ayo Coba Lagi!\n");
    }
        
    return 0;

}