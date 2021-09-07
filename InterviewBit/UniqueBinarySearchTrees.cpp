vector<TreeNode*> generate(int lo,int hi)
{
    vector<TreeNode*> cans;
    if(lo>hi)
    {
        cans.push_back(NULL);
        return cans;
    }
    for(int i=lo;i<=hi;i++)
    {
        vector<TreeNode*> l = generate(lo,i-1);
        vector<TreeNode*> r = generate(i+1,hi);
        for(int x= 0;x<l.size();x++)
        {
            for(int y = 0;y<r.size();y++)
            {
                TreeNode *node = new TreeNode(i);
                node->left = l[x];
                node->right = r[y];
                cans.push_back(node);
            }
        }
        l.clear();
        r.clear();
    }
    return cans;
}

vector<TreeNode*> Solution::generateTrees(int A) {
    return generate(1,A);
}
