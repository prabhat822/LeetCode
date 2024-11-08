class Solution {
public:
    int strStr(string haystack, string needle) {
        int n=needle.size();
        if(n>haystack.size())
            return -1;
        for(int i=0;i<=haystack.size()-n;i++){
            //cout<<haystack.substr(i,n);
            if(haystack.substr(i,n)==needle)
                return i;
        }
        return -1;
        
    }
};