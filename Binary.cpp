#include <iostream>
using namespace std;

// Decimal to Binary
// int decToBinary(int decNum){
//     int ans = 0;
//     int pow = 1;
//     while(decNum > 0){
//         int rem = decNum % 2;
//         decNum = decNum / 2;
//         ans += (rem * pow);
//         pow = pow * 10;
//     }
//     return ans;
// }
// int main(){

//     int decNum = 5;
//     for (int i =1 ; i <= 10; i++){
//         cout << decToBinary(i) << endl ;
//     }
//     return 0;
// }

// Binary to Decimal
int binaryToDec(int binary){
    int ans = 0;
    int pow = 1;
    while(binary > 0){
        int rem = binary % 10 ;
        ans += (rem * pow);
        binary /= 10;
        pow *= 2;
    }
    return ans;
}
int main(){

    int binary = 111;
    cout << binaryToDec(binary) << endl ;
    return 0;
}