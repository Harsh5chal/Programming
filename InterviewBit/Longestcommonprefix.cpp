int n = A.size();
if(n==0)
    return "";
if(n==1)
    return A[0];
sort(A.begin(),A.end());
int en = min(A[0].size(),A[n-1].size());

string first = A[0],last = A[n-1];
int i = 0;
while(i<en && first[i]==last[i])
    i++;
string pre = first.substr(0,i);
return pre;
