class MyHashSet {
private:
    vector<int> vect;
public:
    MyHashSet() {}
    
    void add(int key) {
        for(auto x: vect) if(x == key) return;
        vect.push_back(key);
    }
    
    void remove(int key) {
        for(int i = 0; i < vect.size(); i++)
            if(vect[i] == key) vect.erase(vect.begin() + i);
    }
    
    bool contains(int key) {
        for(auto x: vect) if(x == key) return true;
        return false;
    }
};