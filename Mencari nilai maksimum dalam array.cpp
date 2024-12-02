#include <iostream>
using namespace std;

int main() {
    int nil[7] = {23, 55, 12, 78, 41, 100, 31};
    
    int max = nil[0];
    for(int i = 1; i < 7; i++) {
        if(nil[i] > max) {
            max = nil[i];
        }
    }
    
    cout << "Elemen array: ";
    for(int i = 0; i < 7; i++) {
        cout << nil[i] << " ";
    }
    
    cout << "\nNilai maksimum dalam array: " << max;
    
    return 0;
}
