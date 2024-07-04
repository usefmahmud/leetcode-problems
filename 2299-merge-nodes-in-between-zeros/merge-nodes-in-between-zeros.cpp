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
    ListNode* mergeNodes(ListNode* head) {
        ListNode* change = head;
        ListNode* curr = change->next;
        while(curr){
            int r = 0;

            while(curr->val != 0){
                r += curr->val;
                curr = curr->next;
            }
            curr = curr->next;

            change->val = r;
            
            change->next = curr;
            change = change->next;
        }
        return head;
    }
};