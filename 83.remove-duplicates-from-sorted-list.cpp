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
    ListNode* deleteDuplicates(ListNode* head) {
        if (head == nullptr) return nullptr;
        
        for(ListNode* cur = head; cur->next; ) {
            if (cur->next->val == cur->val)
                cur->next = cur->next->next;
            else
                cur = cur->next;
        }

        return head;
    }
};
