int n = A.size();
sort(A.begin(),A.end());
int x = A[n-1]*A[n-2]*A[n-3];
int y = A[n-1]*A[0]*A[1];
return max(x,y);
