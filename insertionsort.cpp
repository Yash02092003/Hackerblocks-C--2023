//insertin sort
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
    //insertion sort
    for(int i = 1 ; i < n ; i++)
    {
        int element = a[i];
        int j;
        for(j = i - 1 ; j >= 0 ; j--)
        {
            if(a[j] > element)
            {
                a[j+1] = a[j];
            }
            else
            {
                break;
            }
        }
        a[j+1] = element;
    }
    //sorted array
    for(int i = 0 ; i < n ; i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}
