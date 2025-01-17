// #include <iostream>
// using namespace std;

// int main() {
    
//     int marks[5] = {19, 10, 8, 17, 9};
//     int size = 5;
//     // cout << marks[0] << endl;
//     // cout << marks[1] << endl;
//     // cout << marks[2] << endl;
//     // cout << marks[3] << endl;
//     // cout << marks[4] << endl;


    // for (int i = 0; i < size; i++) {
    //     cout << "Enter the value of marks " << i + 1 << ": " << endl;
    //     cin >> marks[i];
    // }
    // for (int i = 0; i < size ; i++){
    //     cout << marks[i] << endl;
    // }

//     return 0;
// }

// int main(){

//     int nums[5] = {11,3,12,25,-3,};
//     int size = 5;
//     int smallest = INT_MAX;
//     int largest = INT_MIN;
//     int index = -1;

//     // Smallest number of the array
//     // for (int i =0; i < size; i++){
//     //     smallest = min(nums[i], smallest);
//     //     // if (nums[i] < smallest){
//     //     //     smallest = nums[i];
//     //     // }
//     // }
//     // cout << "The smallest number is: " << smallest << endl;

//     // Largest number of the array
//     for (int i =0;i < size; i++){
//         largest = max(nums[i],largest);
//         index = i - 1;
//     }
//     cout << "The largest number is: " << largest << endl;
//     cout << "The index value of the largest number is: " << index << endl;

//     return 0;
// }

//  PASS BY REFERENCE
// void changearr(int arr[],int size){
//     cout << "Inside function" << endl;
//     for (int i =0 ; i <size; i++){
//         arr[i] = arr[i] * 2;
//     }
// }
// int main(){

//     int arr[] = {1,2,3};
//     int size = 3;
//     changearr(arr,size);
//     cout << "Inside main" << endl;
//     for (int i =0 ; i <3; i++){
//         cout << arr[i] << endl ;
//     }
//     return 0;
// }

//  LINEAR SEARCH

// int linearsearch(int arr[], int size,int target){
//     for (int i =0; i< size; i++){
//         if (arr[i] == target){
//             return i;
//         }
//     }
//     return -1;
// }
// int main(){
//     int arr[] = {1,2,3,4,5,6,7,8,9,10};
//     int size = 10;
//     int target = 4;
//     linearsearch(arr,size,target);
//     cout << linearsearch(arr,size,target) << endl;

//     return 0;
// }

//  REVERSE AN ARRAY
// void reverse(int arr[], int size){
//     int start = 0;
//     int end = size - 1;
//     while (start < end){ // if the size is off use < and if it's even use <=
//         swap(arr[start],arr[end]);
//         start++;
//         end--;
//     }
// }
// int main(){
//     // int arr[] = {1,2,3,4,5,6,7,8,9,10,11};
//     int arr[] = {1,2,3,4,5,6,7,8,9,10};
//     int size = 10;
//     // int size = 11;

//     reverse(arr,size);
//     for (int i = 0; i < size; i++){
//         cout << arr[i] << " ";
//     }
//     cout << endl;
//     return 0;
// }

// WAF to find sum and product of an array
// void sumproduct(int arr[], int size){
//     int sum = 0;
//     int product = 1;
//     for (int i = 0; i < size; i++){
//         sum += arr[i];
//         product *= arr[i];
//     }
//     cout << "The sum of the array is: " << sum << endl;
//     cout << "The product of the array is: " << product << endl;
// }
// int main(){
//     int arr[] = {1,2,3,4,5};
//     int size = 5;
//     sumproduct(arr,size);
//     return 0;
// }

// WAF to swap the maximum and minimum element of an array
// void swapmaxmin(int arr[], int size){
//     int max = INT_MIN;
//     int min = INT_MAX;
//     int maxindex = -1;
//     int minindex = -1;
//     for (int i = 0; i < size; i++){
//         if (arr[i] > max){
//             max = arr[i];
//             maxindex = i;
//         }
//         if (arr[i] < min){
//             min = arr[i];
//             minindex = i;
//         }
//     }
//     swap(arr[maxindex],arr[minindex]);
// }
// int main(){
//     int arr[] = {1,2,3,4,5};
//     int size = 5;
//     swapmaxmin(arr,size);
//     for (int i = 0; i < size; i++){
//         cout << arr[i] << " ";
//     }
//     cout << endl;
//     return 0;
// }

// WAF to print all the unique elements of an array
// void unique(int arr[], int size){
//     for (int i = 0; i < size; i++){
//         bool isunique = true;
//         for (int j = 0; j < size; j++){
//             if (i != j && arr[i] == arr[j]){
//                 isunique = false;
//                 break;
//             }
//         }
//         if (isunique){
//             cout << arr[i] << " ";
//         }
//     }
// }

// int main(){
//     int arr[] = {1,2,3,4,5,1,2,3,4,7};
//     int size = 10;
//     unique(arr,size);
//     cout << endl;
//     return 0;
// }

// WAF to find intersection of two arrays
// void intersection(int arr1[], int size1, int arr2[], int size2){
//     for (int i = 0; i < size1; i++){
//         for (int j = 0; j < size2; j++){
//             if (arr1[i] == arr2[j]){
//                 cout << arr1[i] << " ";
//                 break;
//             }
//         }
//     }
// }
// int main(){
//     int arr1[] = {1,2,3,4,5};
//     int arr2[] = {3,4,5,6,7};
//     int size1 = 5;
//     int size2 = 5;
//     intersection(arr1,size1,arr2,size2);
//     cout << endl;
//     return 0;
// }