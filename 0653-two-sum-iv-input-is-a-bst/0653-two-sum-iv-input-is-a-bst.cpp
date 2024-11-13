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
    vector<int> temp;
    void solve(TreeNode* root){
        if(root==NULL) return;
        solve(root->left);
        temp.push_back(root->val);
        solve(root->right);
    }
    bool findTarget(TreeNode* root, int k) {
        solve(root);
        unordered_map<int,int> mp;
        for(auto &it:temp)
            mp[it]++;

        for(auto &it:temp){
            if(k==2*it){
                if(mp.find(k-it)!=mp.end()){
                    if(mp[k-it]>1) return true;
                }
            }
            else if(mp.find(k-it)!=mp.end()) return true;
        }
        return false;
    }
};