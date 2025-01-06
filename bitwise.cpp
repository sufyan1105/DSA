#include <iostream>
using namespace std;

// int main() {
    
//     cout << (6 & 10) << endl; 
//     cout << (6 | 10) << endl;
//     cout << (6 ^ 10) << endl;

//     cout << (10 << 2) << endl;
//     cout << (10 >> 1) << endl;

//     return 0;
// }

// // Function to check if a number is a power of 2 using loops
// bool isPowerOfTwoLoop(int n) {
//     if (n <= 0) return false;
//     while (n % 2 == 0) {
//         n /= 2;
//     }
//     return n == 1;
// }

// // Function to check if a number is a power of 2 using bitwise operations
// bool isPowerOfTwoBitwise(int n) {
//     if (n <= 0) return false;
//     return (n & (n - 1)) == 0;
// }

// int main() {
//     int num = 34;

//     // Using loop-based method
//     if (isPowerOfTwoLoop(num)) {
//         cout << num << " is a power of 2 (using loop)." << endl;
//     } else {
//         cout << num << " is not a power of 2 (using loop)." << endl;
//     }

//     // Using bitwise method
//     if (isPowerOfTwoBitwise(num)) {
//         cout << num << " is a power of 2 (using bitwise)." << endl;
//     } else {
//         cout << num << " is not a power of 2 (using bitwise)." << endl;
//     }

//     return 0;
// }

// Function to reverse an integer
int reverseInteger(int n) {
    int reversed = 0;
    while (n != 0) {
        int digit = n % 10;
        reversed = reversed * 10 + digit;
        n /= 10;
    }
    return reversed;
}

int main() {
    int num = 12345;

    // Reverse the integer
    int reversedNum = reverseInteger(num);
    cout << "Original number: " << num << endl;
    cout << "Reversed number: " << reversedNum << endl;

    return 0;
}

