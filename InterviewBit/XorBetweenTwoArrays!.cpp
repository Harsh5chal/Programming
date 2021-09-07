struct trie
{
    map<int,trie*> mp;
    bool isLast;
};
trie * getNode()
{
    trie *temp=new trie;
    temp->isLast=false;
    return temp;
}
void insert(trie* root, int a)
{
    trie *p=root;
    for(int i=31;i>=0;i--)
    {
        int l= (a>>i) &1;
        if(!p->mp.count(l))
        {
            p->mp[l]=getNode();
        }
        p=p->mp[l];
    }
    p->isLast=true;
}
int mx=INT_MIN;
void search(trie *root,int num)
{
    trie* p=root;
    int curr=0;
    for(int i=31;i>=0;i--)
    {
        int l = ( (num>>i) & 1 ? 0 : 1);
        if(p->mp.count(l))
        {
            curr<<=1;
            curr|=1;
            p=p->mp[l];
        }
        else
        {
            curr<<=1;
            curr|=0;
            p=p->mp[l^1];
        }
    }
    mx=max(mx,curr);
}
int Solution::solve(vector<int> &A, vector<int> &B) {
    trie *root=getNode();
    for(auto i: A)
    {
        insert(root,i);
    }
    mx=INT_MIN;
    for(auto i: B)
    {
       search(root,i);
    }
    return mx;
}
