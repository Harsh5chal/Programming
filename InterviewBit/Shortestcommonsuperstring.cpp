int overlap(string a,string b,string& res){
    string x=a+"#"+b;
    vector<int> kmp(x.length());
    for(int i=1,j=0;i<x.length();i++){
        if(x[i]==x[j]){
            j++;
            kmp[i]=j;
        }
        else {
            while(j){
                j=kmp[j-1];
                if(x[i]==x[j])
                break;
            }
            if(x[i]==x[j]){
                j++;
                kmp[i]=j;
            }
            else kmp[i]=j;
        }
    }
    int ans=kmp[x.length()-1];
    res=b.substr(0,b.length()-ans)+a;
    return ans;
}
int Solution::solve(vector<string> &A) {
    while(A.size()!=1){
        int l,r,lap=INT_MIN,temp;
        string str,rep;
        for(int i=0;i<A.size();i++){
            for(int j=i+1;j<A.size();j++){
               temp=overlap(A[i],A[j],rep);
               if(temp>lap){
                   lap=temp;str=rep;l=i;r=j;
               }
               temp=overlap(A[j],A[i],rep);
               if(temp>lap){
                   lap=temp;str=rep;l=i;r=j;
               }
            }
        }
        A.erase(A.begin()+l);A.erase(A.begin()+r-1);
        A.push_back(str);
    }
    return A[0].length();
}
