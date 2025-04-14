#include <iostream>
#include <string>
using namespace std;


struct Pengarang{
    string nama;
    string alamat;
};

struct Book {
    string Judul;
    string JumlahHalaman;
    Pengarang Pengarang;
};

int main(){
    Book bk[2];
    for (int i = 0; i < 2; i++)
    {
        cout << "Masukan Judul = ";
        getline(cin,bk[i].Judul) ;
        cout << "Masukan Jumlah Halaman = ";
        cin >> bk[i].JumlahHalaman;
        cin.ignore();
        cout << "Masukan Nama Pengarang = ";
        getline(cin, bk[i].Pengarang.nama);
        cout << "Masukan Alamat Pengarang = ";
        getline (cin,bk[i].Pengarang.alamat);
    }
    
    cout <<endl;
    cout << "Tampilkan Data Buku" << endl;
    cout << endl;

    for (int i = 0; i < 2; i++)
    {
        cout << "Judul Buku = " << bk[i].Judul << endl;
        cout << "Jumlah Halaman = " << bk[i].JumlahHalaman << endl;
        cout << "Nama Pengarang = " << bk[i].Pengarang.nama << endl;
        cout << "Alamat Pengarang = " << bk[i].Pengarang.alamat << endl;
    }
    



}