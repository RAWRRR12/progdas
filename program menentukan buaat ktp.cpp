#include <iostream>
#include <string>

using namespace std;

bool bisaBuatKTP(int umur, const string& kewarganegaraan) {
    // Syarat untuk membuat KTP
    if (umur >= 17 && kewarganegaraan == "WNI") {
        return true;
    }
    return false;
}

int main() {
    int umur;
    string kewarganegaraan;

    cout << "Masukkan umur Anda: ";
    cin >> umur;
    cout << "Masukkan kewarganegaraan Anda (WNI/WNA): ";
    cin >> kewarganegaraan;

    if (bisaBuatKTP(umur, kewarganegaraan)) {
        cout << "Anda bisa membuat KTP." << endl;
    } else {
        cout << "Anda tidak bisa membuat KTP." << endl;
    }

    return 0;
}
