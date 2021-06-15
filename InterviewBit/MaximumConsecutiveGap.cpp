vextor b = A;
sort(b.begin(),b.end());

if(A.size()<2)
    return 0;

unsigned long long int max = 0;
unsigned long long int diff = 0;

for(int i =0;i<A.size()-1;i++)
{
    diff = b[i+1]-b[i];
    if(diff>max)
        max= diff;
}

return max;
