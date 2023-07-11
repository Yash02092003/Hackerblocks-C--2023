/*Take N (number of rows - only odd numbers allowed), print the following pattern (for N = 5).

      *
   *  *  *  
*  *  *  *  *  
   *  *  *
      *
Input Format
Constraints
0 < N < 10 (only odd numbers allowed)

Output Format
Sample Input
5
Sample Output
      *
    * * *
  * * * * *
    * * *
      *
Explanation
Each '*' is separated from other by a tab.*/

#include<iostream>
using namespace std;
int main() {
	int tr;
	cin>>tr;
	int r = 1;
	while(r<=((tr+1)/2-1))
	{
		//space
		int i=1;
		while(i<=(tr+1)/2-r)
		{
			cout<<" "<<'\t';
			i++;
		}
		//star
		int j=1;
		while(j<=(2*r-1))
		{
			cout<<"*"<<'\t';
			j++;
		}
		//space
		int k=1;
		while(k<=(tr+1)/2-r)
		{
			cout<<" "<<'\t';
			k++;
		}
		r=r+1;
		cout<<endl;
	}
	r=1;
	while(r<=tr)
	{
		cout<<"*"<<'\t';
		r=r+1;
	}
    cout<<endl;
	r=1;
	while(r<=(tr+1)/2-1)
	{
		//space
		int i=1;
		while(i<=r)
		{
			cout<<" "<<'\t';
			i++;
		}
		//star
		int j=1;
		while(j<=(tr-2*r))
		{
			cout<<"*"<<'\t';
			j++;
		}
		//space
		int k=1;
		while(k<=r)
		{
			cout<<" "<<'\t';
			k++;
		}
		r=r+1;
		cout<<endl;
	}
	return 0;
}
