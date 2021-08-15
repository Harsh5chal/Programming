int length= A.size();
    int sum=0;
    for(int i=0;i<length;i++){
        if(A[i]=='a'||A[i]=='e'||A[i]=='i'||A[i]=='o'||A[i]=='u'||A[i]=='A'||A[i]=='E'||A[i]=='I'||A[i]=='O'||A[i]=='U') sum+= length-i;
    }
    return (sum%10003);
