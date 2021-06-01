 int Solution::solve(int A) {
    int flag = 0;
    long ans = 0;
    long mod = 1e9 + 7;
    for(int i=31;i>=0;i--){
        if(A&(1<<i)){
            flag=1;
        }
        if(flag){
            //block here means no. of continous 0s or 1s
            int block = 1<<i;
            //number of blocks before this number no/2 because half of them are 0 blocks
            int no = A/ block;
            no/=2;
            ans = (ans + no*block )%mod;
            //In the current block count the position of if bit is set.
            if(A&(1<<i))
                ans = (ans + (A%(block) +1 )) %mod;
        }
    }
    return ans;
}
