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
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        map<int,int> mp;
        for(int i=0;i<inorder.size();i++){
            mp[inorder[i]]=i;
        }
    
        return buildTree(preorder,0,preorder.size()-1,inorder,0,inorder.size()-1,mp);
    }
private:
    TreeNode* buildTree(vector<int>& preorder,int pres,int pree, vector<int>& inorder,int ins,int ine,map<int,int> &mp){
        if(pres>pree || ins>ine) return NULL;
        TreeNode* root=new TreeNode(preorder[pres]);
        int tmp=mp[root->val];
        int lef=tmp-ins;
        root->left=buildTree(preorder,pres+1,pres+lef,inorder,ins,tmp-1,mp);
        root->right=buildTree(preorder,pres+lef+1,pree,inorder,ins+lef+1,ine,mp);
        return root;
    }
};