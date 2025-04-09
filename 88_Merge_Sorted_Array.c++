#include <iostream>
#include <vector>
using namespace std;
class Solution {
    public:
        void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
            int i = m - 1;         // nums1 的最後有效元素
            int j = n - 1;         // nums2 的最後元素
            int k = m + n - 1;     // nums1 的最後空位
            
            // 從後往前填 nums1
            while (i >= 0 && j >= 0) {
                if (nums1[i] > nums2[j]) {
                    nums1[k--] = nums1[i--];
                } else {
                    nums1[k--] = nums2[j--];
                }
            }
    
            // 如果 nums2 還有剩下的，把它們塞進 nums1 開頭
            while (j >= 0) {
                nums1[k--] = nums2[j--];
            }
            // 如果 nums1 有剩的，不用處理，因為已經在正確位置上了
        }
    };
    