class LRUCache {
private:

    // 1. Data Structures Used

    //  -> Unordered Map (unordered_map):

    //     Maps a key (int) to a pair:
    //     The value (int) associated with the key.
    //     An iterator to the key's position in the list (to quickly update the usage order).
    //     Lookup, insertion, and deletion in O(1) time.

    //  -> List (list):

    //     A doubly linked list that maintains the order of keys based on usage.
    //     The front of the list represents the least recently used (LRU) key.
    //     The back of the list represents the most recently used (MRU) key.
    //     Provides O(1) time complexity for insertion and deletion of elements.

    // 2. get function
    //     Checks if the key exists in the cache:
    //     If it exists:
    //     Remove the key's current position in the order list.
    //     Move the key to the back of the order list (to indicate it's the most recently used).
    //     Update the iterator (g[key].second) to point to the key's new position.
    //     Return the value associated with the key (g[key].first).
    //     If it doesn't exist:
    //     Return -1 (key not found).

    // 3. put function
    //     Handles adding or updating keys in the cache:
    //     If the key already exists:
    //     Remove its current position in the order list (to update its position).
    //     If the key doesn't exist and the cache is full:
    //     Remove the least recently used key:
    //     Get the LRU key using order.front().
    //     Remove it from the order list (pop_front()).
    //     Remove it from the unordered_map (g.erase(k)).
    //     Add the new key:
    //     Push it to the back of the order list (most recently used).
    //     Insert its value and position into the unordered_map.


    unordered_map<int,pair<int,list<int>::iterator>>g; //int = key, int (second) = value, list<int> = pointer to list
    int capacity; //how much keys can it hold
    list<int> order; //refers to pointer to list
public:
    LRUCache(int capacity) {
        this -> capacity = capacity; //e.g 2 means 2 keys can only be used
    }
    int get(int key) {
        if (g.find(key) != g.end()) {
            order.erase(g[key].second);//remove pointers from front (least recent used)
            order.push_back(key); //move key to back
            g[key].second = --order.end();//adds pointer to back (indicate most recent used). \--\ means one step back so that it does not go \over-end-of-list\
            return g[key].first; //return value
        }
        else {
            return -1;
        }
    }
    
    void put(int key, int value) {
        if (g.find(key) != g.end()) {
            order.erase(g[key].second); //remove current pointer if key exist
        }
        else if (g.size() == capacity) { //else if = check for additional conditions 
            int k = order.front(); //obtain least used key
            order.pop_front(); //remove least used key
            g.erase(k); //remove pointer for least used key
        }
        order.push_back(key); //push key to end of list (indicate most used)
        g[key] = {value, --order.end()}; //insert key, value and pointer to list
    }
};

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */