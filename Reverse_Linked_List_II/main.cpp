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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        ListNode* first = nullptr;
        ListNode* now = head;
        for (size_t i = 0; i < left - 1; ++i) {
            first = now;
            now = now->next;
        }
        ListNode* firstTmp = first;
        ListNode* nowTmp = now;
        ListNode* nextNode = nullptr;
        for (size_t i = left; i <= right; ++i) {
            nextNode = now->next;
            now->next = first;
            first = now;
            now = nextNode;
        }
        nowTmp->next = nextNode;
        if (firstTmp) {
            firstTmp->next = first;
        }
        else {
            head = first;
        }
        return head;
    }
};