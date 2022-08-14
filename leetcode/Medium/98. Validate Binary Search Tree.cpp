class Solution {
public:
    TreeNode* ptr = NULL;
    
    bool isValidBST(TreeNode* root) {
        if(root){
            if(!isValidBST(root->left)) return false;
            if(ptr && (ptr->val >= root->val)) return false;
            
            ptr = root;
            return isValidBST(root->right);
        }
        return true;
    }
};