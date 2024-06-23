class RandomizedSet {
public:
    set<int>s;
    RandomizedSet() {
       
    }
    
    bool insert(int val) {
        if(s.count(val)) {
            return false;
        } else {
            s.insert(val);
            return true;
        }
   
    }
    
    bool remove(int val) {
       if(s.count(val)) {
           s.erase(val);
           return true;
       } else {
            return false;
        }
    }
    
    int getRandom() {
        return *next(s.begin(),rand()%s.size());
    }
};
