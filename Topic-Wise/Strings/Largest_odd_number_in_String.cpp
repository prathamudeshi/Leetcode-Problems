//https://leetcode.com/problems/largest-odd-number-in-string/

class Solution {
public:
    string largestOddNumber(string num) {
        for(int i = num.size() - 1; i>=0; i--){
            if(int(num[i])%2 == 1)
                return num;
            num.erase(i);
        }
        return "";
    }
};
