#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// paiSum, Brute force approach
vector<int> pairSumBrute(vector<int> nums, int target){
    vector<int> ans;
    int n = nums.size();

    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(nums[i] + nums[j] == target){
                ans.push_back(i);
                ans.push_back(j);
                return ans;
            }
        }
    }

    return ans;
}

// Two pointer approach
vector<int> pairSum(vector<int> nums, int target){ // O(n)
    vector<int> ans;
    int n = nums.size();
    int i = 0, j = n-1;

    while(i < j){
        int pairSum = nums[i] + nums[j];
        if(pairSum > target){
            j--;
        } else if(pairSum < target){
            i++;
        }else{
            ans.push_back(i);
            ans.push_back(j);
            return ans;
        }
    }
    return ans;
}

// Majority Element
// An element in array must appear more than floor n/2 times
// Brute force approach
int majorityEl(vector<int> nums){
    int n = nums.size();
    for(int val : nums){
        int frequency = 0;
        for(int el : nums){
            if(el == val){
                frequency++;
            }
        }
        if(frequency > n/2){
            return val;
        }
    }
}


// Majority Element optimized approach by sorting the array
int majorityElSort(vector<int>& nums){
    int n = nums.size();
    int freq = 1;
    int ans = nums[0];
    // sort
    sort(nums.begin(), nums.end());
    for(int i=1; i<n; i++){
        if(nums[i] == nums[i-1]){
            freq++;
        }else{
            freq = 1;
            ans = nums[i];
        }

        if(freq > n/2){
            return ans;
        }
    }
    return -1;
}

// Moore's voting algorithm
// if same ++ if diff --, at the end the majority el will survive
int majorityElement(vector<int>& nums){
    int freq = 0, ans = 0;
    for(int i=0; i<nums.size(); i++){
        if(freq == 0){
            ans = nums[i];
        }
        if(ans == nums[i]){
            freq++;
        }else{
            freq--;
        }
    }
    return ans;
}


int main(){

    vector<int> nums = {3, 1, 3, 1, 1};
    // int target = 29;

    cout << majorityElement(nums) << endl;
    return 0;
}