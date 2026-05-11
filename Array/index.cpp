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

    int small_index = 0;
    int large_index = 0;

    for (int i = 0; i < n; i++)
    {
        if (a[i]<smallest)
        {
            smallest = a[i];
            small_index = i;
        }

        if (a[i]>largest)
        {
            largest = a[i];
            large_index = i;
        }        
    }

    cout<<"Index: "<<small_index<<" "<<"Smallest: "<<smallest<<endl;
    cout<<"Index: "<<large_index<<" "<<"Largest: "<<largest<<endl;
    

    
    return 0;
}