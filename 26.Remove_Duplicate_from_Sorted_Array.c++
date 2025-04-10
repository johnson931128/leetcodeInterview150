#include <iostream>
#include <vector>
using namespace std;

class Solution {
    public:
        int removeDuplicates(vector<int>& nums) {
            if (nums.empty()) return 0;
            int temp = nums[0];
            int count = 1;
            for(int i = 0; i < nums.size(); i++){
                if (nums[i] != temp){
                    nums[count] = nums[i];
                    count++;
                    temp = nums[i];
                }
            }
            return count;
        }
};