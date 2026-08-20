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
    ListNode* newnode(int value) {
        ListNode* nn = new ListNode(value);
        return nn;
    }
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {

        ListNode* n1 = l1;
        ListNode* n2 = l2;
        int carry =0;
        ListNode* dummynode = newnode(-1);
        ListNode* curr = dummynode;
        while(n1 != NULL || n2 != NULL){
            int sum = carry;
            if(n1) sum += n1->val;
            if(n2) sum += n2->val;
            ListNode* nn = newnode(sum%10);
            carry = sum/10;
            curr->next = nn;
            curr = curr->next;
            if(n1) n1 = n1->next;
            if(n2) n2 = n2->next;
        }

        if(carry){
            ListNode* nn = newnode (carry);
            curr->next = nn;

        }
        return dummynode->next;

        
    }
};