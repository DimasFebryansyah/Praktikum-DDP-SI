#include <iostream>
#include <string>
using namespace std;

bool cariNama(string nama, int n, string arr[])
{
    if (n == 0)
    {
        return false;
    }
    if (arr[n - 1] == nama)
    {
        return true;
    }
    return cariNama(nama, n - 1, arr);
}

int main()
{
    string arr[] = {"Dimas", "Safii", "Rara", "Meila", "Titan"};
    int angka[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << n << endl;
    cout << sizeof(arr);

    string nama = "Dimas";
    if (cariNama(nama, n, arr) == true)
        cout << "Nama " << nama << "ditemukan" << endl;
    else
        cout << "Nama " << nama << "tidak ditemukan";
}