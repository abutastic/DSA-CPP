/*
Maximum subarray sum
*/

#include <iostream>
using namespace std;

int main(){
    int n = 5;
    int arr[7] = {3, -4, 5, 4, -1, 7, -8};

    // Brute force approach to print all possible subarray
    // for(int i=0; i<n; i++){
    //     for(int j=i; j<n; j++){
    //         for(int p=i; p<=j; p++){
    //             cout << arr[p];
    //         }
    //         cout << " ";
    //     }
    //     cout << endl;
    // }

    // brute force approach to calculate maximum subarray
    int maxSum = INT_FAST8_MIN;
    for(int i=0; i<n; i++){
        int curSum = 0;
        for(int j=i; j<n; j++){
            curSum += arr[j];
            maxSum = max(curSum, maxSum);
        }
    }
    cout << maxSum << endl;

    for(int st=0; st<n; st++)
    return 0;
}