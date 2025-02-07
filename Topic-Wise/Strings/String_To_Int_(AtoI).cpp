// https://leetcode.com/problems/string-to-integer-atoi/

class Solution {
public:
    int myAtoi(string s) {
        bool isleading = true, isnegative = false;
        long ans = 0;
        for(char c:s){
            if(isleading){
                if(c>='0' && c<='9'){
                    ans+=int(c-'0');
                    isleading = false;
                }
                else if(c == '-'){
                    isnegative = true;
                    isleading = false;
                }
                else if(c == ' '){
                    continue;
                }
                else if(c == '+')
                    isleading = false;
                else
                    break;
            }
            else{
                if(c<'0' || c>'9')
                    break;
                else{
                    ans = ans*10 + int(c-'0');
                    if(ans > INT_MAX && !isnegative){
                        return INT_MAX;
                    }
                    else if(ans > INT_MAX){
                        return INT_MIN;
                    }
                }
            }
        }
        return (isnegative ? -1*ans : ans);
    }
};
