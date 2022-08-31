#include <iostream>
#include <vector>
using namespace std;

// 1)  Two Sum 
// Given an array of integers nums and an integer target, return indices of the two numbers such that 
// they add up to target. 
// You may assume that each input would have exactly one solution, and you may not use the same 
// element twice. 
// You can return the answer in any order. 
// Example 1: 
// Input: nums = [2,7,11,15], target = 9 
// Output: [0,1] 
// Explanation: Because nums[0] + nums[1] == 9, we return [0, 1]. 

vector<int> twoSum(vector<int> nums, int target) {
    vector<int> result;
    for (int i = 0; i < nums.size(); i++) {
        for (int j = 1; nums.size(); j++) {
            if (nums[i] + nums[j] == target) {
                cout<<i<<" "<<j<<endl;
                result.push_back(i);
                result.push_back(j);
            }
        }
    }
    return result;
}

// 3)  Median of Two Sorted Arrays 
// Given two sorted arrays nums1 and nums2 of size m and n respectively, return the median of the 
// two sorted arrays. The overall run time complexity should be O(log (m+n)). 
//  Example 1: 
// Input: nums1 = [1,3], nums2 = [2] 
// Output: 2.00000 
// Explanation: merged array = [1,2,3] and median is 2. 
// Example 2: 
// Input: nums1 = [1,2], nums2 = [3,4] 
// Output: 2.50000 
// Explanation: merged array = [1,2,3,4] and median is (2 + 3) / 2 = 2.5. 

 double findMedianSortedArrays(vector<int> nums1, vector<int> nums2) {
        int i = 0, j =0;
        int n1 = nums1.size(), n2 =nums2.size();
        vector<int>nums3;
        
        while(i<n1 && j< n2){
            
            if(nums1[i]<=nums2[j]){
                
                nums3.push_back(nums1[i]);
                i++;
                
            }
            else{
                
                nums3.push_back(nums2[j]);
                j++;
            }
        }
        
        while(i<n1){
            nums3.push_back(nums1[i]);
            i++;
            
        }
        while(j<n2){
            nums3.push_back(nums2[j]);
            j++;
        }
        cout<<nums3.size()<<endl;
        int mid = nums3.size()/2;
       if(nums3.size() % 2 == 0){
           return ((nums3[mid]+nums3[mid-1])/2.0);
       }
        return(nums3[mid]);
    }


int main(){
  
}
