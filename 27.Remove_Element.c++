#include <iostream>
#include <vector>

class Solution {
    public:
        int removeElement(std::vector<int>& nums, int val) {
        // 如果不是val就往前移 k++
        int k = 0;
        for(int i = 0; i < nums.size(); i++){
            if (nums[i]!=val){
                nums[k]=nums[i];
                k++;
            }
        }
        return k;
    }
};