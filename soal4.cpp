#include <iostream>
using namespace std;

int main(){
    int n;
    string hore = "Hore!"; // buat string yang berisi setiap elemen yang ingin di cout

    cin >> n; // input n

    for (int i = 0; i < hore.size(); i++){ // looping setiap karakter "hore"
        if(hore[i] == 'H' || hore[i] == 'r') cout << hore[i]; // untuk karakter 'H' dan 'r' cukup cetak sekali
        else for (int j = 0; j < n; j++) cout << hore[i]; // untuk karakter 'o' dan 'e' cetak sebanyak n kali
    }
    return 0;
}
