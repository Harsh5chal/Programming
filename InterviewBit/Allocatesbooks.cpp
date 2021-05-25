//The idea is to use Binary Search.
//We fix a value for the number of pages as mid of current minimum and maximum.
//We initialize minimum and maximum as 0 and sum-of-all-pages respectively.
//If a current mid can be a solution, then we search on the lower half, else we search in higher half.

//a&b
int n=A.size();
int curr_min=0;

int n=A.size();
int curr_min=0;

int studentsRequired =1;
int curr_sum = 0;

for(int i=0;i<n;i++)
{
    if(A[i]>curr_min)
        return -1;
    if(curr_sum + A[i]> curr_min)
    {
        studentsRequired++;
        curr_sum = A[i];
        if(studentsRequired>B)
            return -1;
    }
    else
        curr_sum += A[i];
}
return curr_sum;

