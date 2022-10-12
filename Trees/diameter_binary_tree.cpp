class Solution {
    public:
    int diameterOfBinaryTree(TreeNode* root){
        if(root == NULL) return 0;
            int lh = height(root->left);
        int rh = height(root->right); 

        int ld = diameterOfBinaryTree(root->left);
        int rd = diameterOfBinaryTree(root->right);

        return max(lh+rh, max(lh, rh));
    }

    int height(TreeNode* root){
        if(root == NULL) return 0;

        return max(height(root->left), height(root->right))+1;
    }
}