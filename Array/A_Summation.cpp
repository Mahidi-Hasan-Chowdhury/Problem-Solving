#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for (long long int i = 0; i < n; i++)
    {
        cin>>a[i];
    }

    long long int sum = 0;

    for (long long int i = 0; i < n; i++)
    {
        sum = sum + a[i];
    }

    cout<<abs(sum)<<endl;
    
    

    
    return 0;
}