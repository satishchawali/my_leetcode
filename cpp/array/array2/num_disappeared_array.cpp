/* Q3. Find All Numbers Disappeared in an Array
Given an array nums of n integers where nums[i] is in the range [1, n],
return an array of all the integers in the range [1, n] that do not appear in nums.

Example 1:
Input: nums = [4,3,2,7,8,2,3,1]
Output: [5,6]

Example 2:
Input: nums = [1,1]
Output: [2]
*/
using namespace std;
#include <iostream>
#include <map>
#include <vector>

class Solution{

public: 
    vector<int> findDisappearedNumbers(vector<int>& nums){
        map<int, int> count;
        vector<int> ans;
        for(auto const& num : nums){
            count[num]++;
        }
        for(int i=1; i<=nums.size(); i++){
            if(count[i]==0){
                ans.push_back(i);
            }
        }
        return ans;
    }
};

int main(){
    Solution s;
    vector<int> nums = {4,3,2,7,8,2,3,1};
    vector<int> ans = s.findDisappearedNumbers(nums);
    for(int x: ans){
        cout << x << " ";
    }

    return 0;
}