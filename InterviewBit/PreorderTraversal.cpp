vector<int> res;
stack<TreeNode*> s;

while(1)
{
    if(A)
    {
        res.push_back(A->val);
        s.push(A);
        A=A->left;
    }
    else{
        if(s.empty())
            return res;
        A=s.top()->right;
        s.pop();
    }
}
return res;

//other
vector<int> ans;
void help(TreeNode* A)
{
    if(A==NULL) return;
    ans.push_back(A->val);
    help(A->left);
    help(A->right);

}
vector<int> Solution::preorderTraversal(TreeNode* A) {
     ans.clear();
     help(A);
     return ans;
}
