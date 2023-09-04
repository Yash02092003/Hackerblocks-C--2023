//implement stack using two queues
#include <iostream>
#include <queue>
using namespace std;
class stack{
    queue<int> q1;
    queue<int> q2;
public:
    void push(int d){
        if(q1.empty() and q2.empty())
        {
            q1.push(d);
        }
        else if(!q1.empty() and q2.empty())
        {
            q1.push(d);
        }
        else
        {
            q2.push(d);
        }
    }
    void pop(){
        if(q1.empty() and q2.empty())
        {
            return;
        }
        else if(!q1.empty() and q2.empty())
        {
            while(q1.size() > 1)
            {
                q2.push(q1.front());
                q1.pop();
            }
            q1.pop();
        }
        else
        {
            while(q2.size() > 1)
            {
                q1.push(q2.front());
                q2.pop();
            }
            q2.pop();
        }
    }
    
    bool empty(){
        return q1.empty() and q2.empty();
        
    }
    
    int top(){
        if(q1.empty() and q2.empty())
        {
            return -1;
        }
        else if(!q1.empty() and q2.empty())
        {
            while(q1.size() > 1)
            {
                q2.push(q1.front());
                q1.pop();
            }
            int x = q1.front();
            q2.push(q1.front());
            q1.pop();
            return x;
        }
        else
        {
            while(q2.size() > 1)
            {
                q1.push(q2.front());
                q2.pop();
            }
            int x = q2.front();
            q1.push(q2.front());
            q2.pop();
            return x;
        }
        
    }
    
    int size(){
        return q1.size() + q2.size();
    }
};


int main(){
    stack s;
    s.push(5);
    s.push(4);
    s.push(3);
    s.push(2);
    s.push(1);
    cout<<s.size()<<endl;
    cout<<s.top()<<endl;
    cout<<s.empty()<<endl;
    while(!s.empty())
    {
        cout<<s.top()<<" ";
        s.pop();
    }
    cout<<endl;
    cout<<s.size()<<endl;
    cout<<s.empty()<<endl;
    return 0;
}
