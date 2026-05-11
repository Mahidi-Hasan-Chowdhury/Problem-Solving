#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int n;
    cin >> n;
    long long int a[n];
    long long int b[n];
    for (long long int i = 0; i < n; i++)
    {
        cin >> a[i];
        b[i] = a[i];
    }
    int start = 0, end = n - 1;
    
    while (start<end)
    {
        swap(b[start], b[end]);
        start++;
        end--;
    }
    for (long long int i = 0; i < n; i++)
    {
        if (a[i] != b[i])
        {
            cout << "NO" << endl;
            return 0;
        }
        
        
    }
    cout << "YES" << endl;
    
    
    return 0;
}