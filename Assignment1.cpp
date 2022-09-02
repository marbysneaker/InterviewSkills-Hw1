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

// 2)  Find First and Last Position of Element in Sorted Array. 
// Given an array of integers nums sorted in non-decreasing order, find the starting and ending 
// position of a given target value. If target is not found in the array, return [-1, -1]. 
// You must write an algorithm with O(log n) runtime complexity. 
//  Example 1: 
// Input: nums = [5,7,7,8,8,10], target = 8 
// Output: [3,4] 
// Example 2: 
// Input: nums = [5,7,7,8,8,10], target = 6 
// Output: [-1,-1] 
// Example 3: 
// Input: nums = [], target = 0 


vector<int> searchRange(vector<int>& nums, int target) {
        
        int low = 0, high = nums.size();
        vector<int>result;
        if(nums.empty()){
             return{-1,-1};
         }
        if(nums.size()<2 && target == nums[0]){
            return{0,0};
        }
        
        
        while(low<high){
           int mid = low + (high - low) / 2;

            if (nums[mid] == target){
              result.push_back(mid);
              while(nums[mid] == target){
                  mid++;
              }
              result.push_back(--mid);
              return result;
            }

            if (nums[mid] < target)
              low = mid + 1;

            else
              high = mid - 1;
        }
        return{-1,-1};
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

// 4)  Remove Nth Node From End of List Given the head of a linked list, remove the nth node from the end of the list and return its head. 
 
// Example 1: 
// Input: head = [1], n = 1 
// Output: [] 
// Example 2: 
// Input: head = [1,2], n = 1 
// Output: [1]
ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* curr = head;
        ListNode* curr1 = head;
        int count = 0;
        if(curr->next ==nullptr){
            return nullptr;
        }
        while(curr){
            count++;
            curr = curr->next;
        }
        count = count - n;
        if(count ==0){
            return head->next;
        }
        for(int i = 1; i<count;i++)
            curr1 = curr1->next;
        curr1->next = curr1->next->next;
        return head;
            
    }
// 5)  Merge k Sorted Lists 
// You are given an array of k linked-lists lists, each linked-list is sorted in ascending order. 
// Merge all the linked-lists into one sorted linked-list and return it. 
// Example 1: 
// Input: lists = [[1,4,5],[1,3,4],[2,6]] 
// Output: [1,1,2,3,4,4,5,6] 
// Explanation: The linked-lists are: 
// [ 
//   1->4->5, 
//   1->3->4, 
//   2->6 
// ] 
// merging them into one sorted list: 
// 1->1->2->3->4->4->5->6 
// Example 2: 
// Input: lists = [] 
// Output: [] 

int main(){
  
}
