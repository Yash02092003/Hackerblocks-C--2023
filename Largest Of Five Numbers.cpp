/*Read as input 5 Numbers and print the largest out of them

Input Format
5 Space Separated Numbers (both positive and negative)

Constraints
Output Format
Sample Input
2 4 7 -2 3
Sample Output
7
Explanation
In the given case 7 is largest among the given numbers.*/
#include <iostream>
using namespace std;
int main()
{
	int a;
	cin>>a;
	int b;
	cin>>b;
	int c;
	cin>>c;
	int d;
	cin>>d;
	int e;
	cin>>e;
	if((a>b)&&(a>c)&&(a>d)&&(a>e))
	{
		cout<<a;
	}
	else if((b>a)&&(b>c)&&(b>d)&&(b>e))
	{
		cout<<b;
	}
	else if((c>a)&&(c>b)&&(c>d)&&(c>e))
	{
		cout<<c;
	}
	else if((d>a)&&(d>b)&&(d>c)&&(d>e))
	{
		cout<<d;
	}
	else{
		cout<<e;
	}
	return 0;
}
