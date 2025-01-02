#include<iostream>
#include<string>
using namespace std;
class Queue
{
  private:
   int front=-1,rear=-1;
   int arr[5];
 public:
    Queue()
    {
        for(int i=0; i<5; i++)
        arr[i] =0;

    }
    void Enqueue(int x)
    {
        if(rear==4)
        cout<<"full"<<endl;
        else
        {
            if(front==-1)
            front=0;

            rear++;
            arr[rear] =x;
        }
    }
    void Dequeue()
    {
        if(front==-1)
        cout<<"empty"<<endl;
        else
        {
           
            if(front==rear)
            {
                front=-1;
                rear=-1;
            }
            else
            {
            arr[front] =0;
            front++;
            }
           
        }
    }
    int peek(int pos)
    {
        if(front==-1)
        cout<<"empty"<<endl;
        else
        return arr[pos-1];
    }
    int count()
    {
        return (rear-front+1);
    }
    void change(int pos,int value)
    {
        arr[pos-1] =value;
    }
    void display()
    {
        for(int i=4;i>=0;i--)
        {
            cout<<arr[i]<<" "<<endl;
        }
    }
};

int main()
{
    Queue s1;
    int position,option,value;
    do{
        cout<<"exit 0"<<endl;
        cout<<"1.enqueue"<<endl;
        cout<<"2.dequeue"<<endl;
        cout<<"3.peek"<<endl;
        cout<<"4.count"<<endl;
        cout<<"5.change"<<endl;
        cout<<"6.display"<<endl;
        cout<<"7.screen clear"<<endl;

        cin>>option;
        switch (option)
        {
        case 0:
        break;
        case 1:
        cin>> value;
        s1.Enqueue(value);
        break;
        case 2:
        s1.Dequeue();
        break;
        case 3:
        cin>>position;
        cout<<s1.peek(position)<<endl;
        break;
        case 4:
        cout<<s1.count()<<endl;
        break;
        case 5:
        cin>>position>>value;
        s1.change(position,value);
        break;
        case 6:
        s1.display();
        break;
        case 7:
        system("cls");
        break;
        default: 
        cout<<"right"<<endl;
        
        } 

    }while(option!=0);


}
