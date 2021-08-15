TreeNode* helper(vector<int>&A, vector<int> &B, int s, int e, int *i)
{
    if(s>e) return NULL;
    TreeNode* root =  new TreeNode(A[*i]);
    int index = -1;
    for(int j = s;j<=e;j++)
    {
        if(B[j]==A[*i])
        {
            index = j;
            break;
        }
    }
    (*i)--;
    root->right = helper(A,B,index+1,e,i);
    root->left = helper(A,B,s,index-1,i);
    return root;
}

TreeNode* Solution::buildTree(vector<int> &A, vector<int> &B) {
      int s = 0;
      int e = A.size()-1;
      int i  = A.size()-1;
      TreeNode*  root  = helper(B,A,s,e,&i);
    return root;
}
