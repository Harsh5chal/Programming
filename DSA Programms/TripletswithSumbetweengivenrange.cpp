int n = A.size();
sort(A.begin(),A.end());
if(n<3) return 0;
int i = 0,j = n-1;

while(j-i>=2)
{
    int mid = (i+j)/2;

    float a = stof(A[i]);
    float b = stof(A[mid]);
    float c = stof(A[j]);

    float sum = a+b+c;

    if(sum>1 and sum<2)
        return 1;
    else if(sum>2) j--;
    else i++;
}
return 0;
