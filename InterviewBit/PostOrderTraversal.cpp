vector<int> ans;
void help(TreeNode* A)
{
    if(A==NULL) return;
    help(A->left);
    help(A->right);
    ans.push_back(A->val);

}
vector<int> Solution::postorderTraversal(TreeNode* A) {
    ans.clear();
    help(A);
    return ans;
}

