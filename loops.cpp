#include <iostream>
using namespace std;

int main(){

    // int i = 1;

    // while (i <= 10) {
    //     cout << i << " ";
    //     i++;
    // }

    // int n = 10;
    
    // for ( int i = 1 ; i <= n ; i++) {
    //     cout << i << " ";
    // }
    // int sum = 0;
    // int n = 5;
    // for ( int i = 1 ; i <= n; i++){
    //     sum += i;
    // }
    // cout << sum;

    // int n = 10;
    // int sum = 0;

    // for ( int i = 1; i <= n; i++) {
    //     if ( i % 2 != 0){
    //         sum += i;
    //     }
    // }
    // cout << sum ;

    // int n = 5;
    // int sum =0;
    // int i = 1;

    // while (i <= n) {
    //     if (i % 2 != 0){
    //         sum += i;
    //     }
    //     i++;
    // }
    // cout << sum << " " ;
    // int sum = 0;
    // int n = 5;
    // for (int i = 1; i <=n ; i++){
    //     if (i % 2 == 0){
    //         sum +=i;
    // }
    // }
    // cout << sum << " ";
    // int n = 10;
    // bool isPrime = true;
    // for ( int i =2; i * i <= n; i++){
    //     if (n % i == 0){
    //         isPrime = false;
    //         break;
    //     }
    // }

    // if (isPrime == true){
    //     cout << "Prime";
    // } else {
    //     cout << "Not Prime";
    // }
    // cout << isPrime;

    // HomeWork problem 1

    // int sum = 0;
    // int n = 10;
    // for ( int i = 0 ; i <= n ; i++){
    //     if (i % 3 == 0){
    //         sum += i;
    // }
    // }
    // cout << sum;

    // Homework problem 2

    int n = 5;
    for (int i = 1; i <= n; i++) {
        long long factorial = 1;
        for (int j = 1; j <= i; j++) {
            factorial *= j;
        }
        cout << "Factorial of " << i << " is: " << factorial << endl;
    }

    cout << endl;
    return 0;
}