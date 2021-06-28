unordered_map<int, int> mp;
int curr_sum = 0;
int count = 0;

for(int i = 0 ; i<A.size();i++)
{
    if(A[i]%2 == 0)
        A[i] = 0;
    else
        A[i] = 1;
}

for(int i = 0 ; i<A.size() ;i++)
{
    curr_sum = curr_sum + A[i];
    if(curr_sum == B)
        count = count +1;
    if(mp.find(curr_sum - B) != mp.end())
    {
        count = count + mp[curr_sum - B];
    }
    mp[curr_sum]++;
}
return count;
