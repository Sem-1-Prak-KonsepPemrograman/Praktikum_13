#include <stdio.h>
#include <stdlib.h>

// Praktikum 13, No. 3
// Program ini bertujuan untuk menghitung kuadrat dari bilangan yang dimasukkan oleh pengguna.

float kuadrat(float x);

int main()
{
    // Informasi awal tentang praktikum
    printf("-------------------- Praktikum 13 --------------------\n\n");
    printf("Program ini menerima input bilangan dari pengguna dan menghitung hasil kuadratnya.\n");
    printf("-----------------------------------------------------\n");
    printf("-----------------------------------------------------\n\n");

    // -------------------- Percobaan 3 --------------------
    printf("Percobaan 3\n");

    // Deklarasi variabel
    float x, hasil;

    // Meminta input bilangan dari pengguna
    printf("Masukkan bilangan untuk dikuadratkan: ");
    scanf("%f", &x);

    // Memanggil fungsi kuadrat untuk menghitung kuadrat bilangan
    hasil = kuadrat(x);

    // Menampilkan hasil kuadrat dari bilangan yang dimasukkan
    printf("Hasil kuadrat dari bilangan tersebut adalah: %.0f\n", hasil);

    return 0;
}

// Fungsi kuadrat
// Fungsi ini menghitung kuadrat dari bilangan yang diberikan sebagai parameter.
// Parameter:
// - x: bilangan float yang akan dikuadratkan
// Return:
// - Hasil kuadrat dari bilangan x
float kuadrat(float x)
{
    return (x * x); // Mengembalikan hasil kuadrat dari x
}
