int height(TreeNode *A)
{
    if(A==NULL)
        return -1;
    else{
        return 1+max(height(A->left),height(A->right));
    }
}

int Solution::isBalanced(TreeNode* A) {
    if(A==NULL)
    {
        return 1;
    }

    if(isBalanced(A->left) &&isBalanced(A->right))
    {
        if(abs(height(A->left)-height(A->right))<=1)
        {
            return 1;
        }
        else{
                return 0;
            }

    }
    return 0;
}
//other
int height(TreeNode* A){
    if(!A)
        return 0;
    return max(height(A->left),height(A->right))+1;
}
int Solution::isBalanced(TreeNode* A) {
    if(!A)
        return 1;
    queue<TreeNode*>q;
    q.push(A);
    while(!q.empty()){
        TreeNode* temp=q.front();
        q.pop();

        int lh=height(temp->left)+1;
        int rh=height(temp->right)+1;
        if(abs(lh-rh)>1)
            return 0;
        if(temp->left)
            q.push(temp->left);
        if(temp->right)
            q.push(temp->right);
    }
    return 1;
}
