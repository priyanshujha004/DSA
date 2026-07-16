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
        if (l1 == NULL && l2 == NULL) return NULL;

        ListNode* first = l1;
        ListNode* second = l2;
        ListNode* newHead = NULL;
        int carry = 0;

        int val1 = (first != NULL) ? first->val : 0;
        int val2 = (second != NULL) ? second->val : 0;
        int sum = val1 + val2;

        if (sum >= 10) {
            newHead = new ListNode(sum % 10);
            carry = sum / 10;
        } else {
            newHead = new ListNode(sum);
            carry = 0;
        }

        ListNode* next1 = (first != NULL) ? first->next : NULL;
        ListNode* next2 = (second != NULL) ? second->next : NULL;

        if (carry > 0) {
            if (next1 != NULL) {
                next1->val += carry;
            } else if (next2 != NULL) {
                next2->val += carry;
            } else {
                next1 = new ListNode(carry);
            }
        }

        newHead->next = addTwoNumbers(next1, next2);

        return newHead;
    }
};