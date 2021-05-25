#include<bits/stdc++.h>
#define N 2
using namespace std;

void displayMatrix(
                   int mat[N][N]);

void rotateMatrix(int mat[][N])
{
    for (int x=0;x<N/2;x++)
    {
     for(int y=x;y<N-x-1;y++)
     {
        int temp= mat[x][y];
        mat[x][y]=mat[N-1-x][y];
        mat[N-1-x][y]=mat[N-1-y][N-1-x];
        mat[N - 1 - y][N - 1 - x]
                = mat[x][N - 1 - y];
        mat[x][N - 1 - y] = temp;
     }
    }
}
void displayMatrix(int mat[N][N])
{
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++)
          printf("%2d ", mat[i][j]);


   printf("\n");

   }
}

int main(){
 int mat[N][N] = {
       { 1, 2} ,{ 3, 4}

    };
    rotateMatrix(mat);
    displayMatrix(mat);

    return 0;
}
