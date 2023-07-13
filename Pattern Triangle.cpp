/*Take N (number of rows), print the following pattern (for N = 4).

                       1 
                     2 3 2
                   3 4 5 4 3
                 4 5 6 7 6 5 4
Input Format
Constraints
0 < N < 10

Output Format
Sample Input
4
Sample Output
      1
		2	3	2
	3	4	5	4	3
4	5	6	7	6	5	4
Explanation
Each number is separated from other by a tab.*/
#include<iostream>
using namespace std;
int main() {
	int n;
	cin>>n;
	if((n > 0) and (n < 10))
	for(int i = 1; i<=n ; i++){
		for(int j=n; j>i ; j--)
		{
			cout<<'\t';
		}
		int count = i;
		for(int k=1; k<=i ; k++)
		{
			cout<<count<<'\t';
			count++;
		}
		int nc = 2*i-2;
 		for(int l = 2; l<=i ; l++)
		{
			cout<<nc<<'\t';
			nc--;
		}
		cout<<endl;
	}
	return 0;
}
