/*
Nama    : Ilham Maulana Hadinanda
NIM     : A11.2022.14430
Kelp    : A11.4212
*/

#include <iostream>

using namespace std;

//Max
int max(int a, int b);

//Min
int min(int a, int b);

//maxArray
int maxArray(int arr[], int n);

//minArray
int minArray(int arr1[], int n1);

//isEven
bool isEven(int a);

//isOdd
bool isOdd(int a);

//isFactor
bool isFactor(int a, int bil);

//search
int search(int arr4[], int n4, int x);

//isFound
bool isFound(int arr5[], int n5, int y);

//SumEven
int sumEven(int arr2[], int n2);

//SumOdd
int sumOdd(int arr3[], int n3);


int main()
{
    //Max
    cout << "Max : ";
    cout << max(8,5) << endl;

    //Min
    cout << "Min : ";
    cout << min(8,5) << endl;

    //maxArray
    int arr[] = {2, 10, 6, 8, 15, 1};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout << "Array Max : " << maxArray(arr, n) << endl;

    //minArray
    int arr1[] = {2, 10, 6, 8, 15, 1};
    int n1 = sizeof(arr1)/sizeof(arr1[0]);
    cout << "Array Min : " << minArray(arr1, n1) << endl;

    //isEven
    cout << "isEven : ";
    cout << isEven(3) << endl;

    //isOdd
    cout << "isOdd : ";
    cout << isOdd(3) << endl;

    //isFactor
    cout << "isFactor : ";
    cout << isFactor(2,7) << endl;

    //search
    int arr4[] = {2, 10, 15, 6, 8, 1};
    int n4 = sizeof(arr4)/sizeof(arr4[0]);
    int cari = search(arr4, n4, 7);
    if(cari == -1){
        cout << "Search : " << "angka tidak ada" << endl;
    }else{
        cout << "Search : " << "angka ditemukan di deret ke-" << cari << endl;
    }

    //isFound
    int arr5[] = {2, 10, 15, 6, 8, 1};
    int n5 = sizeof(arr5)/sizeof(arr5[0]);
    cout << "isFound : " << isFound(arr5, n5, 6) << endl;

    //SumEven
    int arr2[] = {2, 10, 15, 6, 8, 1};
    int n2 = sizeof(arr2)/sizeof(arr2[0]);
    cout << "sumEven : " << sumEven(arr2, n2) << endl;

    //SumOdd
    int arr3[] = {2, 10, 15, 6, 8, 1};
    int n3 = sizeof(arr3)/sizeof(arr3[0]);
    cout << "sumOdd : " << sumOdd(arr3, n3);
}


//Max
int max(int a, int b){
    if(a > b){
        return a;
    }else{
        return b;
    }
}

//Min
int min(int a, int b){
    if(a < b){
        return a;
    }else{
        return b;
    }
}

//maxArray
int maxArray(int arr[], int n) {
    int max = arr[0];
    for (int i = 1; i < n; i++){
        if (arr[i] > max){
            max = arr[i];
        }
    }
    return max;
}

//minArray
int minArray(int arr1[], int n1) {
    int min = arr1[0];
    for (int i = 1; i < n1; i++){
        if (arr1[i] < min){
            min = arr1[i];
        }
    }
    return min;
}

//isEven
bool isEven(int a){
    if(a % 2 == 0){
        return true;
    }else{
        return false;
    }
}

//isOdd
bool isOdd(int a){
    if(a % 2 == 1){
        return true;
    }else{
        return false;
    }
}

//isFactor
bool isFactor(int a, int bil){
    if(bil % a == 0){
        return true;
    }else{
        return false;
    }
    return 0;
}

//search
int search(int arr4[], int n4, int x){
    for(int i=0; i<n4; i++){
        if(arr4[i] == x){
            i;
        }
    }
    return -1;
}

//isFound
bool isFound(int arr5[], int n5, int y){
    for(int i=0; i<n5; i++){
        if(arr5[i] == y){
            return true;
        }
    }
    return false;
}

//SumEven
int sumEven(int arr2[], int n2){
    int jumlah = 0;
    for(int i=0; i<n2; i++){
        if(arr2[i]%2 == 0){
            jumlah = jumlah + arr2[i];
        }
    }
    return jumlah;
}

//SumOdd
int sumOdd(int arr3[], int n3){
    int jumlah = 0;
    for(int i=0; i<n3; i++){
        if(arr3[i]%2 == 1){
            jumlah = jumlah + arr3[i];
        }
    }
    return jumlah;
}

