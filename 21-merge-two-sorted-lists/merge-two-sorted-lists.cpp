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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* a=list1;
        ListNode* b=list2;

        ListNode* temp=new ListNode(100);
        ListNode* temphead=temp;
        if(list1==NULL){
            return list2;
        }
        if(list2==NULL){
            return list1;
        }
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
        while(a!=NULL){
            temp->next=a;
            a=a->next;
            temp=temp->next;
        }
        while(b!=NULL){
            temp->next=b;
            b=b->next;
            temp=temp->next;
        }
        temphead=temphead->next;
        return temphead;
    }
};