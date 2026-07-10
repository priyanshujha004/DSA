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
    ListNode* middleNode(ListNode* head) {
        // ListNode* temp = head;
        // int counter = 0;
        // while(temp!=NULL){
        //     counter++;
        //     temp=temp->next;
        // }
        // int middle = counter/2;
        // ListNode* curr = head; int idx = 0;
        // while(idx!=middle){
        //     idx++;
        //     curr=curr->next;
        // }
        // return curr;

        ListNode* slow = head;
        ListNode* fast = head;

        while(fast!=NULL && fast->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
        }
        return slow;
    }
};