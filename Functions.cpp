#include <iostream>
using namespace std;

// Function for sum of 2 numbers
// int sum(int a , int b){
//     return a + b;
// }

// Function for minimum of 2 numbers
// int min(int a, int b){
//     if (a>b) {
//         return b;
//     }
//     else {
//         return a;
//     }
// }

// Calculate the sum of numbers from 1 to N
int sum(int n){
    int sum = 0;
    for (int i = 1 ; i<= n ; i++){
        sum += i ;
    }
    return sum;
}

int main(){

    // cout << sum(12,13) << endl ;
    // cout << min(12,13) << endl ;
    cout << sum(4) << endl ;
    return 0;
}