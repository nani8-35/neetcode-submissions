class Solution {
    unordered_map<char, int>mp;
public:
    bool isAnagram(string s, string t) {

        for(auto const&a:s) mp[a]++;
        for(auto const&b:t) mp[b]--;

        for(auto const&c:mp){
            if(c.second != 0 ) return false;
        }
        return true;
        
    }
};

