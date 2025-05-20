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

