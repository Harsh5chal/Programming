int Solution::largestRectangleArea(vector<int> &A) {
    A.insert(A.begin(),0);
A.push_back(0);

int len = A.size();
int result = 0;

stack<int>s;
s.push(0);
for(int i = 1;i<len;i++)
{
    while(A[i]<A[s.top()])
    {
        int tp = s.top();
        s.pop();
        result = max(result,A[tp]*(i-s.top()-1));
    }
    s.push(i);
}
return result;
}
