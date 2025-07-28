class Solution {
public:

    bool isBalanced(TreeNode* root) {
        return heightOfTree(root) != -1;
    }
    int heightOfTree(TreeNode* root)
    {
        if(root == NULL)
            return 0;
        int lh = heightOfTree(root->left);
        if(lh == -1)  
          return -1;
        int rh = heightOfTree(root->right);
        if(rh == -1)
            return -1;
        if(abs(lh-rh) > 1)
           return -1;
        return max(lh, rh)+1; 
    }
};