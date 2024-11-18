#include <iostream>
using namespace std;

// Fungsi rekursif untuk memindahkan cakram
void hanoi(int n, char from_peg, char to_peg, char aux_peg)
{
    if (n == 1)
    {
        // Pindahkan cakram terkecil dari tiang asal ke tiang tujuan
        cout << "Pindahkan cakram 1 dari " << from_peg << " ke " << to_peg << endl;
        return;
    }

    // Langkah 1: Pindahkan n-1 cakram dari tiang asal ke tiang bantu
    hanoi(n - 1, from_peg, aux_peg, to_peg);

    // Langkah 2: Pindahkan cakram terbesar dari tiang asal ke tiang tujuan
    cout << "Pindahkan cakram " << n << " dari " << from_peg << " ke " << to_peg << endl;

    // Langkah 3: Pindahkan n-1 cakram dari tiang bantu ke tiang tujuan
    hanoi(n - 1, aux_peg, to_peg, from_peg);
}

int main()
{
    int n; // Jumlah cakram
    cout << "Masukkan jumlah cakram: ";
    cin >> n;

    // Mulai permainan Menara Hanoi
    cout << "Memindahkan " << n << " cakram dari tiang A ke tiang C menggunakan tiang B sebagai bantu\n";
    hanoi(n, 'A', 'C', 'B'); // A, B, dan C adalah nama-nama tiang

    return 0;
}
