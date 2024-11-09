/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int solve(TreeNode* node,int& ans){
        if(node==NULL)
            return 0;
        int lefts=max(0,solve(node->left,ans));
        int rights=max(0,solve(node->right,ans));
        int temp=node->val+lefts+rights;
        ans=max(ans,temp);

        return node->val+max(lefts,rights);
    }
    int maxPathSum(TreeNode* root) {
        int ans=INT_MIN;
        solve(root,ans);
        return ans;
    }
};