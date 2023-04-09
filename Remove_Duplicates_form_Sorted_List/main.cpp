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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* tmp = new ListNode;
        ListNode* res = tmp;
        if (!head) {
            return head;
        }
        int start = head->val;
        tmp->val = start;
        while (head->next) {
            head = head->next;
            if (head->val != tmp->val) {
                tmp->next = new ListNode;
                tmp = tmp->next;
                tmp->val = head->val;
            }
        }
        return res;
    }
};