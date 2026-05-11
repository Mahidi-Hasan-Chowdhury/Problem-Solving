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

    int lowest = INT_MAX;
    int lowest_position = 0;

    for (int i = 0; i < n; i++)
    {
        if (a[i]<lowest)
        {
            lowest = a[i];
            lowest_position = i;
        }        
    }

    cout<<lowest<<" "<<lowest_position+1;
    

    
    return 0;
}