// Q3= Develop a Program to find the sum of a number's first and last digits.

#include <iostream>
using namespace std;

int main() {
    long long number; 
    int firstDigit, lastDigit;

      cout << "Enter any number: ";
    cin >> number;

    lastDigit = number % 10;

    while (number >= 10) {
        number /= 10; 
    }
    firstDigit = number; 
    int sum = firstDigit + lastDigit;
    cout << "The sum of the first and the last digit: " << sum << endl;

    return 0;
}