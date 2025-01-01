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
    int sum = 0;
    int n = 5;
    for ( int i = 1 ; i <= n; i++){
        sum += i;
    }
    cout << sum;

    cout << endl;
    return 0;
}