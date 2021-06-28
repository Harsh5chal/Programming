string Solution::fractionToDecimal(int A, int B) {
    map<int, int> mp;
long long x = A;
long long y = B;
string ans;

if((x<0 && y>0) || (x>0 && y<0))
{
    ans = "-";
}

x = abs(x);
y = abs(y);
long long int a = x/y;
long long int r = x%y;

ans += to_string(a);
if(r==0)
{
    return ans;
}
else{
    string ans1 = ".";
    long long int m = r;
    int i =1;

    while(mp.find(m) == mp.end() && m!=0)
    {
        ans1 += to_string((10*m)/y);
        mp[m] = i;
        i++;
        m = (10*m)%y;
    }
    if(m!=0)
    {
        ans1.insert(mp[m],"(");
        ans1 += ")";
    }
    ans += ans1;
    return ans;
}
}
