int Solution::majorityElement(const vector<int> &A) {
    map < int, int >M;
int n=A.size();
for(int i=0; i<n; i++){
M[A[i]]++;
}
for(auto i : M){
if(i.second>floor(n/2))
return i.first;
}
return 0;
}
