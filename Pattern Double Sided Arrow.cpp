/*Take N as input. For a value of N=7, we wish to draw the following pattern :

                            1 
                        2 1   1 2 
                    3 2 1       1 2 3 
                4 3 2 1           1 2 3 4 
                    3 2 1       1 2 3 
                        2 1   1 2 
                            1 
Input Format
Take N as input.

Constraints
N is odd number.

Output Format
Pattern should be printed with a space between every two values.

Sample Input
7
Sample Output
            1 
        2 1   1 2 
    3 2 1       1 2 3 
4 3 2 1           1 2 3 4 
    3 2 1       1 2 3 
        2 1   1 2 
            1 
Explanation
Catch the pattern and print it accordingly.*/

#include <iostream>
using namespace std;
int main() {
    int tr;
    cin>>tr;
    int r = 1;
    while(r<=tr-1)
    {
        cout<<" "<<" ";
        r++;
    }
    cout<<1<<" ";
    r=1;
    while(r<=tr-1)
    {
        cout<<" "<<" ";
        r++;
    }
    cout<<endl;
	if(tr>1){
    r=1;
    while(r<=(tr+1)/2-2)
    {
        int rcount = r+1;
        int count = 1;
        int i = 1;
        while(i<=tr-2*r-1)
        {
            cout<<" "<<" ";
            i++;
        }
        int j = 1;
        while(j<=r+1)
        {
            cout<<rcount<<" ";
            j++;
            rcount--;
        }
        int k = 1;
        while(k<=2*r-1)
        {
            cout<<" "<<" ";
            k++;
        }
        int l = 1;
        while(l<=r+1)
        {
            cout<<count<<" ";
            l++;
            count++;
        }
        int m = 1;
        while(m<=tr-2*r-1)
        {
            cout<<" "<<" ";
            m++;
        }
        cout<<endl;
        r=r+1;
    }
    r=1;
    int rcount = (tr+1)/2;
    while(r<=(tr+1)/2)
    {
        cout<<rcount<<" ";
        r++;
        rcount--;
    }
    r=1;
    while(r<=tr-2)
    {
        cout<<" "<<" ";
        r++;
    }
    r=1;
    int count  = 1;
    while(r<=(tr+1)/2)
    {
        cout<<count<<" ";
        r++;
        count++;
    }
    cout<<endl;
    r=1;
     while(r<=(tr+1)/2-2)
    {
        int rcount = (tr+1)/2-r;
        int count = 1;
        int i = 1;
        while(i<=2*r)
        {
            cout<<" "<<" ";
            i++;
        }
        int j = 1;
        while(j<=(tr+1)/2-r)
        {
            cout<<rcount<<" ";
            j++;
            rcount--;
        }
        int k = 1;
        while(k<=tr-2*r-2)
        {
            cout<<" "<<" ";
            k++;
        }
        int l = 1;
        while(l<=(tr+1)/2-r)
        {
            cout<<count<<" ";
            l++;
            count++;
        }
        int m = 1;
        while(m<=2*r)
        {
            cout<<" "<<" ";
            m++;
        }
        cout<<endl;
        r=r+1;
    }
    r=1;
    while(r<=tr-1)
    {
        cout<<" "<<" ";
        r++;
    }
    cout<<1<<" ";
    r=1;
    while(r<=tr-1)
    {
        cout<<" "<<" ";
        r++;
    }
    cout<<endl;
	}
    return 0;
}
