// implement circular queue using an array
#include<iostream>
using namespace std;
class circularqueue{
    int *arr;
    int ts;
    int cs;
    int f;
    int r;
public:
    circularqueue(int s)
    {
        arr = new int[s];
        ts = s;
        cs = 0;
        f = 0;
        r = -1;
    }
    void push(int d)
    {
        if(cs < ts)
        {
            r = (r+1)%ts;
            arr[r] = d;
            cs++;
        }
        else
        {
            cout<<"OverFlow"<<endl;
        }
    }
    void pop()
    {
        if(cs > 0)
        {
            f = (f+1)%ts;
            cs--;
        }
        else
        {
            cout<<"UnderFlow"<<endl;
        }
    }
    int front()
    {
        return arr[f];
    }
    bool empty()
    {
        return cs == 0;
    }
    int size()
    {
        return cs;
    }
};
int main(){
    circularqueue q(5);
    q.push(5);
    q.push(4);
    q.push(3);
    q.push(2);
    q.push(1);
    q.push(3);
    cout<<q.size()<<endl;
    return 0;
}
