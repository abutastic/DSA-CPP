/*
Maximum subarray sum
*/

#include <iostream>
#include <vector>
using namespace std;

 // kadane's Algorithm
    // it says add element one by one, if currSum < 0 --> currSum = 0, iterate further
    int maxSubArray(vector<int>& nums){
        int currSum = 0, maxSum = INT16_MIN;

        for(int val : nums){
            currSum += val;
            maxSum = max(currSum, maxSum);
            if(currSum < 0){
                currSum = 0;
            }
        }

        return maxSum;
    }

    // single number
    int singleNumber(int arr[], int sz){
        int ans = 0;
        for(int i=0; i<sz; i++){
            ans ^= arr[i]; 
        }
        return ans;
    }

int main(){
    int n = 5;
    // int arr[7] = {3, -4, 5, 4, -1, 7, -8};
    int arr[7] = {1, 2, 3, 4, 5};

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
    // int maxSum = INT_FAST8_MIN;
    // for(int i=0; i<n; i++){
    //     int curSum = 0;
    //     for(int j=i; j<n; j++){
    //         curSum += arr[j];
    //         maxSum = max(curSum, maxSum);
    //     }
    // }
    // cout << maxSum << endl;

    vector<int> nums = {3, -4, 5, 4, -1, 7, -8};
    // cout << maxSubArray(nums) << endl;


    int ar[] = {4, 1, 1, 2, 2, 4, 5};
    int size = 7;
    cout << singleNumber(ar, size) << endl;
    
    
    return 0;
}