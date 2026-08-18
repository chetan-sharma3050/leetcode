/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        
        ListNode* A = headA;
        ListNode* B = headB;

        int lenA = 0;
        int lenB = 0;

        
        while (A != NULL) {
            lenA++;
            A = A->next;
        }

        
        while (B != NULL) {
            lenB++;
            B = B->next;
        }

        A = headA;
        B = headB;

        int k = abs(lenA - lenB);

        
        if (lenA >= lenB) {
            for (int i = 0; i < k; i++) {
                A = A->next;
            }
        }
        else {
            for (int i = 0; i < k; i++) {
                B = B->next;
            }
        }

        
        while (A != NULL && B != NULL) {
            if (A == B) {
                return A;
            }

            A = A->next;
            B = B->next;
        }

        return NULL;
    }
};