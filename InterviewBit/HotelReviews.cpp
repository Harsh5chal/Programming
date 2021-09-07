//hard using trie ds
bool compare(const pair<int, int> &a, const pair<int, int> &b) {
    if (a.first == b.first) {
        return (a.second < b.second);
    } else {
        return (a.first > b.first);
    }
}

vector<int> Solution::solve(string A, vector<string> &B) {
    unordered_map<string,int> mp;

    for(int i=0;i<A.size();i++)
    {
        string s;
        while(A[i]!='_' && i<A.size())
        {
            s.push_back(A[i]);
            i++;
        }
        mp[s]++;
    }
    vector<pair<int,int> > vp;
    for(int i=0;i<B.size();i++)
    {
        int count=0;
        for(int j=0;j<B[i].size();j++)
        {
            string s;
            while(B[i][j]!='_' && j<B[i].size())
            {
                s.push_back(B[i][j]);
                j++;
            }
            if(mp.find(s)!=mp.end()) count++;
        }
        vp.push_back(make_pair(count,i));
    }
    sort(vp.begin(),vp.end(), compare );
    vector<int> ans;
    for(int i=0;i<vp.size();i++)
    {
        ans.push_back(vp[i].second);
    }
    return ans;

}
