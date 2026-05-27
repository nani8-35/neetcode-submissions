class Solution {
public:
    bool isAnagram(string s, string t) {
        // edge case 
        if(s.size() != t.size()){
            return false;
        }
        //freequency count

        int count[26] ={0};

        for( int i =0; i< s.size();i++){
            count[s[i] - 'a']++;
            count[t[i] - 'a']--;
        }

        for( int i =0; i< 26; i++){
            if(count[i] != 0){
                return false;
            }
        }
        return true ;

        
    }
};
