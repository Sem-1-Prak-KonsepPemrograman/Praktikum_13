#include <stdio.h>
#include <stdlib.h>

// Praktikum 13, No. 4
// Program ini bertujuan untuk menghitung nilai Cn dan Sn berdasarkan rumus rekursif
// dengan n sebagai input dari pengguna.

int hitungC(int n);
int hitungS(int n);

int main()
{
    // Informasi awal tentang praktikum
    printf("-------------------- Praktikum 13 --------------------\n\n");
    printf("Program ini menghitung nilai Cn dan Sn berdasarkan masukan bilangan n.\n");
    printf("-----------------------------------------------------\n");
    printf("-----------------------------------------------------\n\n");

    // -------------------- Percobaan 4 --------------------
    printf("Percobaan 4\n");

    // Deklarasi variabel
    int n;

    // Meminta input bilangan dari pengguna
    printf("Masukkan bilangan: ");
    scanf("%d", &n);

    // Garis pemisah untuk memperjelas keluaran
    printf("-----------------------------------------------------\n");

    // Memanggil fungsi untuk menghitung nilai Cn
    hitungC(n);

    // Memanggil fungsi untuk menghitung nilai Sn
    hitungS(n);

    return 0;
}

// Fungsi hitungC
// Fungsi ini menghitung nilai Cn berdasarkan rumus rekursif Cn = 2Cn-1 + 1.
// Parameter:
// - n: bilangan integer yang digunakan untuk perhitungan
// Output:
// - Menampilkan hasil perhitungan Cn
int hitungC(int n)
{
    int C = 0; // Inisialisasi nilai awal C
    for (int i = 0; i <= n; i++) {
        C = 2 * C + 1; // Rumus rekursif: Cn = 2Cn-1 + 1
    }
    // Menampilkan hasil perhitungan Cn
    printf("Cn = 2Cn-1 + 1 dari n = %d adalah %d\n", n, C);
}

// Fungsi hitungS
// Fungsi ini menghitung nilai Sn berdasarkan rumus rekursif Sn = Sn-1 + n - 1.
// Parameter:
// - n: bilangan integer yang digunakan untuk perhitungan
// Output:
// - Menampilkan hasil perhitungan Sn
int hitungS(int n)
{
    int S = 0; // Inisialisasi nilai awal S
    for (int i = 1; i <= n; i++) {
        S = S + i - 1; // Rumus rekursif: Sn = Sn-1 + n - 1
    }
    // Menampilkan hasil perhitungan Sn
    printf("Sn = Sn-1 + n - 1 dari n = %d adalah %d\n", n, S);
}
