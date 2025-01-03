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
// int sum(int n){
//     int sum = 0;
//     for (int i = 1 ; i<= n ; i++){
//         sum += i ;
//     }
//     return sum;
// }

// Calculate n factorial
// int factorial(int n){
//     int fact = 1;
//     for (int i = 1; i<=n ; i++){
//         fact *= i;
//     }
//     return fact;
// }

// Calculate sum of digits of a number
// int sumOfDigits(int n){
//     int sum = 0;
//     while (n > 0) {
//         sum += n % 10; // adding last number to sum 
//         n /= 10;   // removing the last digit
//         }
//         return sum;
//     }

//  Calculating binomial coefficient for n & r
// Getting the factorial
int factorial(int n){
    int fact = 1;
    for (int i = 1; i<=n ; i++){
        fact *= i;
    }
    return fact;
}
//  Calculating the nCr to find the binomial
int ncr(int n , int r){
    int fact_n = factorial(n);
    int fact_r = factorial(r);
    int fact_n_r = factorial(n-r);
    return fact_n / (fact_r * fact_n_r);
}

int main(){

    // cout << sum(12,13) << endl ;
    // cout << min(12,13) << endl ;
    // cout << sum(4) << endl ;
    // cout << factorial(5) << endl ;
    // cout << sumOfDigits(12345) << endl ;
    int n = 8 , r = 2;
    cout << ncr(n,r) << endl;
    

    return 0;
}