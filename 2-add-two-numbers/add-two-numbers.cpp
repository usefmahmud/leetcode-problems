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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int rem = 0;
        ListNode* result = new ListNode();
        ListNode* curr = result;
        while(l1 || l2 || rem){
            int d = rem;
            if(l1) d += l1->val, l1 = l1->next;
            if(l2) d += l2->val, l2 = l2->next;

            curr->next = new ListNode(d%10);
            curr = curr->next;
            rem = d/10;
        }

        return result->next;
    }
};