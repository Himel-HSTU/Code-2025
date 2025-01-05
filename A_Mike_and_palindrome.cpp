#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    string s;
    cin >> s;
    int ctr = 0;
    int sz=s.size();
    for (int i = 0; i < sz / 2; i++)
    {
        if (s[i] != s[sz - i - 1])
            ctr++;
    }
    if ((sz % 2 == 1 && ctr <= 1) || (sz % 2 == 0 && ctr == 1))
        cout << "YES\n";
    else
        cout << "NO\n";
    return 0;
}