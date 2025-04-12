#include <iostream>
#include <vector>
using namespace std;

// if index = nums.size(), let index = 0 else +1

class Solution {
    public:
        void rotate(vector<int>& nums, int k) {
            int n = nums.size();
            vector<int> result(n);
            for(int i = 0; i < n; i++){
                result[(i + k)%n] = nums[i];
                // the final position nums[i] should be
            }
            nums = result;
        }
    };

/*
先反轉整個陣列

再反轉前 k 個元素

最後反轉剩下的元素
*/

/*
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k %= n;

        reverse(nums, 0, n - 1);       // Step 1: 整體反轉
        reverse(nums, 0, k - 1);       // Step 2: 前 k 個反轉
        reverse(nums, k, n - 1);       // Step 3: 後面的反轉
    }

private:
    void reverse(vector<int>& nums, int left, int right) {
        while (left < right) {
            swap(nums[left], nums[right]);
            left++;
            right--;
        }
    }
};
*/