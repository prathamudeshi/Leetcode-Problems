// https://leetcode.com/problems/add-binary/submissions/1513306344/?envType=problem-list-v2&envId=bit-manipulation

class Solution {
public:
    string addBinary(string a, string b) {
        string ans = "";
        int carry = 0, i = a.size()-1, j = b.size()-1;
        
        while(i>=0 || j>=0 || carry){
            if(i>=0)
                carry += a[i--] - '0';
            if(j>=0)
                carry += b[j--] - '0';
            ans += carry%2 + '0';
            carry /=2 ;
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};
