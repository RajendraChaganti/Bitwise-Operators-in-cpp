// NAME : Rajendra Chaganti
// PRN : 24070123150
// Experiment 4: Bitwise Operators in C++
#include <iostream>
using namespace std;
int main() {
    int a, b;
    // Taking input from user
    cout << "Enter first number a: ";
    cin >> a;
    cout << "Enter second number b: ";
    cin >> b;
    // Bitwise AND
    int andResult = a & b;
    cout << "\na & b = " << andResult << " (Bitwise AND)";
    // Bitwise OR
    int orResult = a | b;
    cout << "\na | b = " << orResult << " (Bitwise OR)";
    // Bitwise XOR
    int xorResult = a ^ b;
    cout << "\na ^ b = " << xorResult << " (Bitwise XOR)";
    // Bitwise NOT of a
    int notResult = ~a;
    cout << "\n~a = " << notResult << " (Bitwise NOT of a)";
    // Left Shift
    int leftShift = a << 1;
    cout << "\na << 1 = " << leftShift << " (Left Shift by 1 bit)";
    // Right Shift
    int rightShift = a >> 1;
    cout << "\na >> 1 = " << rightShift << " (Right Shift by 1 bit)";
    return 0;
}
/*
Output
Enter first number a: 2
Enter second number b: 3

a & b = 2 (Bitwise AND)
a | b = 3 (Bitwise OR)
a ^ b = 1 (Bitwise XOR)
~a = -3 (Bitwise NOT of a)
a << 1 = 4 (Left Shift by 1 bit)
a >> 1 = 1 (Right Shift by 1 bit)
*/
