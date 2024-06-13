#include <iostream>
using namespace std;

void decimalToBinary(int n) {
    if (n == 0) {
        cout << "0";
        return;
    }

    int binary = 0;
    int place = 1;

    while (n > 0) {
        int remainder = n % 2;
        binary += remainder * place;
        n /= 2;
        place *= 10;
    }

    cout << binary;
}

int main() {
    int decimalNumber;

    cout << "Enter a decimal number: ";
    cin >> decimalNumber;

    cout << "Binary representation: ";
    decimalToBinary(decimalNumber);
    cout << endl;

    return 0;
}
