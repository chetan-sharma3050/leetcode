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

    ListNode* reverse(ListNode* head, int len) {
        ListNode* prev = NULL;
        ListNode* curr = head;

        while (curr != NULL && len--) {
            ListNode* next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }

        
        head->next = curr;

        return prev;
    }

    ListNode* reverseEvenLengthGroups(ListNode* head) {

        ListNode* dummy = new ListNode(0);
        dummy->next = head;

        ListNode* prev = dummy;
        int groupSize = 1;

        while (head != NULL) {

          
            ListNode* temp = head;
            int count = 0;

            while (temp != NULL && count < groupSize) {
                temp = temp->next;
                count++;
            }

           

            if (count % 2 == 0) {

                prev->next = reverse(head, count);

               
                prev = head;

            } else {

              
                prev = head;

                for (int i = 1; i < count; i++) {
                    prev = prev->next;
                }
            }

            head = temp;

            groupSize++;
        }

        return dummy->next;
    }
};