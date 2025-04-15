// 一次走最遠 到了再走
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
    public:
        int jump(vector<int>& nums) {
            int step = 0;
            int nowPoint = 0;
            int mostFarPoint = 0;
    
            for (int i = 0; i < nums.size() - 1; i++){
                mostFarPoint = max(i + nums[i], mostFarPoint);
                if (i == nowPoint){
                    step++;
                    nowPoint = mostFarPoint;
                }
            }
            return step;
        }
    };