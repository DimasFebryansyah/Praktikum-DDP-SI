#include <iostream>
#include <string>
using namespace std;

struct Barang
{
    string nama;
    int stok;
    string tanggal;
};

int main()
{
    // Login
    string username = "dimas";
    int password = 124240145;
    string inputUsername;
    int inputPassword;

    do
    {
        cout << "Masukkan username: ";
        cin >> inputUsername;
        cout << "Masukkan password: ";
        cin >> inputPassword;

        if (inputUsername == username && inputPassword == password)
        {
            cout << "Login berhasil!" << endl;
        }
        else
        {
            cout << "Login gagal!" << endl;
        }
    } while (inputUsername != username || inputPassword != password);

    const int MAX_BARANG = 100;
    Barang daftar_barang[MAX_BARANG];
    int jumlah_barang = 0;
    int kesempatan = 3;
    int menu;

    while (kesempatan > 0)
    {
        cout << "Menu Minimarket" << endl;
        cout << "1. Input Barang dan Stok\n";
        cout << "2. Keluar dan Output\n";
        cout << "Pilih Menu: ";
        cin >> menu;
        cout << endl;

        if (menu == 1)
        {
            int jumlah_data;
            cout << "Silahkan masukkan jumlah data barang: ";
            cin >> jumlah_data;
            for (int i = 0; i < jumlah_data && jumlah_barang < MAX_BARANG; i++)
            {
                cout << "Barang ke " << (jumlah_barang + 1) << endl;
                cout << "Nama barang: ";
                cin >> daftar_barang[jumlah_barang].nama;
                cout << "Stok barang: ";
                cin >> daftar_barang[jumlah_barang].stok;
                cout << "Tanggal: ";
                cin >> daftar_barang[jumlah_barang].tanggal;
                cout << endl;
                jumlah_barang++;
            }
            int jumlah_stok = 0;
            for (int i = 0; i < jumlah_barang; i++)
            {
                jumlah_stok += daftar_barang[i].stok;
            }
            cout << "Jumlah total stok barang: " << jumlah_stok << endl;
        }
        else if (menu == 2)
        {
            cout << "Anda telah memilih untuk keluar. Berikut adalah ringkasan input barang dan stok." << endl;
            if (jumlah_barang == 0)
            {
                cout << "Tidak ada data barang yang dimasukkan." << endl;
            }
            else
            {
                int jumlah_stok = 0;
                cout << "Daftar Barang:\n";
                for (int i = 0; i < jumlah_barang; i++)
                {
                    cout << "Nama: " << daftar_barang[i].nama << ", Stok: " << daftar_barang[i].stok << ", Tanggal: " << daftar_barang[i].tanggal << endl;
                    jumlah_stok += daftar_barang[i].stok;
                }
                cout << "Jumlah total stok barang: " << jumlah_stok << endl;
            }
            break;
        }
        else
        {
            cout << "Menu tidak valid" << endl;
        }

        kesempatan--;
        if (kesempatan > 0)
        {
            cout << endl;
            cout << "Anda masih memiliki " << kesempatan << " kesempatan untuk mengakses halaman utama kembali." << endl;
        }
        else
        {
            cout << "Kesempatan habis. Program akan keluar." << endl;
        }
    }

    return 0;
}
