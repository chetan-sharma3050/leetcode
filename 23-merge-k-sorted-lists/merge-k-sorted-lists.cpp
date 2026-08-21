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

    ListNode* mergeKLists(vector<ListNode*>& arr) {
    if(arr.size()==0) return NULL;
    while(arr.size()>1){
        ListNode*a=arr[0];
        arr.erase(arr.begin());
        ListNode* b=arr[0];
        arr.erase(arr.begin());
        ListNode*c=merge(a,b);
        arr.push_back(c);


    }
    return arr[0];
        

        
    }
};