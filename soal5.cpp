#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n; // input bilangan

    bool prima = true; // anggap awalnya prima

    // bilangan <= 1 bukan prima
    if(n <= 1) {
        prima = false;
    } else {
        // cek pembagi dari 2 sampai n-1
        for(int i = 2; i < n; i++) {
            if(n % i == 0) {
                prima = false; // kalau habis dibagi → bukan prima
                break; // keluar loop
            }
        }
    }

    // output hasil
    if(prima)
        cout << "Prima";
    else
        cout << "Bukan Prima";

    return 0;
}
