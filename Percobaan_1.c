#include <stdio.h>
#include <stdlib.h>

// Praktikum 13
int main()
{
    // Menampilkan informasi awal praktikum
    printf("-------------------- Praktikum 13 --------------------\n\n");
    printf("Program ini akan menampilkan menu sederhana sebanyak yang diminta pengguna.\n");
    printf("-----------------------------------------------------\n");
    printf("-----------------------------------------------------\n\n");

    // -------------------- Percobaan 1 --------------------
    printf("Percobaan 1\n");
    printf("Fungsi: Program meminta input jumlah pengulangan dan menampilkan menu sederhana sebanyak input tersebut.\n\n");

    // Deklarasi variabel untuk jumlah pengulangan
    int n_1;

    // Meminta pengguna memasukkan jumlah pengulangan
    printf("Seberapa banyak ingin menampilkan 'Pilihan Menu'?: ");
    scanf("%d", &n_1);

    // Loop untuk memanggil fungsi menu_1() sebanyak n_1 kali
    for (int i = 0; i < n_1; i++) {
        menu_1(); // Memanggil fungsi untuk menampilkan "Pilihan Menu"
    }

    return 0;
}

// Fungsi menu_1
// Fungsi ini digunakan untuk menampilkan teks "Pilihan Menu".
void menu_1() {
    puts("Pilihan Menu"); // Menampilkan teks "Pilihan Menu" di layar
}
