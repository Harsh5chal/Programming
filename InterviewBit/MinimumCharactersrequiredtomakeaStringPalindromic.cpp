//kmp
int helper(string s)
{
    int n = s.length();
    intt i =0;
    int j =1;
    vector<int> v(n);
    v[0] = 0;
    while(j<n)
    {
        if(s[i]==s[j])
        {
            v[j] = i+1;
            i++;
            j++;
        }
        else{
            if(i==0)
            {
                v[j++]= 0;
            }
            else
            {
                i = v[i-1];
            }
        }
    }
    return v[n-1];
}
int Solution::solve(string A) {
    string aux = A;
    reverse(aux.begin(),aux.end());
    A= A+ "$"+aux;
    int pal = helper(A);
    return aux.length()--pal;
}
//other Solution
int Solution::solve (string A) {
    int start = 0, end = A.length() - 1, rec = A.length () - 1;
    while (start < end) {
        if (A [start] == A [end]) {
            start ++;
            end --;
        } else {
            start = 0;
            rec --;
            end = rec;
        }
    }
    return A.length () - rec - 1;
}
