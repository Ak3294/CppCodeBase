#include <iostream>
using namespace std;

class ComplexNumber {
private:
    int real;
    int imag;

public:
    ComplexNumber(int r = 0, int i = 0) : real(r), imag(i) {}

    // Function to add another complex number
    void plus(const ComplexNumber& other) {
        real += other.real;
        imag += other.imag;
    }

    // Function to multiply by another complex number
    void multiply(const ComplexNumber& other) {
        int tempReal = real * other.real - imag * other.imag;
        imag = real * other.imag + imag * other.real;
        real = tempReal;
    }

    // Function to print the complex number
    void print() {
        cout << "Result: " << real << " + " << imag << "i" << endl;
    }
};

int main() {
    int real1, imag1, real2, imag2;
    cout << "Enter the Real and Imaginary parts of the first complex number: ";
    cin >> real1 >> imag1;
    cout << "Enter the Real and Imaginary parts of the second complex number: ";
    cin >> real2 >> imag2;

    ComplexNumber c1(real1, imag1);
    ComplexNumber c2(real2, imag2);

    int choice;
    cout << "Enter the Operation (1 for addition, 2 for multiplication): ";
    cin >> choice;

    if (choice == 1) {
        c1.plus(c2);
        c1.print();
    } else if (choice == 2) {
        c1.multiply(c2);
        c1.print();
    } else {
        cout << "Invalid choice!" << endl;
    }

    return 0;
}
