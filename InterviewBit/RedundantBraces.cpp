int Solution::braces(string A) {
    stack<char>s;
    int flag=1;
    for(int i=0;i<A.size();i++){
        if(isspace(A[i])) continue;
        else{
            if(A[i]!=')') s.push(A[i]);
            else{
                if(s.top()!='(') s.pop();
                if(s.top()=='(') return 1;
                while(s.top()!='('){
                    flag=0;
                    s.pop();
                }
                if(flag==1) return 1;
                flag=1;
                s.pop();
            }
        }
    }
    return 0;
}
