#include <iostream>
using namespace std;

// int main() {
    
//     int marks[5] = {19, 10, 8, 17, 9};
//     int size = 5;
//     // cout << marks[0] << endl;
//     // cout << marks[1] << endl;
//     // cout << marks[2] << endl;
//     // cout << marks[3] << endl;
//     // cout << marks[4] << endl;


//     for (int i = 0; i < size; i++) {
//         cout << "Enter the value of marks: ";
//         cin >> marks[i];
//     }
//     for (int i = 0; i < size ; i++){
//         cout << marks[i] << endl;
//     }

//     return 0;
// }

int main(){

    int nums[5] = {11,3,12,25,-3,};
    int size = 5;
    int smallest = INT_MAX;
    for (int i =0; i < size; i++){
        smallest = min(nums[i], smallest);
        // if (nums[i] < smallest){
        //     smallest = nums[i];
        // }
    }
    cout << "The smallest number is: " << smallest << endl;

    return 0;
}