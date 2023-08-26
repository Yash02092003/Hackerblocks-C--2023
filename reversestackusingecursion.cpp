#include <iostream>
#include <stack>
using namespace std;
void insertatbottom(stack<int> &s, int d)
{
    //base case
    if(s.empty())
    {
        s.push(d);
        return;
    }
    //recursive case
    int ele = s.top();
    s.pop();
    insertatbottom(s,d);
    s.push(ele);
}
void reverse(stack<int> &s)
{
    //base case
    if(s.empty())
    {
        return;
    }
    //recursive case
    int d = s.top();
    s.pop();
    reverse(s);
    insertatbottom(s,d);
}
int main() {
    int n;
    cin>>n;
    stack<int> s;
    for(int i = 1 ; i <= n ; i++)
    {
        int d;
        cin>>d;
        s.push(d);
    }
    reverse(s);
    while(!s.empty())
    {
        cout<<s.top()<<endl;
        s.pop();
    }
}
