#include <iostream>
#include <vector>
using namespace std;

int main(){

    int a = 10;
    // cout<< &a << endl;
    int* ptr = &a;
    // cout<< ptr << endl;
    int** ptr2 = &ptr;

    cout<< *(&a) << endl;

    return 0;
}

