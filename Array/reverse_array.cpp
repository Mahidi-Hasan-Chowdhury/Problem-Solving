#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }

    // for (int i = n-1; i >= 0; i--)
    // {
    //     cout<<a[i]<<" ";        
    // }
    // cout<<endl;
    

    // Two Pointer Approach

    int start = 0;
    int end = n-1;
    while (start<end)
    {
        swap(a[start],a[end]);
        start++;
        end--;
    }   
    
    for (int i = 0; i < n; i++)
    {
        cout<<a[i]<<" ";
    }


    

    
    return 0;
}