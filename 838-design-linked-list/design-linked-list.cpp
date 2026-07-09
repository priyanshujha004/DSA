class MyLinkedList {
private:
    struct Node{
        int data;
        Node* next;
        Node(int val){
            data=val;
            next=NULL;
        }
    };
    Node* head; Node* tail; int size;
public:
    MyLinkedList() {
        head = NULL;
        tail = NULL;
        size=0;
    }
    
    int get(int index) {
        if(index<0 || index>=size) return -1;
        Node* temp = head;
        int idx = 0;

        while(temp!=NULL){
            if(idx==index){
                return temp->data;
            }
            temp=temp->next;
            idx++;
        }
        return -1;
    }
    
    void addAtHead(int val) {
    Node* newNode = new Node(val);
        if(head == NULL){
            head = tail = newNode;
        } else{
            newNode->next = head;
            head = newNode;
        }
        size++;
    }
    
    void addAtTail(int val) {
    Node* newNode = new Node(val);  
        if(head == NULL){
            head = tail = newNode;
        } else{
            tail->next = newNode;
            tail = newNode;
        }
        size++;
    }
    
    void addAtIndex(int index, int val) {
        if(index<0 || index>size) return;
        if(index==0) {
            addAtHead(val); 
            return;
        }
        if(index==size) {
            addAtTail(val);
            return;
        }
        Node* temp = head;
        for(int idx=0; idx<index-1 && temp!=NULL; idx++){
            temp=temp->next;
        }
        if(temp==NULL) return;
        
        Node* newNode = new Node(val);
        
        newNode->next = temp->next;
        temp->next = newNode;
        
        if(newNode->next == NULL) {
            tail = newNode;
        }
        size++;
    }
    
    void deleteAtIndex(int index) {
        if(index<0 || head==NULL || index>=size) return;
        if (index == 0) {
            Node* temp = head;
            head = head->next;
            if (head == NULL) tail = NULL;
            delete temp;
        } else {
            Node* temp = head;
            for (int i = 0; i < index - 1; i++) {
                temp = temp->next;
            }
            Node* toDelete = temp->next;
            temp->next = toDelete->next;
            if (toDelete == tail) {
                tail = temp;
            }
            delete toDelete;
        }
        size--;
    }
};

/**
 * Your MyLinkedList object will be instantiated and called as such:
 * MyLinkedList* obj = new MyLinkedList();
 * int param_1 = obj->get(index);
 * obj->addAtHead(val);
 * obj->addAtTail(val);
 * obj->addAtIndex(index,val);
 * obj->deleteAtIndex(index);
 */