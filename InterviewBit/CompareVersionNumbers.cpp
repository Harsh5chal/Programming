int Solution::compareVersion(string A, string B) {
    int i =0;
    int j  = 0;
    while(i<A.size() || j<B.size())
    {
        unsigned long num1 = 0;
        unsigned long num2 = 0;
        while(i<A.size() && A[i]!='.'){
        num1=(num1*10)+(A[i]-'0');
        i++;
    }
    while(j<B.size() && B[j]!='.'){
        num2=(num2*10)+(B[j]-'0');
        j++;
    }
    if(num1>num2){
        return 1;
    }
    if(num1<num2){
        return -1;
    }
    i++;
    j++;
}
return 0;
}
