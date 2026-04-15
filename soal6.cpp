#include <iostream>
using namespace std;

int main(){
    int n;
    long long total = 0;
    
    cin >> n; // input n

    for (int i = 2; i <= n; i += 2){ // loop mulai dari 2 hingga bilangan genap yang lebih kecil sama dengan n
        total += i*i; // variabel total merupakan penjumlahan setiap kuadrat dari semua elemen genap
    }

    cout << total << endl; // cout nilai total
    return 0;
}
