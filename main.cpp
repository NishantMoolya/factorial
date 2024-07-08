#include <iostream>
using namespace std;

unsigned long long factorial(int n) {
    if (n < 0) {
        cout << "Factorial is not defined for negative numbers." << endl;
        return 0;
    }
    unsigned long long result = 1;
    for (int i = 1; i <= n; ++i) {
        result *= i;
    }
    return result;
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
