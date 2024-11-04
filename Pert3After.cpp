#include <iostream>
using namespace std;

/*
int main()
{
    struct mahasiswa{
        string nama;
        int nim;
        char kelas;
        };
mahasiswa mahasiswaupn;
cout << "Masukkan Nama : ";
cin >> mahasiswaupn.nama;
cout << "Masukkan NIM : ";
cin >> mahasiswaupn.nim;
cout << "Masukkan Kelas : ";
cin >> mahasiswaupn.kelas;


cout << "Nama Mahasiswa : " << mahasiswaupn.nama << endl;
cout << "NIM Mahasiswa : " << mahasiswaupn.nim << endl;
cout << "Kelas Mahasiswa : " << mahasiswaupn.kelas << endl;

    return 0;
}
*/

/*
struct orang {
    string nama;
    int umur;
    float tb;
};

int main() {
    orang manusia;

    manusia.nama = "Rafi";
    manusia.umur = 19;
    manusia.tb = 177;

    cout << "Nama: " << manusia.nama << endl;
    cout << "Umur: " << manusia.umur << " tahun" << endl;
    cout << "Tinggi Badan: " << manusia.tb << " cm" << endl;

    return 0;
}
*/

struct alamat
{
    string jalan;
    string kota;
    int kodePos;
};

struct mahasiswa
{
    string nama;
    int nim;
    string jurusan;
    alamat alamat;
};

/*
int main() {
    mahasiswa mahasiswa;

    cout << "Masukkan Nama : ";
    cin >> mahasiswa.nama;
    cout << "Masukkan NIM : ";
    cin >> mahasiswa.nim;
    cout << "Masukkan Jurusan : ";
    cin >> mahasiswa.jurusan;
    cout << "Masukkan Alamat : ";
    cin >> mahasiswa.alamat.jalan;
    cout << "Masukkan Kota : ";
    cin >> mahasiswa.alamat.kota;
    cout << "Masukkan Kode Pos : ";
    cin >> mahasiswa.alamat.kode_pos;
    cout << endl;

    cout << "Nama Mahasiswa : " << mahasiswa.nama << endl;
    cout << "NIM Mahasiswa : " << mahasiswa.nim << endl;
    cout << "Jurusan Mahasiswa : " << mahasiswa.jurusan << endl;
    cout << "Alamat Mahasiswa : " << mahasiswa.alamat.jalan << ", " << mahasiswa.alamat.kota << ", " << mahasiswa.alamat.kode_pos << endl;

    return 0;
}
*/

int main()
{
    const int jumlahMahasiswa = 3;
    mahasiswa mahasiswa[jumlahMahasiswa];

    for (int i = 0; i < jumlahMahasiswa; i++)
    {
        cout << "Data Mahasiswa ke-" << i + 1 << ":" << endl;
        cout << "Masukkan Nama : ";
        cin >> mahasiswa[i].nama;
        cout << "Masukkan NIM : ";
        cin >> mahasiswa[i].nim;
        cout << "Masukkan Jurusan : ";
        cin >> mahasiswa[i].jurusan;
        cout << "Masukkan Jalan : ";
        cin.ignore();
        getline(cin, mahasiswa[i].alamat.jalan);
        cout << "Masukkan Kota : ";
        getline(cin, mahasiswa[i].alamat.kota);
        cout << "Masukkan Kode Pos : ";
        cin << mahasiswa[i].alamat.kodePos;

        cout << endl;

        cout << "Data Mahasiswa : " << endl;
        for (int i = 0; i < jumlahMahasiswa; i++)
        {
            cout << "Nama Mahasiswa : " << mahasiswa[i].nama << endl;
            cout << "NIM Mahasiswa : " << mahasiswa[i].nim << endl;
            cout << "Jurusan Mahasiswa : " << mahasiswa[i].jurusan << endl;
            cout << "Alamat Mahasiswa : " << mahasiswa[i].alamat.jalan << ", " << mahasiswa[i].alamat.kota << ", " << mahasiswa[i].alamat.kodePos << endl;
            cout << endl;
        }
    }
}