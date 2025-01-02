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

    // int num = 1;
    // int n = 3;
    // for(int i=0; i<n; i++){
    //     for (int j=0; j<n; j++){
    //         cout << num;
    //         num++;
    //     }
    //     cout << endl;
    // }

    // char ch = 'A';
    // int n = 3;
    // for(int i=0; i<n; i++){
    //     for (int j=0; j<n; j++){
    //         cout << ch;
    //         ch = ch + 1;
    //     }
    //     cout << endl;
    // }

    // int n = 4;
    // for(int i=0; i<n; i++){
    //     for (int j=0; j<i+1; j++){
    //         cout << "*";
    //     }
    //     cout << endl;
    // }
    
    // int n = 4;
    // for(int i=0; i<n; i++){
    //     for (int j=0; j<i+1; j++){
    //         cout << (i+1) ;
    //     }
    //     cout << endl;
    // }

    // int n = 4;
    // char ch = 'A';
    // for(int i=0; i < n; i++){
    //     for (int j=0; j < i+1; j++){
    //         cout << ch  ;
    //     }
    //     cout << endl;
    //     ch++;
    // }

    // int n = 4;
    // for(int i=0; i<n; i++){
    //     for (int j=1; j<= i+1; j++){
    //         cout << j << " " ;
    //     }
    //     cout << endl;
    // }
    
    // int n = 4;
    // for(int i=0; i<n; i++){
    //     for (int j=i+1; j>0; j--){
    //         cout << j << " ";
    //     }
    //     cout << endl;
    // }

    // int n = 4;
    // int num = 1;
    // for(int i=0; i<n; i++){
    //     for (int j=i+1; j>0; j--){
    //         cout << num << " ";
    //         num++;
    //     }
    //     cout << endl;
    // }

    // int n = 4;
    
    // for(int i=0; i<n; i++){

    //     for (int j=0; j<i; j++){
    //         cout << " ";
    //     }

    //     for (int j = 0; j<n-i; j++){
    //         cout << (i+1);
    //     }

    //     cout << endl;
    // }

    int n = 4;
    for(int i=0; i<n; i++){
        // Spaces
        for (int j=0; j<n-i-1; j++){
            cout <<  " ";
        }
        // num 1
        for (int j =1; j<= i+1 ; j++){
            cout << j ;
        }
        // num 2
        for (int j = i; j>0; j--){
            cout << j;
        }
        cout << endl;
    }


    return 0;
}