int n=A.size();
    int i=-1,j=0;
    int max_len=1;
    unordered_map<char,int> map;
    while(j<n){
        if(map.find(A[j])!=map.end())
        i=max(i,map[A[j]]);

        max_len=max(max_len,j-i);
        map[A[j]]=j;
        j++;
    }
    return max_len;
