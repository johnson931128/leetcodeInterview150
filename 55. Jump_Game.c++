#include <vector>
#include <algorithm>

class Solution {
    public:
        bool canJump(std::vector<int>& nums) {
            int farthest = 0;
            for (int i = 0; i < nums.size(); i++) {
                if (i > farthest) return false; // 我連這格都到不了，掛了
                farthest = std::max(farthest, i + nums[i]); // 更新最遠能跳的位置
            }
            return true; // 成功走完
        }
    };
    
    /*
    1. use i to record index
    2. plus most steps to i, and update farhest
    3. if i > farhest, means u are be stop at index(farhest)
    */
    