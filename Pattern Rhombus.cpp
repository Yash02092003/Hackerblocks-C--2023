/*Take N (number of rows), print the following pattern (for N = 3).

                         1
                       2 3 2
                     3 4 5 4 3
                       2 3 2
                         1
Input Format
Constraints
0 < N < 10

Output Format
Sample Input
3
Sample Output
                1
	2	3	2
3	4	5	4	3
	2	3	2
		1
Explanation
Each number is separated from other by a tab.

*/
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int tr = 2 * n - 1;
    int r = 1 ;
    while(r < n)
    {
        int x = r;
        //space
        int spc = 1;
        while(spc <= (tr + 1) / 2 - r)
        {
            cout<<" "<<" ";
            spc++;
        }
        //star
        int stc = 1;
        while(stc <= (2*r) - 1)
        {
            if(stc < r)
            {
                cout<<x<<" ";
                x++;
            }
            else
            {
                cout<<x<<" ";
                x--;
            }
            stc++;
        }
        //space
        int sppc = 1;
        while(sppc <= (tr+1) / 2 - r)
        {
            cout<<" "<<" ";
            sppc++;
        }
        r++;
        cout<<endl;
    }
    r = 1;
    int x = n;
    while(r <= tr)
    {
        if(r < n)
        {
            cout<<x<<" ";
            x++;
        }
        else
        {
            cout<<x<<" ";
            x--;
        }
        r++;
    }
    cout<<endl;
    r = 1 ;
    while(r < n)
    {
        int x = n - r;
        //space
        int spc = 1;
        while(spc <= r)
        {
            cout<<" "<<" ";
            spc++;
        }
        //star
        int stc = 1;
        while(stc <= tr - (2*r))
        {
            if(stc < n - r)
            {
                cout<<x<<" ";
                x++;
            }
            else
            {
                cout<<x<<" ";
                x--;
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
    return 0;
}
