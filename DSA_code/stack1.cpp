#include<iostream>
#include<string>
using namespace std;
class Stack
{
  private:
   int top=-1;
   int arr[5];
 public:
    Stack()
    {
        for(int i=0; i<5; i++)
        arr[i] =0;

    }
    void push(int x)
    {
        if(top==4)
        cout<<"full"<<endl;
        else
        {
            top++;
            arr[top] =x;
        }
    }
    int pop()
    {
        if(top==-1)
        {
        cout<<"empty"<<endl;
        return 0;
        }
        else
        {
            int popvalue=arr[top];
            arr[top] =0;
            top--;
            return popvalue;
        }
    }
    int peek(int pos)
    {
        if(top==-1)
        {
        cout<<"empty"<<endl;
        return 0;
        }
        else
        return arr[pos-1];
    }
    int count()
    {
        return (top+1);
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
    Stack s1;
    int position,option,value;
    do{
        cout<<"exit 0"<<endl;
        cout<<"1.push"<<endl;
        cout<<"2.pop"<<endl;
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
        s1.push(value);
        break;
        case 2:
        cout<<s1.pop()<<endl;
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
