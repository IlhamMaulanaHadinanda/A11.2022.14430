#include <iostream>

using namespace std;

enum Nilai {
    Unggul,
    BaikSekali,
    Baik,
    Cukup,
    Kurang
};

int main() {
    Nilai kondisiNilai = Unggul;

    switch (kondisiNilai) {
        case Unggul:
            cout << "Nilaimu Terbaik" << endl;
            break;
        case BaikSekali:
            cout << "Nilaimu Sangat Baik" << endl;
            break;
        case Baik:
            cout << "Nilaimu Baik" << endl;
            break;
        case Cukup:
            cout << "Nilaimu Cukup Baik" << endl;
            break;
        case Kurang:
            cout << "Nilaimu Kurang" << endl;
            break;
        default:
            cout << "Tidak diketahui kondisi nilai." << endl;
    }

    return 0;
}


