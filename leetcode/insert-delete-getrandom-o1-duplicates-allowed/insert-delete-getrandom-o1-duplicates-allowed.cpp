class RandomizedCollection {

    map<int,priority_queue<int>> m;
    vector<int> v;

public:
    RandomizedCollection() {
        
    }
    
    bool insert(int val) {
        m[val].push(v.size());
        v.push_back(val);

        return m[val].size() == 1;
    }
    
    bool remove(int val) {
        if(m.find(val)!=m.end()){
            int i = m[val].top();
            m[val].pop();
            if(m[val].empty()) m.erase(val);



            if(i==v.size()-1){
                v.erase(v.begin()+i);
            }
            else{
                v[i] = v[v.size()-1];
                v.erase(v.begin() + v.size()-1);

                m[v[i]].pop();
                m[v[i]].push(i);
            }



            return true;
        }
        return false;
    }
    
    int getRandom() {
        return v[rand() % v.size()];
    }
};

/**
 * Your RandomizedCollection object will be instantiated and called as such:
 * RandomizedCollection* obj = new RandomizedCollection();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */