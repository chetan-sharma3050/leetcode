/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* sortList(ListNode* head) {

        if (head == NULL || head->next == NULL)
            return head;

        vector<int> arr;

        
        ListNode* t = head;

        while (t != NULL) {
            arr.push_back(t->val);
            t = t->next;
        }

        
        sort(arr.begin(), arr.end());

        
        t = head;
        int i = 0;

        while (t != NULL) {
            t->val = arr[i];
            i++;
            t = t->next;
        }

        return head;
    }
};