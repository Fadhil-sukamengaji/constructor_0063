//buatlah program c++ dengan class barang yang memiliki atribut: namaBarang,
//kodeBarang
//program memiliki constructor berparameter
//untuk mengisi nilai namaBarang dan KodeBarang.
//serta memiliki fungsi untuk menampilkan informasi barang.


#include <iostream>
#include <string>

using namespace std;

class Barang 
{
    private:
        string namaBarang;
        string kodeBarang;

    public:
    
        Barang(string nama, string kode) 
        {
            namaBarang = nama;
            kodeBarang = kode;
        }

    void tampilkanInformasi() 
        {
            cout << "nama Barang : " << namaBarang << endl;
            cout << "kode Barang : " << kodeBarang << endl;
        }
};


int main() {

    Barang barang1("knalpot", "0025");

    barang1.tampilkanInformasi();

    return 0;
}