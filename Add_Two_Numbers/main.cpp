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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* res = new ListNode{};
        ListNode* cur = res;
        int sums{};
        int cnt{};
        while (l1 || l2 || cnt) {
            sums = cnt;
            if (l1) {
                sums += l1->val;
                l1 = l1->next;
            }
            if (l2) {
                sums += l2->val;
                l2 = l2->next;
            }
            cnt = sums / 10;
            cur->next = new ListNode{ sums % 10 };
            cur = cur->next;
        }
        return res->next;
    }
};