class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row=matrix.size(), col=matrix[0].size(),l=0,r=row-1;
        while(l<r){
            int mid=(l+r)/2;
            if(target>=matrix[mid][0]&& target<=matrix[mid][col-1]){
                l=mid;
                break;
            }
            if(target<matrix[mid][0])
                r=mid-1;
            else
                l=mid+1;
        }
        return binary_search(matrix[l].begin(),matrix[l].end(),target);
    }
};