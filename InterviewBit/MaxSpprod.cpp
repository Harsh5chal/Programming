long long i,ans=INT_MIN;
    stack<int> s;
    for(i=0;i<A.size();i++){
        while(s.empty()==0 && A[s.top()]<=A[i]){
            s.pop();
            if(s.empty()==0)ans=max(ans,s.top()*i);
        }
        s.push(i);
    }
    return ans<0?0:ans%(long long)(pow(10,9)+7);
