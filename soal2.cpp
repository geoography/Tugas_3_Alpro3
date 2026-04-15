#include <iostream>
#include <cctype>
#include <cstdlib>
// #include <string>
using namespace std;

int main(){
    int cnt = 0;
    string input;
    char target;

    getline(cin, input); // pakai getline supaya bisa input lebih dari satu kata
    cin >> target; // input huruf target 

    system("cls");

    for (int i = 0; i < input.size(); i++){
        // cek tiap karakter yang ada di string
        if (target != tolower(input[i])){  // jika tidak sama dengan karakter target
            cnt ++; // hitung banyak karakter yang tidak sama dengan karakter target
            cout << input[i];  // cout karakter yang tidak sama dengan karakter target
        } 
    }

    cout << "\nKarakter terhapus: " << input.size() - cnt << endl; // hitung karakter yang memiliki nilai sama dengan target
    return 0;
}
