#include <iostream>
using namespace std;

int main() {
    int nil[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int sum = 0;

    for (int i = 0; i < 10; i++) {
        sum += nil[i];
    }

    cout << "Elemen array: ";
    for (int i = 0; i < 10; i++) {
        cout << nil[i] << " ";
    }
    
    cout << "\nHasil penjumlahan semua elemen: " << sum;

    return 0;
}
