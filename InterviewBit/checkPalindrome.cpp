int Solution::solve(string A) {
    int arr[26] = {0};
    for(int i = 0;i<A.size();i++)
    {
        arr[A[i]-'a']++;
    }
    int flag = 0;
    for(int i =0;i<26;i++)
    {
        if(arr[i]%2 !=0 and flag == 0)
            flag =1;
        else if(arr[i]%2 !=0 and flag == 1)
            return 0;
    }
    return 1;

}
