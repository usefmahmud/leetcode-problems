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
        ListNode* curr = head->next;
        ListNode* result = new ListNode(0);
        ListNode* currResult = result;
        while(curr){
            if(curr->val != 0){
                currResult->val += curr->val;
                curr = curr->next;
            }else{
                curr = curr->next;
                if(curr){
                    ListNode* tmp = new ListNode(0);
                    currResult->next = tmp;
                    currResult = currResult->next;
                }
            }
        }

        return result;
    }
};