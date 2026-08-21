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
  ListNode* merge(ListNode* list1, ListNode* list2) {
        ListNode* a=list1;
        ListNode* b=list2;

        ListNode* temp=new ListNode(100);
        ListNode* temphead=temp;
        
        while(a!=NULL && b!=NULL){
            if(a->val<=b->val){
                temp->next=a;
                a=a->next;
            }else{
                temp->next=b;
                b=b->next;
            }
            temp=temp->next;
        }
        if(a!=NULL){
            temp->next=a;
        }
        if(b!=NULL){
            temp->next=b;
        }
    
        return temphead->next;
        
    }

    ListNode* sortList(ListNode* head) {

        if (head == NULL || head->next == NULL)
            return head;
        ListNode* slow=head;
        ListNode* fast=head;
        while(fast->next!=NULL && fast->next->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
        }
        
        ListNode*b=slow->next;
        slow->next=NULL;
        ListNode*a=head;
        a=sortList(a);
        b=sortList(b);
        ListNode*c=merge(a,b);
        return c;



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