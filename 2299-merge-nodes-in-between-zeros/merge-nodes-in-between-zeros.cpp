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
        head = head->next;
        ListNode* result = new ListNode(0);
        ListNode* currResult = result;
        while(head){
            if(head->val != 0){
                currResult->val += head->val;
                head = head->next;
            }else{
                head = head->next;
                if(head){
                    ListNode* tmp = new ListNode(0);
                    currResult->next = tmp;
                    currResult = currResult->next;
                }
            }
        }

        return result;
    }
};