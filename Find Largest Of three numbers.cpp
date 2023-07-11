/*Input three numbers, print the largest of these numbers

Input Format
Three numbers (both positive and negative numbers are allowed)

Constraints
Output Format
the largest number

Sample Input
5 7 4
Sample Output
7 */

#include<iostream>
using namespace std;
int main() {
	int a;
	cin>>a;
	int b;
	cin>>b;
	int c;
	cin>>c;
	if(a>=b && a>=c){
		cout<<a<<endl;
	}
	else if(b>=a && b>=c){
		cout<<b<<endl;
	}
	else{
		cout<<c<<endl;
	}
	return 0;
}
