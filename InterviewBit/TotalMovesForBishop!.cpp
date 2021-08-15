int c = 0;
c += min(8-A,8-B);
c += min(B-1,8-A);
c += min(A-1,8-B);
c += min(B-1,A-1);
return c;
