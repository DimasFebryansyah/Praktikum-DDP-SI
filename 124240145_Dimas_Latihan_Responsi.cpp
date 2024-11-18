#include <iostream>
#include <string>
using namespace std;

struct Penulis
{
    string nama;
};

struct Buku
{
    int id;
    string judul;
    Penulis penulis;
    int harga;
};

void tambahBuku(Buku daftarBuku[], int &jumlahBuku, int maxBuku)
{
    int jumlah_data;
    cout << "Silahkan masukkan jumlah data buku: ";
    cin >> jumlah_data;

    for (int i = 0; i < jumlah_data && jumlahBuku < maxBuku; i++)
    {
        cout << "Buku ke " << (jumlahBuku + 1) << endl;
        cout << "ID Buku: ";
        cin >> daftarBuku[jumlahBuku].id;
        cout << "Judul Buku: ";
        cin >> ws;
        getline(cin, daftarBuku[jumlahBuku].judul);
        cout << "Nama Penulis: ";
        getline(cin, daftarBuku[jumlahBuku].penulis.nama);
        cout << "Harga Buku: ";
        cin >> daftarBuku[jumlahBuku].harga;
        cout << endl;
        jumlahBuku++;
    }
}

void tampilkanDaftarBuku(Buku daftarBuku[], int jumlahBuku)
{
    cout << "ID\tJudul\tPenulis\tHarga\n";
    for (int i = 0; i < jumlahBuku; i++)
    {
        cout << daftarBuku[i].id << "\t" << daftarBuku[i].judul << "\t" << daftarBuku[i].penulis.nama << "\t" << daftarBuku[i].harga << endl;
        ;
    }
}

bool ubahDataBuku(Buku daftarBuku[], int jumlahBuku, int id)
{
    for (int i = 0; i < jumlahBuku; i++)
    {
        if (daftarBuku[i].id == id)
        {
            cout << "Masukkan judul baru: ";
            cin >> ws;
            getline(cin, daftarBuku[i].judul);
            cout << "Masukkan nama penulis baru: ";
            getline(cin, daftarBuku[i].penulis.nama);
            cout << "Masukkan harga baru: ";
            cin >> daftarBuku[i].harga;
            return true;
            cout << endl;
        }
    }
    return false;
    cout << endl;
}

bool hapusBuku(Buku daftarBuku[], int &jumlahBuku, int id)
{
    for (int i = 0; i < jumlahBuku; i++)
    {
        if (daftarBuku[i].id == id)
        {
            for (int j = i; j < jumlahBuku - 1; j++)
            {
                daftarBuku[j] = daftarBuku[j + 1];
            }
            jumlahBuku--;
            return true;
            cout << endl;
        }
    }
    return false;
    cout << endl;
}

int hitungTotalHargaPembelian(Buku daftarBuku[], int jumlahBuku, int idBukuDibeli[], int jumlahBukuDibeli, bool &diskon5, bool &diskon10)
{
    int totalHarga = 0;
    string penulisSebelumnya = "";
    int penulisCount = 0;

    for (int i = 0; i < jumlahBukuDibeli; i++)
    {
        for (int j = 0; j < jumlahBuku; j++)
        {
            if (daftarBuku[j].id == idBukuDibeli[i])
            {
                totalHarga += daftarBuku[j].harga;
                if (penulisSebelumnya == daftarBuku[j].penulis.nama)
                {
                    penulisCount++;
                }
                penulisSebelumnya = daftarBuku[j].penulis.nama;
            }
        }
    }

    if (penulisCount >= 1)
    {
        diskon5 = true;
    }

    if (diskon5)
    {
        totalHarga *= 0.95;
    }

    if (diskon10)
    {
        totalHarga *= 0.9;
    }

    return totalHarga;
}

int main()
{
    const int MAX_BUKU = 100;
    Buku daftarBuku[MAX_BUKU];
    int jumlahBuku = 0;
    int pilihan;

    do
    {
        cout << "1. Tambah Buku\n2. Tampilkan Daftar Buku\n3. Ubah Data Buku\n4. Hapus Buku\n5. Hitung Total Harga Pembelian\n6. Keluar\n";
        cout << "Pilih menu: ";
        cin >> pilihan;

        if (pilihan == 1)
        {
            tambahBuku(daftarBuku, jumlahBuku, MAX_BUKU);
        }
        else if (pilihan == 2)
        {
            tampilkanDaftarBuku(daftarBuku, jumlahBuku);
            cout << endl;
        }
        else if (pilihan == 3)
        {
            int id;
            cout << "Masukkan ID Buku yang ingin diubah: ";
            cin >> id;
            if (!ubahDataBuku(daftarBuku, jumlahBuku, id))
            {
                cout << "Buku tidak ditemukan.\n";
            }
        }
        else if (pilihan == 4)
        {
            int id;
            cout << "Masukkan ID Buku yang ingin dihapus: ";
            cin >> id;
            if (!hapusBuku(daftarBuku, jumlahBuku, id))
            {
                cout << "Buku tidak ditemukan.\n";
            }
        }
        else if (pilihan == 5)
        {
            int jumlahBukuDibeli;
            cout << "Silahkan masukkan jumlah buku yang ingin dibeli: ";
            cin >> jumlahBukuDibeli;

            int *idBukuDibeli = new int[jumlahBukuDibeli];
            for (int i = 0; i < jumlahBukuDibeli; i++)
            {
                cout << "Masukkan ID Buku yang ingin dibeli: ";
                cin >> idBukuDibeli[i];
            }

            bool diskon5 = false, diskon10 = false;
            string kodeVoucher;
            cout << "Masukkan kode voucher (jika ada): ";
            cin >> ws;
            getline(cin, kodeVoucher);
            if (kodeVoucher == "JPYUM")
            {
                diskon10 = true;
            }

            int totalHarga = hitungTotalHargaPembelian(daftarBuku, jumlahBuku, idBukuDibeli, jumlahBukuDibeli, diskon5, diskon10);
            cout << "Total Harga setelah diskon: " << totalHarga << endl;

            delete[] idBukuDibeli;
        }

    } while (pilihan != 6);

    return 0;
}
