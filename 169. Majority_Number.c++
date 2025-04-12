// By Boyer-Moore Voting Algorithm
#include <iostream>
#include <vector>
using namespace std;
class Solution {
    public:
        int majorityElement(vector<int>& nums) {
            // if num not be count, candidate = num
            // if num == cadidate, count++ else count--
            // since The majority element is the element that appears more than ⌊n / 2⌋ times.
            int count = 0;
            int candidate;
            for(int num : nums){
                if (count == 0){
                    candidate = num;
                }
                if (num == candidate){
                    count++;
                }else{
                    count--;
                }
            }
            return candidate;
        }
    };