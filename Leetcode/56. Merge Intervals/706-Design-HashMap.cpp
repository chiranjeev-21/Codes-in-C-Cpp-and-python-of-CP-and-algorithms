class Node{
public:
    int key;
    int val;
    Node* next;

    Node(int key=-1, int val=-1, Node* next=nullptr){
        this->key=key;
        this->val=val;
        this->next=next;
    }
};

class MyHashMap {
private:
    vector<Node*>map;
public:
    MyHashMap() {
        map.resize(1000);
        for(int i=0;i<1000;i++){
            map[i] = new Node();
        }
    }

    int hash(int key){
        return key%1000;
    }
    
    void put(int key, int value) {
        int hash_key = hash(key);
        Node* cur = map[hash_key];

        while (cur->next) {
            if (cur->next->key == key) {
                cur->next->val = value;
                return;
            }
            cur = cur->next;
        }

        cur->next = new Node(key, value);
    }
    
    int get(int key) {
        int val = hash(key);
        Node* curr = map[val];
        while(curr!=NULL){
            if(curr->key==key){
                return curr->val;
            }
            curr=curr->next;
        }
        return -1;
    }
    
    void remove(int key) {
        int val = hash(key);
        Node* curr = map[val];
        Node* temp=curr;
        while(curr->next){
            if(curr->next->key==key){
                Node*temp = curr->next;
                curr->next=temp->next;
                delete temp;
                return;
            }
            curr=curr->next;
        }
    }
};

/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap* obj = new MyHashMap();
 * obj->put(key,value);
 * int param_2 = obj->get(key);
 * obj->remove(key);
 */