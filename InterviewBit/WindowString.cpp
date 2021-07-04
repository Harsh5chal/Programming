string Solution::minWindow(string A, string B) {
int hash_str[255] = {0};
int hash_pat[255] = {0};
int n = A.length();
int m = B.length();
int len = INT_MAX;
int s = -1;
int i =0;
int j =0;
int count =0;

for(int i = 0; i < m; i++)
        hash_pat[B[i]]++;
    for(j = 0; j < n; j++){
        hash_str[A[j]]++;

        if(hash_pat[A[j]] != 0 && hash_str[A[j]] <= hash_pat[A[j]])
            count++;
        if(count == m){
            while(hash_pat[A[i]] == 0 || hash_str[A[i]] > hash_pat[A[i]]){
                hash_str[A[i]]--;
                i++;
            }
            if(len > j - i + 1)
                len = j - i + 1, s = i;
        }
    }
    return s == -1 ? "" : A.substr(s, len);
}
