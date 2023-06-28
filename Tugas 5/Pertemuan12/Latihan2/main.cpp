#include <iostream>

using namespace std;

struct sepeda{
    string merk, type, harga;
    int tahun;
};

struct sepeda bagian;

int main()
{
    bagian.merk = "Polygon";
    bagian.type = "Sepeda Gunung";
    bagian.tahun = 2013;
    bagian.harga = "2.000.000";

    cout << "Merk  = " << bagian.merk << endl;
    cout << "Type  = " << bagian.type << endl;
    cout << "Tahun = " << bagian.tahun << endl;
    cout << "Harga = " << bagian.harga << endl;
    return 0;
}
