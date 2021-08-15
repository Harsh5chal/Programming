#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll int t;
    cin>>t;
    while(t--)
    {
        ll int n,k;
        cin>>n>>k;
        ll int sum = 0;
        ll int arr[n] = {0};

        for(ll int i =0;i<n;i++)
        {
            cin>>arr[i];
            sum += arr[i];
        }
        if((sum/n)<=k)
        {
            cout<<0<<endl;
        }
        else
        {
            ll int ans = sum/(k+1)-n+1;
            cout<<ans<<endl;
        }
    }
    return 0;
}
