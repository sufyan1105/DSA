#include <iostream>
#include <vector>
using namespace std;

int binarySearch(vector<int> arr, int tar){
    int start = 0;
    int end = arr.size() - 1;
    while(start <= end){
        // int mid = (start + end )/ 2;
        int mid = start + (end - start) / 2;
        if(tar > arr[mid]){
            start = mid + 1;
        }else if(tar < arr[mid]){
            end = mid - 1;
        }else{
            return mid;
        }
    }
    return -1;
}

int main(){

    vector<int> arr1 = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int tar1 = 4;
    cout << binarySearch(arr1, tar1) << endl;


    vector<int> arr2 = {1, 2, 3, 4, 5, 6, 7, 8, 9,10};
    int tar2 = 10;
    cout << binarySearch(arr2, tar2) << endl;

    return 0;
}