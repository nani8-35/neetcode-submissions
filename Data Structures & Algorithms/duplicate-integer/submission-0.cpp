class Solution {
    unordered_set<int> s;

public:
    bool hasDuplicate(vector<int>& nums) {
        for(int n:nums){
            if(s.find(n) != s.end()){
                return true;
            }
            s.insert(n);


        }
        return false;

    }
};