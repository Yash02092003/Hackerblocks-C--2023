//linked list craetion
#include <iostream>
using namespace std;
class node{
public:
    int data;
    node * next;
    node(int d)
    {
        data = d;
        next = NULL;
    }
};
void insertathead(node * &head , node * &tail , int data)
{
    node*y=new node(data);
    if(head == NULL)
    {
        head = y;
        tail = y;
    }
    else
    {
        y->next=head;
        head=y;
    }
}
void print(node*head)
{
    while(head != NULL)
    {
        cout<<head->data<<"->";
        head = head->next;
    }
}
int main()
{
    node * head = NULL;
    node * tail = NULL;
    int n;
    cin>>n;
    for(int i = 1 ; i <= n ; i++)
    {
        int d;
        cin>>d;
        insertathead(head , tail , d);
    }
    print(head);
    return 0;
}
