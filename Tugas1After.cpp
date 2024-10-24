#include <iostream>
#include <string>
using namespace std;

int main()
{
    cout << "Selamat Datang di Perusahaan Dimas" << endl;
    cout << "Silahkan login terlebih dahulu" << endl;

    string nama, nim;
    int check = 0;
    int menu;

    cout << "Masukkan Nama dan NIM" << endl;

    do
    {
        cout << "Masukkan Nama: ";
        cin >> nama;
        cout << "Masukkan NIM: ";
        cin >> nim;

        if (nama == "dimas" || nim == "222")
        {
            check = 1;
            cout << "Selamat Datang di Tempat kami\n";
            cout << "Silahkan pilih menu: \n";
            cout << "1. Permainan Tebak angka\n";
            cout << "2. exit\n";
            cout << "Pilih menu: ";
            cin >> menu;

            switch (menu)
            {
            case 1:
            {
                cout << "Selamat Datang di Permainan Tebak Angka" << endl;
                cout << "Tebak angka dari (1-10)" << endl;

                int angka_tebak;
                int angka_benar = 7;

                do
                {
                    cout << "Masukkan angka: ";
                    cin >> angka_tebak;

                    if (angka_tebak > angka_benar)
                    {
                        cout << "Angka Terlalu Besar" << endl;
                    }
                    else if (angka_tebak < angka_benar)
                    {
                        cout << "Angka Terlalu Kecil" << endl;
                    }
                    else
                    {
                        cout << "Selamat kamu benar, angkanya adalah " << angka_benar << endl;
                        break;
                    }
                } while (true);

                break;
            }

            case 2:
            {
                exit(0);
            }

            default:
            {
                cout << "Menu tidak valid" << endl;
                break;
            }
            }
        }
        else
        {
            cout << "Nama atau NIM salah, coba lagi!" << endl;
        }
    } while (check == 0);

    return 0;
}
