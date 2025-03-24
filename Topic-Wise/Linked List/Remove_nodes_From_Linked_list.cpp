// https://leetcode.com/problems/remove-nodes-from-linked-list/?envType=problem-list-v2&envId=stack

class Solution {
public:
    ListNode* removeNodes(ListNode* head) {
        vector<int> arr;
        while (head != nullptr) {
            arr.push_back(head->val);
            head = head->next;
        }

        int n = arr.size();
        stack<int> stk;
        ListNode* ans = nullptr;

        for (int i = n - 1; i >= 0; i--) {
            if (stk.empty() || stk.top() <= arr[i]) {
                ListNode* temp = new ListNode(arr[i]);
                temp->next = ans;
                ans = temp;
                stk.push(arr[i]);
            }
        }
        return ans;
    }
};
