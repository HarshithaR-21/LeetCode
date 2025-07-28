111. Minimum Depth of Binary Tree

class Solution {
public:
    int minDepth(TreeNode* root) {
        if(root == NULL)
            return 0;
        int leftHeight = minDepth(root->left);
        int rightHeight = minDepth(root->right);
        if(leftHeight == 0 || rightHeight == 0)
            return leftHeight == 0? 1+rightHeight : 1+leftHeight;
        return 1+min(leftHeight, rightHeight);
    }
};