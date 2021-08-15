#include<iostream>
#include<limits.h>
using namespace std;
#define ll long long int
#define max(a, b) (a < b ? b : a)

int main(){
    int t,
    cin>>t;
    while(t--)
    {
        ll n,k;
        cin>>n>>k;
        string str;
        cin>>str;
        ll ans = LONG_LONG_MIN;

        for(ll i = 0;i<n;i++)
        {
            string s2 = str;
            str.erase(str.begin()+i);

            if(str.size() == 0)
            {
                str.clear();
                str =  s2;
                break;
            }
            ll x = stoll(str);

            ans = max(ans, x%k);
            str.clear();
            str = s2;
        }
        ans = max(ans, stoll(str)%k);
        cout<<ans<<endl;
    }

}

