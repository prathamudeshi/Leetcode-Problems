// https://leetcode.com/problems/longest-common-prefix/solutions/6327090/c-optimizedeasy-beats-100-by-pratham9114-wizf/

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans="";
        sort(strs.begin(), strs.end());
        int n=strs.size();
        string first = strs[0], last = strs[n-1];
        for(int i=0; i<min(first.size(), last.size());i++){
            if(first[i]!=last[i]){
                return ans;
            }
            ans+=first[i];
        }
        return ans;
    }
};
