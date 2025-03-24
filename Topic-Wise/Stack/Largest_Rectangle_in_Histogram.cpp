// https://leetcode.com/problems/largest-rectangle-in-histogram/?envType=problem-list-v2&envId=stack

class Solution {
private:
vector<int> nextSmallerElement(vector<int> &arr, int n)
{
    stack<int> stk;
    vector<int> ans(n);
    stk.push(-1);
    for(int i=n-1;i>=0;i--){
        while(stk.top()!=-1 && arr[stk.top()]>=arr[i]){
            stk.pop();
        }
        ans[i] = stk.top();
        stk.push(i);
    }
    return ans;
}

vector<int> prevSmallerElement(vector<int> &arr, int n)
{
    stack<int> stk;
    vector<int> ans(n);
    stk.push(-1);
    for(int i=0;i<n;i++){
        while(stk.top()!=-1 && arr[stk.top()]>=arr[i]){
            stk.pop();
        }
        ans[i] = stk.top();
        stk.push(i);
    }
    return ans;
}

public:
    int largestRectangleArea(vector<int>& h) {
        int n = h.size(), ans = 0;

        vector<int> next(n);
        next = nextSmallerElement(h, n);

        vector<int> prev(n);
        prev = prevSmallerElement(h, n);


        for(int i=0;i<n;i++){
            int l = h[i];
            if(next[i] == -1) next[i] = n;
            int b = next[i] - prev[i] - 1;
            int area = l*b;

            ans = max(area,ans);

        }
        return ans;
    }
};
