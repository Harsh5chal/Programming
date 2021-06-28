unordered_map<int , set<int>> m;

for(auto i:A)
{
    m[i].insert(1);
}

for(auto i:B)
{
    m[i].insert(2);
}

for(auto i:C)
{
    m[i].insert(3);
}

vector<int>  ans;
for(auto i:m)
{
    if(i.second.size()>1)
    {
        ans.push_back(i.first);
    }
}
sort(ans.begin(),ans.end());
return ans;
