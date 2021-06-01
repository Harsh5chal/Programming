A,B

int len1 = A.size();
int len2 = B.size();
if(len1 == 0 || len2 == 0)
    return "0";

vector<int> result(len1 + len2, 0);

int i_n1 = 0;
int i_n2 = 0;

for(int i=len1-1;i>=0;--i)
{
    int carry = 0;
    int n1 = A[i] - '0';
    int n2 = 0;

    for(int j=len2-1;j>=0;j--)
    {
        int n2 = B[j] - '0';
        int sum = n1*n2 + result[i_n1 + i_n2] + carry;
        carry = sum/10;
        result[i_n1 + i_n2] = sum%10;
        i_n2++;
    }
    if(carry>0)
        result[i_n1 + i_n2] += carry;
    i_n1++;
}

int i = result.size() - 1;
while(i>=0 && result[i] == 0)
    i--;
if(i==-1)
    return "0";
string s = "";

while(i>=0)
    s += std::to_string(result[i--]);
return s;
//failed in 9999 case



//interviewbit easy sol
int n = A.length();
int m = B.length();
string ans(n+m,'0');

for(int i = n-1;i>=0;i--)
{
    for(int j = m-1;j>=0;j--)
    {
        int p = (A[i]-'0')*(B[j]-'0') + (ans[i+j+1]-'0');
        ans[i+j+1]=p%10+'0';
        ans[i+j]+= p/10;
    }
}
for(int i=0;i<m+n;i++)
{
    if(ans[i]!='0')
        return ans.substr(i);
}
return "0";
