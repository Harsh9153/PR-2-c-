// Q2= Develop a Program to count the total number of digits in a number.

#include <iostream>
using namespace std;

int main() {
    long long number;
    int count = 0;   

    cout << "Enter any number: ";
    cin >> number;

    if (number == 0) {
        count = 1; 
    } else {
        while (number != 0) {
            number /= 10; 
            count++;      
        }
    }
    cout << "Total number of digits: " << count << endl;

    return 0;
}