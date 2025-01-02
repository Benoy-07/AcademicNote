#include<iostream>
using namespace std;

class Node{
    public:
    int key;
    int data;
    Node* next;

    Node()
    {
        key=0;
        data=0;
        next=NULL;
    }

    Node(int k,int d)
    {
        key=k;
        data=d;
    }
};

class CircularLinkedList
{
    public:
    Node* head;

   CircularLinkedList()
    {
        head=NULL;
    }

    

    Node* nodeExists(int k)
    {
        Node* temp = NULL;
        Node* ptr=head;

        if(ptr==NULL)
        {
            return temp;
        }
        else
        {
            do{
                if(ptr->key==k)
                {
                    temp = ptr;
                    
                }
                ptr=ptr->next;
            }while(ptr!=head);
            return temp;
        }
    } 

    void appendNode(Node* n)
    {
        if(nodeExists(n->key)!=NULL)
        {
            cout<<"N A e"<<endl;
        }
        else {
            if(head==NULL)
            {
                head=n;
                n->next=head;
                cout<<"N a"<<endl;
            }
            else{
                Node* ptr =head;

                while (ptr->next!=head)
                {
                    ptr =ptr->next;
                }

                ptr->next=n;
                n->next=head;
                cout<<"N a"<<endl;

                }
        }
    }

    void prepandNode(Node* n)
    {
        if(nodeExists(n->key)!=NULL)
        {
            cout<<"N A E"<<endl;

        }
        else
        {
             if(head==NULL)
            {
                head=n;
                n->next=head;
                cout<<"N a"<<endl;
            }
            else{
            Node* ptr=head;
            while(ptr->next!=head)
            ptr=ptr->next;

            ptr->next=n;
            n->next=head;
            head=n;
            cout<<"N P"<<endl;
            }
        }
    }

    void insertNodeAfter(int k,Node* n)
    {
        Node* ptr=nodeExists(k);
        if(ptr==NULL)
        {
            cout<<"N n e w k v"<<endl;
        }
        else{
            if(nodeExists(n->key)!=NULL)
            cout<<"N A E"<<endl;
            else
            {
                if(ptr->next==head)
                    {
                        n->next=head;
                        ptr->next=n;
                        cout<<"N I"<<endl;
                    }
                else
                {
                    n->next=ptr->next;
                    ptr->next=n;
                    cout<<"N I"<<endl;
                }    
               
            }
        }
    }

    void deleteNodeByKey(int k)
    {
        Node *ptr=nodeExists(k);
        if(ptr==NULL)
        cout<<"N N E"<<endl;
        else{
        
         if(ptr==head)
        {
            if(head->next==NULL)
            {
                head=NULL;
                cout<<"delete"<<endl;
            }
            else{
                Node* ptr1=head;
                
                while(ptr1->next!=head)
                ptr1=ptr1->next;

                ptr1->next=head->next;
                head=head->next;

               
            }
        }
        else
        {
            Node* temp=NULL;
                Node* prevptr=head;
                Node* currentptr=head->next;

                while(currentptr!=NULL)
                {
                    if(currentptr->key==k)
                    {
                        temp=currentptr;
                        currentptr=NULL;

                    }
                    else
                    {
                        prevptr=prevptr->next;
                        currentptr=currentptr->next;
                    }
                }

                prevptr->next=temp->next;
        }
        }
    }

    void updateNodeByKey(int k,int d)
    {
        Node* ptr=nodeExists(k);
        
        if(ptr!=NULL)
        {
            ptr->data=d;
            cout<<"Updated"<<endl;
        }
        else{
            cout<<"N D N E K V"<<endl;
        }
    }

    void printList()
    {
        if(head==NULL)
        cout<<"N N I S L L"<<endl;
        else
        {
            cout<<endl<<"s l l v";
             cout<<head<<" "<<endl;
            Node* temp=head;

           do
            {
               
                cout<<"("<<temp->key<<","<<temp->data<<","<<temp->next<<")-->";
                temp=temp->next;
            } while(temp!=head);
        }
    }

};




int main()
{
    CircularLinkedList s;
    int option;
    int key1,k1,data1;

    do{
        cout<<"\nexit 0"<<endl;
        cout<<"1.append"<<endl;
        cout<<"2.prependnode"<<endl;
        cout<<"3.insert"<<endl;
        cout<<"4.delete"<<endl;
        cout<<"5.change"<<endl;
        cout<<"6.display"<<endl;
        cout<<"7.screen clear"<<endl;

        cin>>option;
        Node *n1= new Node();

        switch(option)
        {
            case 0:
            break;
            case 1:
            cout<<"Enter key and data"<<endl;
            cin>>key1;
            cin>>data1;
            n1->key=key1;
            n1->data=data1;
            s.appendNode(n1);
            break;
            case 2:
            cout<<"Enter key and data"<<endl;
            cin>>key1;
            cin>>data1;
            n1->key=key1;
            n1->data=data1;
            s.prepandNode(n1);
            break;
            case 3:
            cout<<"which position do you insert"<<endl;
            cin>>k1;
            cout<<"enter key and data of new node"<<endl;
            cin>>key1;
            cin>>data1;
            n1->key=key1;
            n1->data=data1;

            s.insertNodeAfter(k1,n1);
            break;
            case 4:
            cout<<"delete node "<<endl;
            cin>>k1;
            s.deleteNodeByKey(k1);
            break;
            case 5:
            cout<<"update node "<<endl;
            cin>>key1;
            cin>>data1;
            s.updateNodeByKey(key1,data1);
            break;
            case 6:
            s.printList();
            break;
            case 7:
            system("cls");
            break;
            default:
            cout<<"enter proper option"<<endl;
        }

    }while(option!=0);
}