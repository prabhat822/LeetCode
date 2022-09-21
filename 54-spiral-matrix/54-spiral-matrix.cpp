class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int row=matrix.size(), col=matrix[0].size(), c=row*col,fr=0,fc=0,lc=col-1,lr=row-1
            ,a;
        vector<int> ar;
        while(c){
            for(int i=fc;i<=lc&&c!=0;i++){
                a=matrix[fr][i];
                ar.push_back(a);
                c--;
                }
            fr++;
             for(int i=fr;i<=lr&&c!=0;i++){
                 a=matrix[i][lc];
                ar.push_back(a);
                c--;
                }
            lc--;
             for(int i=lc;i>=fc&&c!=0;i--){
                 a=matrix[lr][i];
                ar.push_back(a);
                c--;
                }
            lr--;
             for(int i=lr;i>=fr&&c!=0;i--){
                 a=matrix[i][fc];
                ar.push_back(a);
                c--;
                }
            fc++;
        }
        return ar; 
    }
};