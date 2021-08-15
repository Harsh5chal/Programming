string Solution::longestPalindrome(string s) {
int n = s.size();
int maxLen = 1;
int start = 0;
string str = "";

int low,high;

for(int i = 1;i<n;i++)
{
    low = i-1;
    high = i;
    while(low>=0  && high<n &&  s[low] == s[high])
    {
        if(high - low + 1 > maxLen)
        {
            start = low;
            maxLen = high -low+ 1;
        }
        low--;
        high++;
    }
    low = i-1;
    high = i+1;
    while(low>=0  && high<n &&  s[low] == s[high])
    {
        if(high - low + 1 > maxLen)
        {
            start = low;
            maxLen = high -low+ 1;
        }
        low--;
        high++;
    }
}
for(int i = start;i<= start + maxLen-1;i++)
    str += s[i];
return  str;

}
