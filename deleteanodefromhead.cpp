//linked list deleting a node from head
#include<iostream>
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
void insertattail(node * &head , node * &tail , int d)
{
    node * y = new node(d);
    if(head == NULL)
    {
        head = y;
        tail = y;
    }
    else
    {
        tail->next = y;
        tail = y;
    }
}
void print(node * head)
{
    while(head != NULL)
    {
        cout<<head->data<<"->";
        head = head->next;
    }
    cout<<"NULL";
    cout<<endl;
}
void deleteathead(node * &head , node * &tail)
{
    if(head == NULL)
    {
        return;
    }
    else if(head->next == NULL)
    {
        delete head;
        head = NULL;
        tail = NULL;
    }
    else
    {
        node * temp = head->next;
        delete head;
        head = temp;
    }
}
int main(){
    node * head = NULL;
    node * tail = NULL;
    int n;
    cin>>n;
    for(int i = 1 ; i <=n ; i++)
    {
        int d;
        cin>>d;
        insertattail(head , tail , d);
    }
    print(head);
    deleteathead(head,tail);
    print(head);
    return 0;
}
