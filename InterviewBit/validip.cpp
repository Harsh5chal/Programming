string A
vector<string> ips;
string ex = "";

for(int i = 0;i<A.size();i++)
{
    if(A[i]=='.')
    {
        ips.push_back(ex);
        ex="";
    }
    else {
        ex = ex+ A[i];
    }
}
ips.push_back(ex);

 for (int i = 0; i < ips.size(); i++) {
    if(ips[i].length()>3) || stoi(ips[i]<0 || stoi(ips[i])>255)
        return 0;
    if(ips[i].length()>1 && stoi(ips[i]==0))
        return 0;
    if(ips[i].length()>1 && stoi(ips[i])!=0 && ips[i][0]=='0')
        return 0;
 }
 retuen 1;
