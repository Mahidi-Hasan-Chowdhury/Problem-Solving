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

    for (int i = 0; i < n-2; i++)
    {
        int min = i;
        for (int j = i; j < n-1; i++)
        {
            if (a[j]<a[min])
            {
                swap(a[j],a[min]); 
            }
            
        }
        
    }

    for (int i = 0; i < n; i++)
    {
        cout<<a[i]<<endl;
    }
    
    
    
    
    return 0;
}