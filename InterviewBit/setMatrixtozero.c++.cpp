#include <bits/stdc++.h>
#define R 3
#define C 4

using namespace std;

void modifyMatrix(int mat[R][C])
{
    bool row_flag=false;
    bool col_flag=false;


for(int i=0;i<R;i++)
{
    for(int j=0;j<C;j++)
    {
        if(i==1 && mat[i][j]==0)
        {
         row_flag=true;}

         if(j==1 && mat[i][j]==0)
            {
                col_flag=true;
            }
        if (mat[i][j]==1)
        {
             mat[0][j] = 0;
             mat[i][0] = 0;
        }
        }

}
for(int i=1;i<R;i++)
{
    for(int j=1;j<C;j++)
    {
        if(mat[i][0]==0 || mat[0][j]==0)
        {
            mat[i][j]=0;
        }
    }
}
if(row_flag == true)
{
    for(int i=0;i<C;i++)
    {
        mat[0][i]=0;

    }
}
if(col_flag == true)
{
    for(int i=0;i<R;i++)
    {
        mat[i][0]=0;

    }
}
}

void printMatrix(int mat[R][C])
{
    for (int i = 0; i < R; i++) {
        for (int j = 0; j < C; j++) {
            cout << mat[i][j];
        }
        cout << "\n";
    }
}

int main()
{

    int mat[R][C] = { { 1, 0, 0, 1 },
                      { 0, 0, 1, 0 },
                      { 0, 0, 0, 0 } };

    cout << "Input Matrix :\n";
    printMatrix(mat);

    modifyMatrix(mat);

    cout << "Matrix After Modification :\n";
    printMatrix(mat);
    return 0;
}
