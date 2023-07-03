#include <iostream>
#include <chrono>
using namespace std;
using namespace std::chrono;

// Algoritma Divide and Conquer (contoh: pencarian maksimum dalam array)
int divideAndConquer(int arr[], int low, int high) {
    if (low == high) {
        return arr[low];
    }
    else {
        int mid = (low + high) / 2;
        int leftMax = divideAndConquer(arr, low, mid);
        int rightMax = divideAndConquer(arr, mid + 1, high);
        return max(leftMax, rightMax);
    }
}

int main() {
    int arr[] = {5, 9, 3, 7, 2, 8, 6};
    int n = sizeof(arr) / sizeof(arr[0]);

    // Mengukur waktu eksekusi algoritma Divide and Conquer
    auto start = high_resolution_clock::now();
    int maxElement = divideAndConquer(arr, 0, n - 1);
    auto end = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(end - start);

    // Menghitung ruang yang digunakan
    int space = sizeof(arr);

    // Menampilkan hasil
    cout << "Elemen maksimum dalam array: " << maxElement << endl;
    cout << "Waktu eksekusi: " << duration.count() << " microseconds" << endl;
    cout << "Ruang yang digunakan: " << space << " bytes" << endl;

    return 0;
}
