string Solution::simplifyPath(string str) {
    vector<string> v;
    string ans="";

    for(int i = 0;i<str.length();i++)
    {
        string path= "";
        while(i<str.length() and str[i]!='/')
        path= path+str[i++];

        if(path== "" or path ==".")
        continue;
        else if(path=="..")
        {
            if(v.size()>0)
            v.pop_back();
        }
        else
        v.push_back(path);
    }
    if(v.size()==0)
    return "/";
    for(int i=0;i<v.size();i++)
    ans=ans+"/"+v[i];
return ans;
}
