#include <iostream>
#include <chrono>
using namespace std;
using namespace std::chrono;

int linearSearch(int arr[], int n, int target) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == target) {
            return i;
        }
    }
    return -1;
}

int binarySearch(int arr[], int n, int target) {
    int low = 0, high = n - 1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] == target) {
            return mid;
        }
        else if (arr[mid] < target) {
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }
    return -1;
}

int main() {
    int arr[] = {2, 4, 6, 8, 10, 12, 14, 16, 18, 20};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 12;

    // Mengukur waktu eksekusi pencarian linier
    auto startLinear = high_resolution_clock::now();
    int linearIndex = linearSearch(arr, n, target);
    auto endLinear = high_resolution_clock::now();
    auto durationLinear = duration_cast<microseconds>(endLinear - startLinear);

    // Mengukur waktu eksekusi pencarian biner
    auto startBinary = high_resolution_clock::now();
    int binaryIndex = binarySearch(arr, n, target);
    auto endBinary = high_resolution_clock::now();
    auto durationBinary = duration_cast<microseconds>(endBinary - startBinary);

    // Menghitung ruang yang digunakan
    int space = sizeof(arr);

    cout << "Hasil pencarian linier: ";
    if (linearIndex != -1) {
        cout << "Elemen ditemukan pada indeks " << linearIndex << endl;
    }else {
        cout << "Elemen tidak ditemukan" << endl;
    }
    cout << "Waktu eksekusi pencarian linier: " << durationLinear.count() << " microseconds" << endl;

    cout << "Hasil pencarian biner: ";
    if (binaryIndex != -1) {
        cout << "Elemen ditemukan pada indeks " << binaryIndex << endl;
    }else {
        cout << "Elemen tidak ditemukan" << endl;
    }
    cout << "Waktu eksekusi pencarian biner: " << durationBinary.count() << " microseconds" << endl;

    cout << "Ruang yang digunakan: " << space << " bytes" << endl;

    return 0;
}
