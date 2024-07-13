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
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        if(!head->next) return head;
        ListNode* curr = head;
        while(curr && curr->next){
            ListNode* g = new ListNode(__gcd(curr->val, curr->next->val));
            ListNode* tmp = curr->next;
            curr->next = g;
            g->next = tmp;

            curr = g->next;
        }
        return head;
    }
};