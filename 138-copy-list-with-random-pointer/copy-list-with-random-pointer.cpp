/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        if(head==NULL) return NULL;
        Node* newHead = new Node(head->val);
        unordered_map<Node*, Node*> mp;

        mp[head] = newHead;
        Node* oldtemp = head->next;
        Node* newtemp = newHead;

        while(oldtemp!=NULL){
            Node* copyNode = new Node(oldtemp->val);
            mp[oldtemp] = copyNode;
            newtemp->next = copyNode;
            oldtemp = oldtemp->next;
            newtemp = newtemp->next;
        }
        oldtemp = head; newtemp = newHead;
        while(oldtemp!=NULL){
            newtemp->random = mp[oldtemp->random];
            oldtemp = oldtemp->next;
            newtemp = newtemp->next; 
        }
        return newHead;
    }
};