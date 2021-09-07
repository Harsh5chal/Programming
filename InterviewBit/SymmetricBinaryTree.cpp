int dfs(TreeNode* A,TreeNode* B)
{
    if(A==NULL and B==NULL) return 1;
    if(A==NULL or B==NULL) return 0;
    return (A->val==B->val)&dfs(A->left,B->right)&dfs(B->left,A->right);
}
int Solution::isSymmetric(TreeNode* A) {
    return dfs(A,A);

}
