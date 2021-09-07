TreeNode* Solution::solve(TreeNode* A, TreeNode* B) {
    if(A==NULL) return B;
    if(B==NULL) return A;

    if(A==NULL && B==NULL)
       {
           return NULL;
       }
    else {
        A->val = A->val + B->val;
    }
    A->left = solve(A->left,B->left);
    A->right = solve(A->right,B->right);
    return A;
}
