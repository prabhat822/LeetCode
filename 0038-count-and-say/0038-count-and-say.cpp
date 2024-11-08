class Solution {
public:
    string countAndSay(int n) {
        if(n==1) return "1";
        if(n==2) return "11";
        string s="11";
        
        for(int i=3;i<=n;i++){
            s=s+"$";
            int count =1;
            string tmp="";
            for(int j=1;j<s.size();j++ ){
                if(s[j]!=s[j-1]){
                    tmp+=to_string(count);
                    tmp+=s[j-1];
                    count=1;
                }
                else{
                    count++;
                }
            }
            s=tmp;
            tmp="";

        }
        return s;
        
    }
};