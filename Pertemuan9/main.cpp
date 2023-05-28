#include <iostream>

using namespace std;

int penjumlahan(int a, int b);

int pengurangan(int a, int b);

int perkalian(int a, int b);

int pembagian(int a, int b);

int pangkat(int a, int b);

int main()
{
    cout << penjumlahan(5,3) << endl;
    cout << pengurangan(5,3) << endl;
    cout << perkalian(5,3) << endl;
    cout << pembagian(6,2) << endl;
    cout << pangkat(4,3);

    return 0;
}

int penjumlahan(int a, int b){
    if(b == 0){
        return a;
    }else{
        return 1 + penjumlahan(a, b-1);
    }
}

int pengurangan(int a, int b){
    if(b == 0){
        return a;
    }else{
        return pengurangan(a, b-1) - 1;
    }
}

int perkalian(int a, int b){
    if(b == 0){
        return 0;
    }else{
        return a + perkalian(a, b-1);
    }
}

int pembagian(int a, int b){
    if(a < b){
        return 0;
    }else{
        return 1 + pembagian(a - b, b);
    }
}

int pangkat(int a, int b){
    if(b == 0){
        return 1;
    }else{
        return a * pangkat(a, b-1);
    }
}
