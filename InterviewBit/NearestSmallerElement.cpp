stack<int> st;
vector<int> result;

for(int i = 0;i<A.size();i++)
{
    while(!st.empty() && A[st.top()]>=A[i])
    {
        st.pop();
    }
    if(st.empty())
    {
        result.push_back(-1);
        st.push(i);
    }
    else if(!st.empty() && A[st.top()]<A[i])
    {
        result.push_back(A[st.top()]);
        st.push(i);
    }
}
return result;
