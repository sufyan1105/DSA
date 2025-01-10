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
// int main(){
//     int n = 5;
//     int arr[5] = {1, 2, 3, 4, 5};
//     int maxSum = INT_MIN;
//     for (int start = 0; start < n; start++) {
//         int sum = 0;
//         for (int end = start; end < n; end++) {
//             sum += arr[end];
//             maxSum = max(maxSum, sum);
//         }
//     }
//     cout << maxSum << endl;
//     return 0;
// }

// Pair sum
// vector<int> pairsum(vector<int> nums, int target) {
//     vector<int> ans;
//     int num = nums.size();
//     for (int i = 0; i < num; i++) {
//         for (int j = i + 1; j < num; j++) {
//             if (nums[i] + nums[j] == target) {
//                 ans.push_back(i);
//                 ans.push_back(j);
//                 return ans;
//             }
//         }
//     }
//     return ans;
    
// }

// int main() {
//     vector<int> nums = {2, 7, 11, 15};
//     int target = 13;
//     vector<int> ans = pairsum(nums, target);
//     cout << ans[0] << ", " << ans[1] << endl;
//     return 0;
// }

// Pair sum optimized
vector<int> pairsum(vector<int> nums, int target) {
    vector<int> ans;
    int num = nums.size();
    int i = 0;
    int j =  num - 1;
    while(i < j){
        int sum = nums[i] + nums[j];
        if (sum > target){
            j--;
        } else if (sum < target){
            i++;
        } else {
            ans.push_back(i);
            ans.push_back(j);
            return ans;
        }
    }
    return ans;
}
int main(){
    vector<int> nums = {2, 7, 11, 15};
    int target = 13;
    vector<int> ans = pairsum(nums, target);
    cout << ans[0] << ", " << ans[1] << endl;
    return 0;
}