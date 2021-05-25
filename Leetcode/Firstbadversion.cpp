
long int low=1;
long int high=n;
long int mid;


while(low<high)
{
    mid= low + (high-low)/2;
    if(isBadVersion(mid))
    {

        high = mid-1;
    }
    else low = mid+1;
}
return low;
