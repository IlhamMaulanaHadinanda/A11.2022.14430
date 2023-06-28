#include <iostream>

using namespace std;

struct luasA{
    int p, l;
};

struct luasB{
    int r;
    float phi;
};

struct volumeA{
    int r, rkuadrat, t;
    float phi;
};

struct volumeB{
    int r, rkubik;
    float phi;
};

struct sepeda{
    string merk, type, harga;
    int tahun;
};

struct luasA PersegiPanjang;
struct luasB Lingkaran;
struct volumeA Kerucut;
struct volumeB Bola;

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
