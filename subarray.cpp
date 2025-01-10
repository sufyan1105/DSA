#include <iostream>
#include <vector>
using namespace std;

// Function to print all subarrays
// int main() {
//     int n = 5;
//     int arr[5] = {1, 2, 3, 4, 5};
//     for (int start = 0; start < n; start++) {
//         for (int end = start; end < n; end++) {
//             for (int i = start; i <= end; i++) {
//                 cout << arr[i];
//             }
//             cout << " ";
//         }
//         cout << endl;
//     }
//     return 0;
// }

// MAximum Subarray Sum
int main(){
    int n = 5;
    int arr[5] = {1, 2, 3, 4, 5};
    int maxSum = INT_MIN;
    for (int start = 0; start < n; start++) {
        int sum = 0;
        for (int end = start; end < n; end++) {
            sum += arr[end];
            maxSum = max(maxSum, sum);
        }
    }
    cout << maxSum << endl;
    return 0;
}
