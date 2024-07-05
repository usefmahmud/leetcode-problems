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
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        vector<int> v;
        ListNode* p = head;
        head = head->next;

        int i = 1;
        while(head->next){
            if(
                (p->val > head->val && head->val < head->next->val) ||
                (p->val < head->val && head->val > head->next->val)
            ){
                v.push_back(i);
            }
            p = head;
            head = head->next;
            i++;
        }
        if(v.size() < 2){
            return { -1, -1 };
        }
        
        int m = INT_MAX;
        for(int i = 0; i < v.size() - 1; i++){
            m = min(v[i + 1] - v[i], m);
        }
        
        return {m, v.back() - v.front()};
    }
};