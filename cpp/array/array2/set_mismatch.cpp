/*
Q1. Set Mismatch
You have a set of integers s, which originally contains all the numbers from 1 to n. Unfortunately,
 due to some error, one of the numbers in s got duplicated to another number in the set,
 which results in repetition of one number and loss of another number.
You are given an integer array nums representing the data status of this set after the error.
Find the number that occurs twice and the number that is missing and return them in the form of an array.

Example 1:
Input: nums = [1,2,2,4]
Output: [2,3]

Example 2:
Input: nums = [1,1]
Output: [1,2]

Output should : [duplicate, missing]
*/
using namespace std;
#include <iostream>
#include <vector>
#include <unordered_map>
class Solution{
public:
    vector<int> findErrorNums(vector<int>& nums){
        int n = nums.size();
        int duplicate;
        int missing;
        unordered_map<int, int> nums_count;
        for(auto const& num: nums){
            nums_count[num]++;
        }
        for(int i=1; i<=n; i++){
            if(nums_count[i] == 2) duplicate = i;
            if(nums_count[i] == 0) missing = i;
        }
        return {duplicate, missing};

    }
};

int main(){
    Solution s;
    // vector<int> nums = {1, 2, 3, 3, 5};
    // vector<int> nums = {1, 1, 3, 4};
    // vector<int> nums = [1, 2, 3, 4, 4];
    // vector<int> nums = [1, 1];
    vector<int> nums = {5, 4, 3, 3, 1};
    vector<int> ans = s.findErrorNums(nums);
    cout << "dulicated: " << ans[0] << endl;
    cout << "missing: " << ans[1];
}