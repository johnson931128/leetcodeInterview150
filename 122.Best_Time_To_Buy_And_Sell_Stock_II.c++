// 明天比今天高就賣
#include <vector>
using namespace std;

class Solution {
    public:
        int maxProfit(vector<int>& prices) {
            int i = 0;
            int sum = 0;
            int temp = prices[0];
    
            while (i < prices.size()-1){
                if (prices[i+1] > prices[i]){
                    sum = sum + (prices[i + 1] - prices[i]);
                }
                i++;
            }
            return sum;
        }
    };