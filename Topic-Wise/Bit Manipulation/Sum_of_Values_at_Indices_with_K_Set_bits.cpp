// https://leetcode.com/problems/sum-of-values-at-indices-with-k-set-bits/description/?envType=problem-list-v2&envId=bit-manipulation

class Solution {
public:
    int sumIndicesWithKSetBits(vector<int>& nums, int k) {
        long long ans = 0;
        for(int i=0;i<nums.size();i++){
            if(__builtin_popcount(i) == k)
                ans += nums[i];
        }
        return ans;
    }
};
