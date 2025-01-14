#include <iostream>
#include <vector>
using namespace std;

// void changeA(int a){ // pass by value
//     a = 20;
// }
void changeA(int* ptr){
    *ptr = 20;
}

int main(){

    // int a = 10; 
    // cout<< &a << endl;
    // int* ptr = &a;
    // cout<< ptr << endl;
    // int** ptr2 = &ptr;
    // cout<< *(&a) << endl;
    // cout<< **ptr2 << endl;

    // Null Pointer
    // int* ptr = NULL;
    // cout<< ptr << endl; // 0x0

    // Pass by reference
    int a = 10;
    changeA(&a);
    cout<< a << endl;

    return 0;
}

