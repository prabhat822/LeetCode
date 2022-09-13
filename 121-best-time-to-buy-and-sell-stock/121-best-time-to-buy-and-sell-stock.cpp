class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int a=INT_MAX;
        int b=0,c=0;
        int n=prices.size();
        for(int i=0;i<n;i++){
            if(prices[i]<a)
                a=prices[i];
            b=prices[i]-a;
            if(c<b)
                c=b;
        }
        return c;
    }
};