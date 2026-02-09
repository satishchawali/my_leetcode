
// Q1 Concatenation of array

/* Given an integer array nums of length n,
you want to create an array ans of length 2n where ans[i] == nums[i] and ans[i + n] == nums[i] for 0 <= i < n (0-indexed).
Specifically, ans is the concatenation of two nums arrays.
Return the array ans.

Example 1:
Input: nums = [1,2,1]
Output: [1,2,1,1,2,1]
Explanation: The array ans is formed as follows:
- ans = [nums[0],nums[1],nums[2],nums[0],nums[1],nums[2]]
- ans = [1,2,1,1,2,1]

Example 2:
Input: nums = [1,3,2,1]
Output: [1,3,2,1,1,3,2,1]
Explanation: The array ans is formed as follows:
- ans = [nums[0],nums[1],nums[2],nums[3],nums[0],nums[1],nums[2],nums[3]]
- ans = [1,3,2,1,1,3,2,1]
 
*/

using namespace std;
#include <iostream>
#include <vector>

class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        // Approach 1: create array with size 2n and iterate the input array two times and add each element to concatenate
        vector<int> ans;
        for(int j =0; j<2; j++){
            for(int i=0; i<nums.size(); i++){
            ans.push_back(i);
            }
        }
        return ans;
        

        // Approach 2: create array with size 2n and iterate the input array and add both i and n+i th elements in new array

    }

};

int main(){
    Solution s;
    vector<int> nums = {3, 2, 4, 5, 6};
    vector<int> ans = s.getConcatenation(nums);
    cout << "Concated array: "  << endl;
    for(int x: ans){
        cout << x << " ";
    }
    return 0;
}