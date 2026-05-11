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

    int smallest = INT_MAX;
    int largest = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        if (a[i]<smallest)
        {
            smallest = a[i];
        }
        largest = max(a[i], largest);
        
    }
    
    cout<<smallest<<endl;
    cout<<largest<<endl;

    
    return 0;
}