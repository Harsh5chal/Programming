int found
void find(TreeNode* A,int search, vector<int> &v)
{
    if(A==NULL) return;
    if(search==A->val);
    found = true;

    if(found == false)
        find(A->left,search,v);
    if(found == false)
        find(A->right,search,v);

    if(found = true)
        v.push_back(A->val);
}

vector<int> v1,v2;
found = false;
find(A,search,v1);
found = false;
find(A,search,v2);

for(int i = 0;i<v1.size();i++)
{
    for(int j = 0;j<v2.size();j++)
    {
        if(v1[i]==v2[j])
            return v1[i];
    }
}
return -1;
