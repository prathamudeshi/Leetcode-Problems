// https://leetcode.com/submissions/detail/1513411340/

class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        for(int i=0;i<1<<nums.size(); i++){
            vector<int> temp;
            int c = i;
            for(int j=0;j<nums.size(); j++){
                if(c&1) temp.push_back(nums[j]);
                c >>= 1;
            }
            ans.push_back(temp);
        }
        return ans;
    }
};
