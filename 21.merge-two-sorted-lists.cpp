/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
private:
    void Insert(ListNode*& head, ListNode*& tail, ListNode* cur) {
        if (head == nullptr)
            head = tail = cur;
        else   
            tail = tail->next = cur;
    }
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode* curL1 = l1;
        ListNode* curL2 = l2;
        ListNode* head = nullptr;
        ListNode* tail = nullptr;

        while (curL1 && curL2) {
            if (curL1->val < curL2->val) {
                Insert(head, tail, curL1);
                curL1 = curL1->next;
            } else {
                Insert(head, tail, curL2);
                curL2 = curL2->next;
            }
        }

        if (curL1) 
            Insert(head, tail, curL1);
        else if (curL2)
            Insert(head, tail, curL2);

        return head;
    }
};
