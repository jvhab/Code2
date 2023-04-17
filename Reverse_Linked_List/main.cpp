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
    ListNode* reverseList(ListNode* head) {
        ListNode* now = head;
        ListNode* res = nullptr;
        while (now != nullptr) {
            ListNode* next = now->next;
            now->next = res;
            res = now;
            now = next;
        }
        return res;
    }
};