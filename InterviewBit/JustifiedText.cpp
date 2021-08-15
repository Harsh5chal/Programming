vector<string> Solution::fullJustify(vector<string> &A, int B) {
    vector <string> ans;

for(int i=0;i<A.size();){
    int s = 0,n = 1,old_i = i,j;
    string line = "";
    s = A[i].size();
    i++;

    while(((s+A[i].size()+n)<=B)&&i<A.size()){
        s = s + A[i].size();
        i++;
        n++;
    }
    //single element in a line
    if(n==1){
        line  = A[i-1];
        line = line +string(B-line.size(),' ');
        ans.push_back(line);
        continue;
    }
    //last line
    if(i == A.size()){
        for(j = old_i;j<i-1;j++)
            line = line + A[j] + ' ';
        line = line + A[j];
        line = line + string(B-line.size(),' ');
        ans.push_back(line);
        break;
    }
    //ususal case
    int q = (B-s)/(n-1);
    int r = (B-s)%(n-1) ;
    for(j = old_i;j<i-1;j++){
        line = line + A[j] ;
        if(r) {
            line = line + string(q+1,' ');
            r--;
        }
        else
            line = line + string(q,' ');
    }
    line = line + A[j];
    ans.push_back(line);
}
return ans;
}
