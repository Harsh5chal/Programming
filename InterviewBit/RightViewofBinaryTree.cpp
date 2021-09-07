void sol(TreeNode* A, vector<int> &ans,int l)
{
    if(A== NULL) return;
    if(ans.size()<l)
    ans.push_back(A->val);
    sol(A->right,ans,l+1);
    sol(A->left,ans,l+1);
}
vector<int> Solution::solve(TreeNode* A) {
    vector<int> ans;
    if(A==NULL) return ans;
    sol(A,ans,1);
    return ans;
}
