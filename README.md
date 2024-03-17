## Program 1, Konversi Bilangan Ke Dalam Berbagai Bentuk
  Program ini berisi tentang mengonversi bilangan ke dalam berbagai bentuk, seperti menjadi bentuk desimal, biner dan octal.

## Deskripsi
  Program ini berfungsi untuk memudahkan penggunanya dalam mengubah bilangan yang diinput ke dalam berbagai bentuk sesuai dengan keinginan penggunanya. Untuk menjalankan program ini
penggunanya hanya perlu memilih salah satu bentuk yang ingin di konversi, baik dari desimal, biner, maupun octal. Program ini membuat mudah penggunanya karena memanfatkan kerja komputer
sehingga tidak perlu lama dalam menjalankannya, program ini saya jalankan dengan menggunakan bahasa program C.

## Program 
Berikut adalah langkah-langkah dalam membuat program ini:
1. #include <stdio.h> ini berfungsi untuk memanggil library bahasa program yang saya gunakan yaitu bahasa pemrograman C.
2. int main() merupakan tipe data yang saya gunakan dalam program ini dan masuk ke dalam badan program.
3. Mendeklarasikan variabel yang ingin dibuat, yaitu menggunakan tipe data char dan int.
4. Memasukkan perintah dan pilihan ke dalam kode program untuk di pilih oleh pengguna menggunakan printf.
5. scanf berfungsi untuk menerima inputan dari penggunanya.
6. Menggunakan konsep switch-case dalam membuat program, dikarenakan terdapat banyak pilihan case yang dipilih.
7. Case 'a' digunakan untuk inputan penggunanya yang memilih konversi desimal menjadi biner.
8. Case 'b' digunakan untuk inputan penggunanya yang memilih konversi biner menjadi desimal.
9. Case 'c' digunakan untuk inputan penggunanya yang memilih konversi desimal ke octal.
10. Case 'd' digunakan untuk inputan penggunanya yang memilih konversi octal ke desimal.
11. Menggunakan kode while untuk melakukan perulangan.
12. Menggunakan operator modulo yang berfungsi untuk mendapatkan hasil bagi dari bilangan.
13. Bilangan biner merupakan bilangan berbasis 2, octal berbasis 8, dan desimal berbasis 10.
14. Pada setiap case yang ingin diubah ke bentuk yang tuju, maka dimodulo dengan basisnya.
15. Setiap case yang telah di perbarui, dibagi dengan nilai basis nya kembali.
16. Program while akan berhenti jika bilangan desimal yang telah diproses tersisa atau sama dengan 0.

## Penggunaan
  Untuk mengeksekusi program yang telah dibuat, program tersebut yang telah dibuat pada text editor di compile terlebih dahulu,
compilenya bisa dilakukan dengan gcc 2308107010060_1.c -o 2308107010060_1. Untuk mengeksekusi dapat dilakukan dengan ./2308107010060_1.

## Program 2, Mengetahui Tahun Kabisat
  Program ini berisi tentang kode yang digunakan untuk mengetahui tahun yang diinput oleh pengguna apakah tahun kabisat atau tidak.

## Deskripsi
  program ini mempermudah pengguna untuk mengetahui tahun yang diinput apakah termasuk ke dalam tahun kabisat. Tahun kabisat sendiri merupakan tahun yang habis dibagi 4.
Seperti halnya tahun ini, 2024 merupakan tahun kabisat. Tujuan dari program ini adalah pengguna hanya perlu meng input tahun yang ingin diketahui apakah termasuk kabisat.

## Program
1. #include <stdio.h> merupakan library yang digunakan untuk memanggil bahasa pemrograman C.
2. Int main() adalah tipe data yang digunakan untuk mengeksekusi data yang telah di deklarasikan dimana termasuk ke dalam badan program.
3. Mendeklarasikan tipe data yang dibuat, yaitu menggunakan tipe data int untuk data yang memnuat bilangan bulat untuk menginput tahun.
4. Meminta pengguna untuk menginput tahun ynag  ingin di ketahui kabisat nya.
5. Inputan dari penerima harus terdiri dari 4 angka, jika terdiri dari <4 atau >4 angka dan terdapat huruf, maka pengguna diminta untuk menginput data tahun kembali.
6. Pengunaan while berfungsi untuk perulangan yang membatasi input data yang diterima dan while pada program juga berfungsi untuk menolak inputan huruf atau non digit.
7. Setelah inputan terpenuhi dan while berhenti, program akan langsung mengeksekusi if yang digunakan untuk mengecek tahun kabisat atau tidak.
8. if digunakan untuk inputan pengguna yang habis dibagi 4, sehingga termasuk ke dalam tahun kabisat.
9. else digunakan untuk inputan pengguna yang tidak habis dibagi 4 sesdhingga termasuk ke dalam tahun bukan kabisat.

## Penggunaan
  Untuk mengeksekusi program yang telah dibuat, program tersebut harus di compile terlebih dahulu agar bahasa C tersebut dapat diterjemahkan oleh bahasa komputer.
Compile dapat dilakukan dengan cara gcc 2308107010060_2.c -o 2308107010060_2. Kemudian di eksekusi dengan ./2308107010060_2.

## Penulis
  Program ini dibuat oleh Muhammad Syukri, dengan NPM 2308107010060.
  
