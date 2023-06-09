


// Recursive Solution.
class Solution {
private:
    void inOrder(vector<int>& vect, TreeNode* root){
        if(root){
            inOrder(vect, root->left);
            vect.push_back(root->val);
            inOrder(vect, root->right);
        }
    }
public:
    vector<int> inorderTraversal(TreeNode* root) {
        if(!root) return {};
        vector<int> vect;
        inOrder(vect, root);
        return vect;
    }
};