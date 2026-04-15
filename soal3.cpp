#include <iostream>
using namespace std;

// fungsi untuk cek kabisat
bool kabisat(int tahun) {
    // kabisat jika:
    // habis dibagi 400
    // atau habis dibagi 4 tapi tidak habis dibagi 100
    return (tahun % 400 == 0) || (tahun % 4 == 0 && tahun % 100 != 0);
}

int main() {
    int tahun, interval;
    cin >> tahun >> interval; // input tahun awal & interval

    // menentukan arah (maju / mundur)
    int langkah = (interval > 0) ? 1 : -1;

    // looping sesuai banyak interval
    for(int i = 0; i <= abs(interval); i++) {
        if(kabisat(tahun))
            cout << tahun << " kabisat" << endl;
        else
            cout << tahun << " bukan kabisat" << endl;

        tahun += langkah; // pindah ke tahun berikutnya
    }

    return 0;
}
