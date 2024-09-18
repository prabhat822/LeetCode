class Solution {
public:
    string largestNumber(vector<int>& nums) {
        vector<string> tmp;
        for(int it:nums){
            tmp.push_back(to_string(it));
        }
        sort(tmp.begin(),tmp.end(),[](const string &a,const string &b){
            return (b+a)<(a+b);
        });
        if(tmp[0]=="0")
            return "0";

        string ans;
        for(auto it:tmp)
            ans+=it;
        return ans;
    }

};