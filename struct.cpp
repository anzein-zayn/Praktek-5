#include <iostream>
using namespace std;

struct Book {
    string Judul;
    string JumlahHalaman;
    string Pengarang;
};

int main(){
    Book bk;

    cout << "Masukan Judul = ";
    cin>> bk.Judul;
    cout << "Masukan Jumlah Halaman = ";
    cin >> bk.JumlahHalaman;
    cout << "Masukan Nama Pengarang = ";
    cin >> bk.Pengarang;

    cout <<endl;
    cout << "Tampilkan Data Buku" << endl;
    cout << endl;

    cout << "Judul Buku = " << bk.Judul << endl;
    cout << "Jumlah Halaman = " << bk.JumlahHalaman << endl;
    cout << "Nama Pengarang = " << bk.Pengarang << endl;


}