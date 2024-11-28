#include <iostream>
#include <cstring>

void vulnerableFunction() {
    char input[8];           // Buffer input hanya 8 karakter
    bool isGranted = false;  // Variabel kontrol untuk akses

    std::cout << "Enter password: ";
    std::cin >> input; // Tidak ada pembatasan panjang input

    // Kondisi pertama: Password harus "hanif"
    if (strcmp(input, "hanif") == 0) {
        isGranted = true;
    }
    // Kondisi kedua: Jika panjang input lebih dari 8 karakter (buffer overflow)
    else if (strlen(input) > 8) {
        isGranted = true;
    }

    // Output hasil berdasarkan nilai isGranted
    if (isGranted) {
        std::cout << "Access granted!\n";
    } else {
        std::cout << "Access denied!\n";
    }
}

int main() {
    vulnerableFunction();
    return 0;
}
