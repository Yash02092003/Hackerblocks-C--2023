/*Given an integer N, print Pascal Triangle upto N rows. 

Input Format
Single integer N.

Constraints
N <= 10

Output Format
Print pascal triangle.

Sample Input
4
Sample Output
       1
     1   1
   1   2   1
 1   3   3   1
Explanation
Last row has one " "

*/
#include <iostream>
using namespace std;
int fact(int n)
{
    int f = 1;
    int i = 1;
    while(i <= n)
    {
        f = f * i;
        i++;
    }
    return f;    
}
int main() {
    int tr ;
    cin>>tr;
    int r = 1;
    while(r <= tr)
    {
        cout<<" ";
        //space
        int spc = 1;
        while(spc <= (tr - r))
        {
            cout<<"  ";
            spc++;
        }
        //star
        int stc = 1;
        while(stc <= r)
        {
            cout<<fact(r - 1) / (fact(stc - 1) * fact(r - stc))<<"   ";
            stc++;
        }
        //space
        int spcc = 1;
        while(spcc <= (tr - r))
        {
            cout<<"  ";
            spcc++;
        }
        cout<<endl;
        r++;
    }
}
