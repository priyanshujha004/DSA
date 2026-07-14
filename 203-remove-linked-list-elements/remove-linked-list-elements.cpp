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
    ListNode* removeElements(ListNode* head, int val) {
        if(head==NULL) return head;
        else{
            ListNode* temp = head;
            while(temp!=NULL){
                if(temp->val==val && temp==head){
                    ListNode* del = head;
                    head=head->next;
                    temp=temp->next; 
                    del->next=NULL;
                    delete del;  
                }
                else if(temp->val==val){
                    ListNode* prev = head;
                    ListNode* curr = temp;
                    while(prev->next!=temp){
                        prev=prev->next;
                    }
                    temp=temp->next;
                    prev->next=curr->next;
                    curr->next=NULL;
                    delete curr;
                }
                else {
                    temp=temp->next;
                }
            }
        }
        return head;
    }
};