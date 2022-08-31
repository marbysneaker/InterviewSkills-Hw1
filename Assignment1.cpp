#include <iostream>
#include <vector>

// Example 1: 
// Input: nums = [2,7,11,15], target = 9 
// Output: [0,1] 
// Explanation: Because nums[0] + nums[1] == 9, we return [0, 1]. 

vector<int> twoSum(vector<int> nums; int target){
    for(int i =0; i< nums.size(); i++){
        for(int j = 1;nums.size(); j++){
            if(nums[i] + nums[j] == target){
                return {i, j};
            }
        }
    }
    return {-1,-1}
}


int main(){
  
}
