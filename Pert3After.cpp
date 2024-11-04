#include <iostream>
#include <string>
using namespace std;
/*int main()
    {
        struct mahasiswa
        {
            string nama;
            int nim;
            char kelas;
        };
        mahasiswa mahasiswaupn;
        cout << "Masukkan Nama : ";
        cin >> mahasiswaupn.nama;
        cout << "Masukkan NIM : ";
        cin >> mahasiswaupn.nim;
        cout << "Masukkan kelas : ";
        cin >> mahasiswaupn.kelas;

        cout << "Nama Mahasiswa : " << mahasiswaupn.nama << endl;
        cout << "NIM Mahasiswa : " << mahasiswaupn.nim << endl;
        cout << "Kelas Mahasiswa : " << mahasiswaupn.kelas << endl;

        return 0;
    }
    */
/*struct orang
{
    string nama;
    int umur;
    float tb;
};

int main()
{
    orang manusia;

    manusia.nama = "Dimas";
    manusia.umur = 19;
    manusia.tb = 171.2;

    cout << "Nama : " << manusia.nama << endl;
    cout << "Umur : " << manusia.umur << endl;
    cout << "Tinggi Badan : " << manusia.tb << endl;
}
*/
struct Alamat
{
    string jalan;
    string kota;
    int kodePos;
};

struct Mahasiswa
{
    string nama;
    int usia;
    string jurusan;
    Alamat alamat;
};

int main()
{
    const int jumlahMahasiswa = 3;
    Mahasiswa mahasiswa[kumlahMahasiswa];

    for (int i = o; i < jumlahMahasiswa; i++)
    {
        cout << "Masukkan data mahasiswa ke-" << (i + 1) << ";" << endl;

        cout << "Masukkan Nama : ";
        cin >> mahasiswa.nama;
        cout << "Masukkan Usia : ";
        cin >> mahasiswa.usia;
        cout << "Masukkan Jurusan : ";
        cin >> mahasiswa.jurusan;
        cout << "Masukkan Alamat : ";
        cout << "Nama Jalan : " cin >> mahasiswa.alamat.jalan;
        cout << ", ";
        cin >> mahasiswa.alamat.kota;
        cout << ", ";
        cin >> mahasiswa.alamat.kodePos;
        cout << endl;

        cout << mahasiswa.nama << endl;
        cout << mahasiswa.usia << endl;
        cout << mahasiswa.jurusan << endl;
        cout << mahasiswa.alamat.jalan << ", " << mahasiswa.alamat.kota << ", " << mahasiswa.alamat.kodePos << endl;
    }
}