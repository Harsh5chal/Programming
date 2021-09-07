map<int,int> degree;
map<int,int> parent;
int mx = INT_MIN;
for(int i = 0;i<B.size();i++)
{
    int parent1 = B[i][0];
    int child1 = B[i][1];

    degree[parent1]++;
    parent[chils1] = parent1;
    mx = max({mx,parent1,child1});
}

int count = 0;
for(int i= mx ;i>1;i--)
{
    if(degree[i]%2)
    {
        count++;
        degree[parent[i]]--;
    }
}
return count;
