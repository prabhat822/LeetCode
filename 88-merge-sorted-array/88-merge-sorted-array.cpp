class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
    int x=n-1,y=m-1,i=m+n-1; 
       while(x>=0){
           if(y>=0&&nums1[y]>nums2[x])
               nums1[i--]=nums1[y--];
           else
               nums1[i--]=nums2[x--];
       }
        
    }
};