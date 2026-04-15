#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n; // input jumlah suku

    int angka = 1; // suku pertama
    cout << angka << " ";

    for(int i = 2; i <= n; i++) {
        // pola selang-seling:
        // urutan genap → +5
        // urutan ganjil → +3
        if(i % 2 == 0)
            angka += 5;
        else
            angka += 3;

        cout << angka << " ";
    }

    return 0;
}
