#include <iostream>
using namespace std;

// g++ patterns.cpp && ./a.out

int main(){

    // int n = 4;
    // for (int i = 1 ; i <= n; i++){
    //     for (int j = 1; j<= n; j++){
    //         cout << j;
    //     }
    //     cout << endl;
    // }

    int n = 4;
    for (int i = 1 ; i <= n; i++){
        for (int j = 1; j<= n; j++){
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}