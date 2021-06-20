int n = A.size();
int red = 0;
int blue = n-1;
int color  =0;

while(color<=blue)
{
   if(A[color]==0)
   {
       swap(A[red++],A[color++]);
   }
   else if(A[color]==2)
   {
       swap(A[blue--],A[color]);
   }
   else{
    color++;
   }
}

