class Solution {
public:
    string freqAlphabets(string s) {
        int i=s.length()-1, j=i;
        string ans="";
        for(;i>=0;i--,j--){
            if(s[i]=='#'){
                s[j]='a'+(s[i-2]-'0')*10+ (s[i-1]-'0')-1;
                i-=2;
            }
            else{
                s[j]='a'+s[i]-'0'-1;
                
            }
            ans+=s[j];
        }
        // return s.substr(j+1,s.length()-1);
        reverse(ans.begin(),ans.end());
        return ans;

    }
};