class Solution {
public:
    bool isAnagram(string s, string t) {
        int count[26]={0};
        for(auto it:s){
            count[it-'a']++;
        }
        for(auto it:t){
            count[it-'a']--;
        }
        for(auto it:count){
            if(it!=0)
                return false;
        }
        return true;
    }
};