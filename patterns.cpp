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

    // int n = 4;
    // for (int i = 1 ; i <= n; i++){
    //     for (int j = 1; j<= n; j++){
    //         cout << "*";
    //     }
    //     cout << endl;
    // }

    // int n = 4;
    // for (int i = 0 ; i < n; i++){
    //     char ch = 'A';
    //     for (int j = 0; j< n; j++){
    //         cout << ch ;
    //         ch = ch + 1;
    //     }
    //     cout << endl;
    // }
    int num = 1;
    int n = 3;
    for(int i=0; i<n; i++){
        for (int j=0; j<n; j++){
            cout << num;
            num++;
        }
        cout << endl;
    }

    return 0;
}