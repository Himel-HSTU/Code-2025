#include<bits/stdc++.h>
using namespace std;
#define ll long long
bool comp(int  a,int b){
    return a>b;
}
void reverseInGroups(vector<int> &arr, int k){
    int n=arr.size();
    for (int i = 0; i < n; i += k)
    {
        int left = i;
        int right = min(i + k - 1, n - 1);
        while (left < right)
            swap(arr[left++], arr[right--]);
    }    
    for (auto it : arr)
        cout<<it<<" ";
}
int main ()
{
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int k=2;
    //cin>>k;
    reverseInGroups(arr,k);
    return 0;
}