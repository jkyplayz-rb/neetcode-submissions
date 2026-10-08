class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length() != t.length()){
            return false;
        }
        vector<int> name(26, 0);
        for (int i = 0; i < s.length(); i++){
            name[s[i] - 'a']++;
            }

        for (int i = 0; i < t.length(); i++){
            name[t[i] - 'a']--;
            
            if (name[t[i] - 'a'] < 0){
                return false;
            }
        
        } 
        return true;
    }
};
