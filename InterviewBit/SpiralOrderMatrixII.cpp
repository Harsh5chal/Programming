vector<vector<int> > Solution::generateMatrix(int A) {
    vector<vector<int> > v(A, vector<int>(A,0));
int x = 1,i = 0, j =0;

v[0][0] = 1;

while(x<A*A)
{
    while(j+1 < A && v[i][j+1] == 0)
    {
        x++;
        j++;
        v[i][j]=x;
    }
    while(i+1 < A && v[i+1][j] == 0)
    {
        x++;
        i++;
        v[i][j]= x;
    }
    while(i-1 >= 0 && v[i-1][j] == 0)
    {
        x++;
        i--;
        v[i][j]= x;
    }
    while(j-1 >= 0 && v[i][j-1] == 0)
    {
        x++;
        j--;
        v[i][j]= x;
    }
}
return v;
}
