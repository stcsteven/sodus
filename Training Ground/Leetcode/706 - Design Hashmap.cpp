/*
    Category: Data Structure
*/

class Node{    
public:
    int key, value;
    Node* next;

    Node(int key, int value){
        this->key = key;
        this->value = value;
        this->next = NULL;
    }
    
    void updateValue(int value){
        this->value = value;
    }
};

class MyHashMap {
private:
    Node* head;
public:
    /** Initialize your data structure here. */
    MyHashMap() {
        head = NULL;
    }
    
    bool updateHead(int key, int value){
        if(head==NULL){
            head = new Node(key, value);
            return true;
        } else{
            if(head->key == key){
                head->value = value;
                return true;
            }
        }
        return false;
    }
    
    /** value will always be non-negative. */
    void put(int key, int value) {
        if(updateHead(key, value)) return;
        Node* now = head;
        bool is_new = true;
        while(now->next!=NULL){
            now = now->next;
            if(now->key==key){
                is_new = false;
                break;
            }
        } 
        if (is_new)
            now->next = new Node(key, value);
        else
            now->value = value;
        return;
    }
    
    /** Returns the value to which the specified key is mapped, or -1 if this map contains no mapping for the key */
    int get(int key) {
        Node* now = head;
        while(now!=NULL){
            if(now->key==key)
                return now->value;
            now = now->next;
        }
        return -1;
    }
    
    /** Removes the mapping of the specified value key if this map contains a mapping for the key */
    void remove(int key) {
        if(keyAtHead(key)) return;
        if(keyAtBody(key)) return;
        return;
    }
    
    bool keyAtHead(int key){
        if(head==NULL) return true;
        if(head->key == key){
            head = head->next;
            return true;        
        }
        return false;
    }
    
    bool keyAtBody(int key){
        Node* now = head;
        while(now!=NULL && now->next!=NULL){
            if(now->next->key==key){
                now->next = now->next->next;
                return true;
            }
            now = now->next;
        }
        return false;
    }
};

/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap* obj = new MyHashMap();
 * obj->put(key,value);
 * int param_2 = obj->get(key);
 * obj->remove(key);
 */