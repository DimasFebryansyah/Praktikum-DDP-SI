#include <iostream>

using namespace std;

int tambah(int a, int b)
{
    return a + b;
}
int kali(int a, int b)
{
    return a * b;
}
int bagi(int a, int b)
{
    return a / b;
}
void pertambahan()
{
    int angka1, angka2;
    int hasil;
    cout << "Selamat datang di pertambahan" << endl;
    cout << "Masukkan Angka pertama : ";
    cin >> angka1;
    cout << "Masukkan Angka kedua : ";
    cin >> angka2;
    cout << "Hasil Penjumlahan : ";
    hasil = tambah(angka1, angka2);
    cout << "" << hasil;
};
void perkalian()
{
    int angka1, angka2;
    int hasil;
    cout << "Selamat datang di perkalian" << endl;
    cout << "Masukkan Angka pertama : ";
    cin >> angka1;
    cout << "Masukkan Angka kedua : ";
    cin >> angka2;
    cout << "Hasil Perkalian : ";
    hasil = kali(angka1, angka2);
    cout << "" << hasil;
};
void pembagian()
{
    int angka1, angka2;
    int hasil;
    cout << "Selamat datang di pembagian" << endl;
    cout << "Masukkan Angka pertama : ";
    cin >> angka1;
    cout << "Masukkan Angka kedua : ";
    cin >> angka2;
    cout << "Hasil Pembagian : ";
    hasil = bagi(angka1, angka2);
    cout << "" << hasil;
};
int main()
{
    int pilih;
    cout << "Selamat Datang" << endl;
    cout << "1. Tambah" << endl;
    cout << "2. Kali" << endl;
    cout << "3. Bagi" << endl;
    cout << "Masukkan pilihan: ";
    cin >> pilih;
    switch (pilih)
    {
    case 1 /* constant-expression */:
        pertambahan();
        break;

    case 2:
        perkalian();
        break;

    case 3:
        pembagian();
    }
}