/*Given number of rows N, you have to print a Hollow Rhombus. See the output for corresponding given input.

Input Format
Single integer N.

Constraints
N <= 20

Output Format
Print pattern.

Sample Input
5
Sample Output
    *****
   *   *
  *   *
 *   *
*****
Explanation
For any input N. First line contains 4 space and then 5 {*} and then the second line contains according to the output format.

*/
#include<iostream>
using namespace std;
int main() {
	int tr;
	cin>>tr;
	int r=1;
	while(r<tr)
	{
		cout<<" ";
		r=r+1;
	}
	r=1;
	while(r<=tr)
	{
		cout<<"*";
		r=r+1;
	}
	cout<<endl;
	r=1;
	while(r<=(tr-2))
	{
		int i=1;
		while(i<=(tr-r-1))
		{
			cout<<" ";
			i++;
		}
		cout<<"*";
		int j=1;
		while(j<=(tr-2))
		{
			cout<<" ";
			j++;
		}
		cout<<"*";
		int k=1;
		while(k<=r)
		{
			cout<<" ";
			k++;
		}
		cout<<endl;
		r=r+1;
	}
	r=1;
	while(r<=tr)
	{
		cout<<"*";
		r++;
	}
	r=1;
	while(r<tr)
	{
		cout<<" ";
		r++;
	}
	return 0;
}
