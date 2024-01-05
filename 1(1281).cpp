//https://leetcode.com/problems/subtract-the-product-and-sum-of-digits-of-an-integer/
class Solution {
public:
    int subtractProductAndSum(int n) {
        int sum = 0, pro = 1;
        while(n!=0){
            int temp = n%10;
            n/=10;
            sum+=temp;
            pro*=temp;
        }
        return pro-sum;
    }
};