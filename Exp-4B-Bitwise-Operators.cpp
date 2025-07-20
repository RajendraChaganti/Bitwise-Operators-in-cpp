// NAME : Rajendra Chaganti
// PRN : 24070123150
// Exp-4 : Bitwise Operators – Set and Reset a Bit
#include <iostream>
using namespace std;
int main() {
    int i = 50;
    int setBitPos;       // Bit position to be set
    int resetBitPos;     // Bit position to be reset
    int afterSet;
    int afterReset;
    cout << "Enter the bit position to SET (0-indexed): ";
    cin >> setBitPos;
    afterSet = i | (1 << setBitPos);
    cout << "Enter the bit position to RESET (0-indexed): ";
    cin >> resetBitPos;
    afterReset = i & (~(1 << resetBitPos));
    cout << "\nOriginal number: " << i << endl;
    cout << "After setting bit at position " << setBitPos << ": " << afterSet << endl;
    cout << "After resetting bit at position " << resetBitPos << ": " << afterReset << endl;
    return 0;
}
