#include <iostream>
using namespace std;

int main() {
    // int n ;
    // cout << "Enter your age : " ;
    // cin >> n ;

    // if (n >= 18) {
    //     cout << "You are an adult." << endl;
    // }
    // else {
    //     cout << "You are a minor." << endl;
    // }

    // int n ;
    // cout << "Enter any number : " ;
    // cin >> n ;

    // if (n % 2 == 0) {
    //     cout << "Number is even." << endl;
    // }
    // else {
    //     cout << "Number is odd." << endl;
    // }

    int marks;
    cout << "Enter your marks : ";
    cin >> marks;

    if (marks >= 90 ) {
        cout << "Grade A" << endl;
    }
    else if (marks >= 80) {
        cout << "Grade B" << endl;
    }
    else if (marks >= 70) {
        cout << "Grade C" << endl;
    }
    else {
        cout << "Grade D" << endl;
    }

    return 0;
}