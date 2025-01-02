#include<bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    Node *next;
};
Node *head=NULL;
void insert(int n)
{
    Node *newnode=new Node;
    newnode->data=n;
    newnode->next=NULL;
    if(head==NULL)
    {
        head=newnode;
    }
   else{ Node *temp=head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=newnode;
   }
}
void deleteNodeatposition(int position)
{
    if(head==NULL)
    cout<<"empty\n";
    Node *temp = head;
    if(position==1)
    {
       head=temp->next;
        delete temp;

    }
    else{
    for(int i=1; i<position-1&&temp!=NULL; i++)
    {
        temp=temp->next;
    }
    if(temp==NULL||temp->next==NULL)
    cout<<"does not exist\n";
    Node *next=temp->next->next;
    delete temp->next;
    temp->next=next;
    }

}
void print()
{
    Node *temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ->";
        temp=temp->next;
    }
    cout<<"NULL";
}
int main()
{
    int f,l,p;
    cout<<"enter the number of element\n";
    cin >> f;
    for(int i=0; i<f; i++)
    {
        cin>>l;
        insert(l);
    }
    print();
     cout<<"\nenter the deleted position\n";
    cin>>p;
    deleteNodeatposition(p);
    print();
}