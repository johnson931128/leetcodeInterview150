#include <vector>
#include <algorithm>
using namespace std;

/*class Solution {
public:
    int hIndex(vector<int>& citations) {
        sort(citations.begin(), citations.end(), greater<int>()); // 降冪排序
        int h = 0;
        for (int i = 0; i < citations.size(); i++) {
            if (citations[i] >= i + 1) {
                h = i + 1; // 至少有 i+1 篇，每篇引用 ≥ i+1
            } else {
                break;
            }
        }
        return h;
    }
};
*/
class Solution {
    public:
        int hIndex(vector<int>& citations) {
            int n = citations.size();
            int h = 0;
    
            // 嘗試從 1 到 n 的每一個 h 值，找出最大可行的 h
            for (int possibleH = 1; possibleH <= n; possibleH++) {
                int count = 0;
                for (int i = 0; i < n; i++) {
                    if (citations[i] >= possibleH) {
                        count++;
                    }
                }
                if (count >= possibleH) {
                    h = possibleH; // 目前這個 h 可行，更新最大值
                }
            }
    
            return h;
        }
    };
    
    