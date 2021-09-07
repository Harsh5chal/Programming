vector<int> ans;
void inorder(TreeNode* A)
{
    if(A==NULL) return;
    inorder(A->left);
    ans.push_back(A->val);
    inorder(A->right);
}

ans.clear();
inorder(A);
return ans;
