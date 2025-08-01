104. Maximum Depth of Binary Tree


class Solution {
public:
    int maxDepth(TreeNode* root) {
        if(root == NULL)
            return 0;
        int leftHeight = maxDepth(root->left);
        int rightHeight = maxDepth(root->right);
        return 1+max(leftHeight, rightHeight);
    }
};