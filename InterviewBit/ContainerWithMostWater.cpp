int Solution::maxArea(vector<int> &A) {
    //  |                                  |
    //  | area of water btw left and right |
    //  |                                  |
int len = A.size();
int left = 0;
int right = len - 1;
int area = 0;

while(left<right)
{
    area = max(area, min(A[left],A[right])*(right-left));
    if(A[left]<A[right])
        left += 1;
    else
        right -= 1;
}

return area;
}
