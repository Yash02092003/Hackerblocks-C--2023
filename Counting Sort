/*You are given an array, A. Sort this array using counting sort algorithm.

Input Format
First line contains a single integer, n, denoting the size of the array. Next line contains n integers, denoting the elements of the array.

Constraints
1<=N<=10^6 0<=Ai<=10^6

Output Format
Print the array in sorted order.

Sample Input
5
1 3 2 6 5
Sample Output
1 2 3 5 6 */

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
	int max = 0;
	for(int i = 0 ; i < n ; i++)
	{
		if(a[i] > max)
		{
			max = a[i];
		}
	}
	int c[max+1] = {0};
	for(int i = 0 ; i < n ; i++)
	{
		c[a[i]]++;
	}
	for(int i = 0 ; i <= max ; i++)
	{
		for(int j = 1 ; j <= c[i] ; j++)
		{
			cout<<i<<" ";
		}
	}
return 0;
}
