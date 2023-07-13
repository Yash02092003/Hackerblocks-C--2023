/*Take N as input. For a value of N=5, we wish to draw the following pattern :

                          5 4 3 2 1 0 1 2 3 4 5
                            4 3 2 1 0 1 2 3 4 
                              3 2 1 0 1 2 3 
                                2 1 0 1 2 
                                  1 0 1 
                                    0 
                                  1 0 1 
                                2 1 0 1 2 
                              3 2 1 0 1 2 3 
                            4 3 2 1 0 1 2 3 4 
                          5 4 3 2 1 0 1 2 3 4 5
Input Format
Take N as input.

Constraints
N <= 20

Output Format
Pattern should be printed with a space between every two values.

Sample Input
5
Sample Output
 5 4 3 2 1 0 1 2 3 4 5
   4 3 2 1 0 1 2 3 4 
     3 2 1 0 1 2 3 
       2 1 0 1 2 
         1 0 1 
           0 
         1 0 1 
       2 1 0 1 2 
     3 2 1 0 1 2 3 
   4 3 2 1 0 1 2 3 4 
 5 4 3 2 1 0 1 2 3 4 5
*/
#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    int tr = 2*n + 1;
    int r = 1;
    int temp = n;
    while(r <= tr)
    {
        if(r < (tr+1)/2)
        {
            cout<<temp<<" ";
            temp--;
        }
        else
        {
            cout<<temp<<" ";
            temp++;
        }
        r++;
    }
    cout<<endl;
    r = 1 ;
    while(r < (tr+1)/2 )
    {
        //space
        int spc = 1;
        while(spc <= r)
        {
            cout<<" "<<" ";
            spc++;
        }
        //star
        int x = n - r;
        int stc = 1;
        while(stc <= tr-(2*r))
        {
            if(stc < (tr + 1) / 2 - r)
            {
                cout<<x<<" ";
                x--;
            }
            else
            {
                cout<<x<<" ";
                x++;
            }
            stc++;
        }
        //space
        int sppc = 1;
        while(sppc <= r)
        {
            cout<<" "<<" ";
            sppc++;
        }
        r++;
        cout<<endl;
    }
    r = 1 ;
    while(r < (tr+1)/2 - 1)
    {
        //space
        int spc = 1;
        while(spc <= (tr+1)/2 - r -1)
        {
            cout<<" "<<" ";
            spc++;
        }
        //star
        int x = r;
        int stc = 1 ;
        while(stc <= 2*r + 1)
        {
            if(stc < (2*r + 1) / 2 + 1)
            {
                cout<<x<<" ";
                x--;
            }
            else
            {
                cout<<x<<" ";
                x++;
            }
            stc++;
        }
        //space
        int sppc = 1;
        while(sppc <= (tr + 1) / 2 - r - 1 )
        {
            cout<<" "<<" ";
            sppc++;
        }
        r++;
        cout<<endl;
    }
    int temp3 = n;
    r = 1 ;
    while( r <= tr)
    {
         if(r < (tr+1) / 2)
        {
            cout<<temp3<<" ";
            temp3--;
        }
        else
        {
            cout<<temp3<<" ";
            temp3++;
        }
        r++;
    }
    return 0;
}
