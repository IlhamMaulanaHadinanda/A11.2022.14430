#include <iostream>

using namespace std;

//Array Statis

struct Mahasiswa {
    string nim;
    string nama;
    string jurusan;
    int lulus;
};

int main() {
    int jumlahMahasiswa = 4;
    Mahasiswa mahasiswa[jumlahMahasiswa];

    mahasiswa[0] = {"A11.2020.01234", "Andi", "Broadcasting", 2023};
    mahasiswa[1] = {"A11.2010.01234", "Budi", "Sistem Informasi", 2013};
    mahasiswa[2] = {"A11.2000.01234", "Ali", "DKV", 2003};
    mahasiswa[3] = {"A11.1990.01234", "Siti", "Kesehatan", 1993};

    for (int i = 0; i < jumlahMahasiswa; i++) {
        cout << "Data Mahasiswa " << i + 1 << ":" << endl;
        cout << "NIM: " << mahasiswa[i].nim << endl;
        cout << "Nama: " << mahasiswa[i].nama << endl;
        cout << "Jurusan: " << mahasiswa[i].jurusan << endl;
        cout << "Tahun Lulus: " << mahasiswa[i].lulus << endl;
        cout << endl;
    }

    return 0;
}
