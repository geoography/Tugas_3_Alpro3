#include <iostream>
using namespace std;

int main(){
    int n;
    string hore = "Hore!";

    cin >> n;

    for (int i = 0; i < hore.size(); i++){
        if(hore[i] == 'H' || hore[i] == 'r') cout << hore[i];
        else for (int j = 0; j < n; j++) cout << hore[i];
    }
    return 0;
}
