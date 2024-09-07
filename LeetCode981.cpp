class TimeMap {
public:
    map<string, vector<pair<string, int>>> mp;

    TimeMap() {
        
    }
    
    void set(string key, string value, int timestamp) {
        mp[key].push_back(make_pair(value, timestamp));
    }
    
    string get(string key, int timestamp) {
        if(!mp.count(key)) {
            return "";
        }

        int low = 0, high = mp[key].size() - 1;

        while(low <= high) {
            int mid = low + (high-low) / 2;

            if(mp[key][mid].second == timestamp) {
                return mp[key][mid].first;
            } else if (mp[key][mid].second > timestamp) {
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }

        if(high >= 0) {
            return mp[key][high].first;
        }

        return "";
    }
};

/**
 * Your TimeMap object will be instantiated and called as such:
 * TimeMap* obj = new TimeMap();
 * obj->set(key,value,timestamp);
 * string param_2 = obj->get(key,timestamp);
 */
