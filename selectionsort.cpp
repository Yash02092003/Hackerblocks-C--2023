//selection sort
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
    //selection sort
    for(int i = 0 ; i < n - 1 ; i++)
    {
        int min_index = i;
        for(int j = i + 1 ; j < n ; j++)
        {
            if(a[min_index] > a[j])
            {
                min_index = j;
            }
        }
        swap(a[i],a[min_index]);
    }
    //sorted array
    for(int i = 0 ; i < n ; i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}
