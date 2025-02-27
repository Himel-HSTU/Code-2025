#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main ()
{
ios::sync_with_stdio(false);
cin.tie(0);
    ll n,m;
    cin>>n>>m;
    vector<int> t(n);
    vector<int> c(m);
    for (int i = 0; i < n; i++)
        cin>>t[i];
    for (int i = 0; i < m; i++)
        cin>>c[i];
    sort(t.begin(),t.end());
   // sort(c.begin(),c.end());
    int ctr=0,f=0,s=0;
    while (f<n &&  s<m)
    {
        if (t[f]<=c[s])
        {
            cout<<t[f]<<"\n";
            f++;
            s++;
        }
        else if (t[f]>c[s]){
            cout<<"-1\n";
            s++;
        }
    }
    return 0;
}