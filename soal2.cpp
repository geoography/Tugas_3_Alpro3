#include <iostream>
#include <cctype>
#include <cstdlib>
// #include <string>
using namespace std;

int main(){
    int cnt = 0;
    string input;
    char target;

    getline(cin, input);
    cin >> target;

    system("cls");

    for (int i = 0; i < input.size(); i++){
        if (target != tolower(input[i])){
            cnt ++;
            cout << input[i];  
        } 
    }

    cout << "\nKarakter terhapus: " << input.size() - cnt << endl;
    return 0;
}
