/*Take N (number of rows), print the following pattern (for N = 4).

                       1           1
                       1 2       2 1  
                       1 2 3   3 2 1
                       1 2 3 4 3 2 1   
Input Format
Constraints
0 < N < 10

Output Format
Sample Input
4
Sample Output
1						1
1	2				2	1
1	2	3		3	2	1
1	2	3	4	3	2	1
*/
#include <iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int tr = n;
	int r = 1;
	while( r < tr)
	{
		//star
		int s1 = 1;
		int s2 = r;
		int stc = 1;
		while(stc <= r)
		{
			cout<<s1<<" ";
			s1++;
			stc++;
		}
		//space
		int spc = 1;
		while(spc <= (2*tr)-(2*r)-1)
		{
			cout<<" "<<" ";
			spc++;
		}
		//star
		int sttc = 1;
		while(sttc <= r)
		{
			cout<<s2<<" ";
			s2--;
			sttc++;
		}
		r++;
		cout<<endl;
	}
	r = 1;
	int x = 1;
	while( r < 2*tr)
	{
		if(r < tr)
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
	return 0;
}
