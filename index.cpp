#include <iostream>
using namespace std;

unsigned long long factorial(int n) {
    if (n < 0) {
        cout << "Factorial is not defined for negative numbers." << endl;
        return 0;
    }
    if (n == 0 || n == 1) {
        return 1;
    }
    return n * factorial(n - 1);
}

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;
    unsigned long long fact = factorial(number);
    if (number >= 0) {
        cout << "The factorial of " << number << " is " << fact << endl;
    }
    return 0;
}
