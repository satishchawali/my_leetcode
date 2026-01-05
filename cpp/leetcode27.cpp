#include <vector>
using namespace std;
#include <iostream>

class Solution {
public:
  int removeElement(vector<int> &nums, int val) {
    int old_length = nums.size();
    int k = 0;
    for (int i = 0; i < nums.size(); i++) {
      if (nums[i] != val) {
        nums[k] = nums[i];
        k++;
      }
    }

    return k;
  }
};
int main() {
  Solution s;
  vector<int> nums = {3, 2, 2, 3};
  int val = 3;
  cout << s.removeElement(nums, val);
  return 0;
}