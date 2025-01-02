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
void insertatposition(int position,int n)
{
    Node *newnode=new Node;
    newnode->data=n;
    if(position==1)
    {
        newnode->next=head;
        head=newnode;
    }
   else { Node *temp=head;
    for(int i=1;i<position-1&&temp!=NULL;i++)
    {
        temp=temp->next;
    }
    if(temp==NULL)
    cout<<"Invalid position\n";

    newnode->next=temp->next;
    temp->next=newnode;}
}
void print()
{
    Node *temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<"-> ";
        temp=temp->next;
    }
    cout<<"NULL";
}
int main()
{
     int f,l,p,k;
    cout<<"enter the number of element\n";
    cin >> f;
    for(int i=0; i<f; i++)
    {
        cin>>l;
        insert(l);
    }
    print();
    cout<<"\nenter the element and his position\n";
    cin>>p>>k;
    insertatposition(k,p);
    print();
}