#include <iostream>
using namespace std;

class mahasiswa 
{
private: 
    int nim;
    string nama;
public:
    mahasiswa();
    mahasiswa(int);
    mahasiswa(string);
    mahasiswa(int inim, string inama);
    void cetak();
};

mahasiswa::mahasiswa() {}

mahasiswa::mahasiswa(int inim)
{
    nim = inim; //definisi hanya nim
}

mahasiswa::mahasiswa(string inama)
{
    nama = inama; //definisi hanya nama
}

mahasiswa::mahasiswa(int inim, string inama)
{
    nim = inim;
    nama = inama; // definisi hanya nim nama
}

