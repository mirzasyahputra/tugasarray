#include <iostream>
using namespace std;

int main() {
    int nil[5];

    cout << "Masukkan 5 angka integer:\n";
    for (int i = 0; i < 5; i++) {
        cout << "angka ke-" << i + 1 << ": ";
        cin >> nil[i];
    }

    cout << "\nMenampilkan semua elemen array:\n";
    for (int i = 0; i < 5; i++) {
        cout << "angka ke-" << i + 1 << ": " << nil[i] << endl;
    }
    return 0;
}
