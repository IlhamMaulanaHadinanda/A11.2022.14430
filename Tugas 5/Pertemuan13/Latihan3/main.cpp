#include <iostream>

using namespace std;

struct luas{
    int p, l, r;
    float phi;
};

struct volume{
    int r, rkuadrat, t, rkubik;
    float phi;
};

struct sepeda{
    string merk, type, harga;
    int tahun;
};


typedef struct luas operasi;
operasi PersegiPanjang;
operasi Lingkaran;

typedef struct volume operasiA;
operasiA Kerucut;
operasiA Bola;

int main()
{
    PersegiPanjang.p = 5;
    PersegiPanjang.l = 6;
    Lingkaran.phi = 3.14;
    Lingkaran.r = 7;
    Kerucut.phi = 3.14;
    Kerucut.r = 7;
    Kerucut.rkuadrat = Kerucut.r * Kerucut.r;
    Kerucut.t = 10;
    Bola.phi = 3.14;
    Bola.r = 7;
    Bola.rkubik = Bola.r * Bola.r * Bola.r;

    cout << "Persegi Panjang : " << PersegiPanjang.p * PersegiPanjang.l << endl;
    cout << "Lingkaran       : " << Lingkaran.phi * Lingkaran.r * Lingkaran.r << endl;
    cout << "Kerucut         : " << 0.33 * Kerucut.phi * Kerucut.rkuadrat * Kerucut.t << endl;
    cout << "Bola            : " << 1.33 * Bola.phi * Bola.rkubik << endl;
    return 0;
}
