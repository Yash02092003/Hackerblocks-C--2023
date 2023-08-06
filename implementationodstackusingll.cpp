#include <iostream>
using namespace std;
class node{
public:
    int data;
    node * next;
    node(int d)
    {
        data = d;
    }
};
class stack{
    node * head;
    int l = 0;
public:
    stack(){
        head == NULL;
        l = 0;
    }
    void push(int d)
    {
        node * newnode = new node(d);
        if(head == NULL)
        {
            head = newnode;
            l++;
        }
        else
        {
            newnode->next = head;
            head = newnode;
            l++;
        }
    }
    void pop()
    {
        if(head == NULL)
        {
            return;
        }
        else if(head->next == NULL)
        {
            delete head;
            head = NULL;
            l--;
        }
        else
        {
            node * temp = head;
            head = temp->next;
            delete temp;
            temp = NULL;
            l--;
        }
    }
    int top(){
        return head->data;
    }
    bool empty(){
        return l==0;
    }
    int size(){
        return l;
    }
};
int main(){
    stack s;
    int n;
    cin>>n;
    int d;
    for(int i = 0 ; i < n ; i++)
    {
        cin>>d;
        s.push(d);
    }
    while(!s.empty())
    {
        cout<<s.top()<<endl;
        s.pop();
    }
    return 0;
}
