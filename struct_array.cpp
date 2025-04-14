#include <iostream>
#include <string>
using namespace std;

struct Book {
    string Judul;
    string JumlahHalaman;
    string Pengarang;
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
        getline(cin, bk[i].Pengarang);
    }
    
    cout <<endl;
    cout << "Tampilkan Data Buku" << endl;
    cout << endl;

    for (int i = 0; i < 2; i++)
    {
        cout << "Judul Buku = " << bk[i].Judul << endl;
        cout << "Jumlah Halaman = " << bk[i].JumlahHalaman << endl;
        cout << "Nama Pengarang = " << bk[i].Pengarang << endl;
    }
    



}