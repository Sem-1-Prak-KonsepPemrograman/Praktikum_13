#include <stdio.h>
#include <stdlib.h>

// Praktikum 13, No. 2
int triangular(int n);
int triangular_hasil(int n);

int main()
{
    // Informasi awal tentang praktikum
    printf("-------------------- Praktikum 13 --------------------\n\n");
    printf("Program ini menghitung dan menampilkan pola angka triangular serta hasil triangular dari jumlah tertentu.\n");
    printf("-----------------------------------------------------\n");
    printf("-----------------------------------------------------\n\n");

    // -------------------- Percobaan 2 --------------------
    printf("Percobaan 2\n");
    printf("Fungsi: Program ini menghitung pola triangular dan hasil penjumlahan bilangan triangular berdasarkan input pengguna.\n");

    // Deklarasi variabel
    int n;

    // Meminta pengguna memasukkan jumlah pola triangular
    printf("Jumlah triangular: ");
    scanf("%d", &n);

    // Memanggil fungsi untuk menampilkan pola triangular
    triangular(n);

    // Menampilkan garis pemisah
    printf("-----------------------------------------------------\n");

    // Memanggil fungsi untuk menghitung dan menampilkan hasil triangular
    triangular_hasil(n);

    return 0;
}

// Fungsi triangular
// Fungsi ini digunakan untuk mencetak pola bilangan triangular berdasarkan input n.
int triangular(int n)
{
    // Loop untuk baris pola triangular
    for (int i = 0; i <= n; i++) {
        // Loop untuk mencetak angka "1" sebanyak indeks baris
        for (int j = 0; j < i; j++) {
            printf("%d ", 1); // Mencetak angka "1"
        }
        printf("\n"); // Ganti baris setelah mencetak satu pola
    }
    return 0;
}

// Fungsi triangular_hasil
// Fungsi ini digunakan untuk menghitung dan mencetak hasil penjumlahan bilangan triangular hingga n.
int triangular_hasil(int n)
{
    // Deklarasi variabel untuk menyimpan jumlah triangular
    int jumlah = 0;

    // Loop untuk menghitung penjumlahan bilangan triangular
    for (int i = 0; i < n; i++) {
        jumlah += i + 1; // Menambahkan angka (i+1) ke variabel jumlah
    }

    // Menampilkan hasil penjumlahan triangular
    printf("Hasil triangular = %d\n", jumlah);

    return 0;
}
