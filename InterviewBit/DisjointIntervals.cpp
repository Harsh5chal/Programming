bool compare(vector<int> a,vector<int> b)
{
    return a[1]<b[1];
}
int Solution::solve(vector<vector<int> > &a) {
    sort(a.begin(),a.end(),compare);
    int count=1;
    int endpos=a[0][1];
    for(int i=1;i<a.size();i++)
    {
        if(endpos<a[i][0])
        {
            count++;
            endpos=a[i][1];
        }
    }
    return count;
}
