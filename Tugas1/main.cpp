#include <iostream>

using namespace std;

int tambah(int a, int b){
    return a+b;
}

int kurang(int a, int b){
    return a-b;
}

void ArrayTambah(){
    int x, i, jumlah=0;
    cout << "Jumlah Angka : "; cin >> x;
    int a[x];
    for(i=0; i<x; i++){
        cout << "Masukan Angka : "; cin >> a[i];
        jumlah = jumlah + a[i];
    }
    cout << "Hasilnya Adalah : " << jumlah;
}

void ArrayRata(){
    int x, i;
    float hasil, jumlah=0;
    cout << "Jumlah Angka : "; cin >> x;
    int a[x];
    for(i=0; i<x; i++){
        cout << "Masukan Angka : "; cin >> a[i];
        jumlah = jumlah + a[i];
    }
    hasil = jumlah / x;
    cout << "Hasilnya Adalah : " << hasil;
}

int main()
{
    //Penjumlahan
    //cout << tambah(5,2);

    //Pengurangan
    //cout << kurang(5,2);

    //Penjumlahan Array
    //ArrayTambah();

    //Rata-Rata Array
    ArrayRata();

    return 0;
}
