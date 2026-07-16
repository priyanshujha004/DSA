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
    ListNode* swapPairs(ListNode* head) {
        if(head==NULL || head->next==NULL) return head;

        ListNode* prev = NULL;
        ListNode* first = head;
        ListNode* second = head->next;

        while(first!=NULL && second!=NULL){
            ListNode* nextFirst = second->next;
            second->next=first;
            first->next=nextFirst;
            if(prev!=NULL) prev->next=second; else head=second;
            prev = first;
            first = nextFirst;
            if(nextFirst!=NULL) second = nextFirst->next; else second=NULL;
        }
        return head;
    }
};