class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {
        int m=grid.size();
        int n=grid[0].size();
        
       // vector<vector<int>> dp(m,vector<int>(n,0));
       
       vector<int> temp2(n,0);
        for(int i=0;i<m;i++){
            vector<int> temp1(n,0);
            for(int j=0;j<n;j++){
                int a=INT_MAX;
                int b=INT_MAX;
                if(i==0&&j==0)
                    temp1[i]=grid[i][j];
                else{
                if(i>0){
                    a=grid[i][j];
                    a+=temp2[j];
                }
                else
                    a=INT_MAX;
                if(j>0){
                    b=grid[i][j];
                    b+=temp1[j-1];
                }
                else
                    b=INT_MAX;

                temp1[j]=min(a,b);
            }
            
            }
            
            temp2=temp1;
        }
        return temp2[n-1];
        
    }
};