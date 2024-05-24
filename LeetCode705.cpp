class MyHashSet {
public:
    vector<bool> vc;
    MyHashSet() {
        vc.resize(1e6+5,false);
    }
    
    void add(int key) {
        vc[key] = true;
    }
    
    void remove(int key) {
        vc[key] = false;
    }
    
    bool contains(int key) {
        return vc[key];
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */
