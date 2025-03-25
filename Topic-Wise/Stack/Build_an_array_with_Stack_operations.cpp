// https://leetcode.com/problems/build-an-array-with-stack-operations/submissions/1585412656/?envType=problem-list-v2&envId=stack

class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        vector<string> ans;
        int j=0;
        for(int i=1;i<=n;i++){
            ans.push_back("Push");
            if(target[j]!=i){
                ans.push_back("Pop");
            }else{
                j++;
            }
            if(j == target.size()) break;
        }
        return ans;
    }
};
