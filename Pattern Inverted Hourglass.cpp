/*Take N as input. For a value of N=5, we wish to draw the following pattern :

             5                   5 
             5 4               4 5 
             5 4 3           3 4 5 
             5 4 3 2       2 3 4 5 
             5 4 3 2 1   1 2 3 4 5 
             5 4 3 2 1 0 1 2 3 4 5 
             5 4 3 2 1   1 2 3 4 5 
             5 4 3 2       2 3 4 5 
             5 4 3           3 4 5 
             5 4               4 5 
             5                   5 
Input Format
Take N as input.

Constraints
Output Format
Pattern should be printed with a space between every two values.

Sample Input
5
Sample Output
5                   5 
5 4               4 5 
5 4 3           3 4 5 
5 4 3 2       2 3 4 5 
5 4 3 2 1   1 2 3 4 5 
5 4 3 2 1 0 1 2 3 4 5 
5 4 3 2 1   1 2 3 4 5 
5 4 3 2       2 3 4 5 
5 4 3           3 4 5 
5 4               4 5 
5                   5 
*/
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int tr = 2 * n + 1;
    int r = 1;
    int c = 0;
    while(r < (tr+1)/2)
    {
        //star
        int x = n;
        int y = n - r + 1 ;
        int stc = 1 ;
        while(stc <= r)
        {
            cout<<x<<" ";
            x--;
            stc++;
        }
        //space
        int spc = 1;
        while(spc <= tr- (2*r))
        {
            cout<<" "<<" ";
            spc++;
        }
        //star
        int sttc = 1;
        while(sttc <= r)
        {
            cout<<y<<" ";
            y++;
            sttc++;
        }
        r++;
        cout<<endl;
    }
    r = 1;
    int x = n ;
    while(r <= tr)
    {
        if(r <= n)
        {
            cout<<x<<" ";
            x--;
        }
        else
        {
            cout<<x<<" ";
            x++;
        }
        r++;
    }
    cout<<endl;
    r = 1;
    while(r < (tr+1)/2)
    {
        //star
        int x = n ;
        int y = r;
        int stc = 1 ;
        while(stc <= (tr+1) / 2 -r)
        {
            cout<<x<<" ";
            x--;
            stc++;
        }
        //space
        int spc = 1;
        while(spc <= 2*r - 1 )
        {
            cout<<" "<<" ";
            spc++;
        }
        //star
        int sttc = 1;
        while(sttc <= (tr+1) / 2 -r)
        {
            cout<<y<<" ";
            y++;
            sttc++;
        }
        r++;
        cout<<endl;
    }
    return 0;
}
