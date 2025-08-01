#include <iostream>
#include <vector>
using namespace std;

//single number #136
int singleNumber(vector<int>& nums){
    int ans = 0;
    for(int val : nums){
        ans ^= val;
    }
    return ans;
}

void reverseVec(vector<int>& nums){
    int left = 0;
    int right = nums.size() - 1;
    
    while(left < right){
        swap(nums[left], nums[right]);
        left++;
        right--;
    }
}

// single number using brute-force, nested loops
int nestedSingleNumber(vector<int>& nums){
    for(int i=0; i<nums.size(); i++){
        int count = 0;
        for(int j=0; j<nums.size(); j++){
            if(nums[i] == nums[j]){
                count++;
            }
        }

        if(count == 1){
            return nums[i];
        }
    }

    return -1; // if input invalid
}

int main(){
    // vector<int> vec(3,0); // [0, 0, 0]
    // vector<int> vec;

    // vec.push_back(25); // adds el at last
    // vec.push_back(67); // 
    // vec.push_back(2); 
    // cout << vec.size() << endl; // prints size
    // cout << vec.front() << endl; // prints first el
    // cout << vec.back() << endl; // prints last el

    // vec.pop_back(); // removes value from last 
    // cout << vec.at(1) << endl; // prints idx value

    

    // // forEach loop
    // for(int val : vec){ //
    //     cout << val << endl;
    // }

    vector<int> nums = {1,1,2,2,4};
    cout << nestedSingleNumber(nums) << endl;
    
    return 0;
}