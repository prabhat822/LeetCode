class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int n=nums.size();
        int i=0,j=n-1;
        for(int k=0;k<n;k++){
            if(nums[k]!=val){
                nums[i]=nums[k];
                i++;
            }
        }
        return i;
        // while(i<=j){
        //     if(nums[j]==val)    
        //         j--;
        //     else if(nums[i]==val){
        //         swap(nums[i],nums[j]);
        //         i++;
        //         j--;
        //     }
        //     else
        //         i++;
        // }
        // return j+1;
        
    }
};