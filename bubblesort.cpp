//bubble sort
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i = 0 ; i < n ; i++)
    {
        cin>>a[i];
    }
    //unsorted array
    for(int i = 0 ; i < n ; i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
    //bubble sort
    for(int i = 1 ; i < n ; i++)
    {
        for(int j = 0 ; j <= n - i - 1 ; j++)
        {
            if(a[j] > a[j+1])
            {
                swap(a[j],a[j+1]);
            }
        }
    }
    //sorted array
    for(int i = 0 ; i < n ; i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}
