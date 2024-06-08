#include<bits/stdc++.h>
using namespace std;

class RandomizedSet{
    private:
        vector<int> v;

    public:
        RandomizedSet() : v{}{

        }

        int find_idx(vector<int> v, int val){
            for(int i=0; i<v.size(); i++){
                if(v[i] == val){
                    return i;
                }
            }
            return -1;
        }

        bool insert(int val){
            if(find_idx(v,val) == -1){
                v.push_back(val);
                return true;
            }
            return false;
        }

        bool remove(int val){  
            int idx = find_idx(v,val); 
            if(idx == -1){
                return false;
            }   
            v.erase(v.begin() + idx);
            return true;
        }

        int get_random(){
            int random = rand();
            return v[random%v.size()];
        }
};

int main(){
    RandomizedSet* obj = new RandomizedSet();
    int val = 100;
    bool param1 = obj->insert(val);
    bool param2 = obj->insert(val);
    int param3 = obj->get_random();
    cout << param1 << endl;
    cout << param2 << endl;
    cout << param3 << endl;
    return 0;
}