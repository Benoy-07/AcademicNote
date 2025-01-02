#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,iteam,fo=0;
    cout<<"enter the number of elements"<<endl;
    cin >> n;
    int a[n];
    cout<<"Enter the element"<<endl;
    for(int i=0; i<n; i++)
    {
      cin >> a[i];  
    }
    cout<<"enter the searching element"<<endl;
    cin>>iteam;
    for(int i=0; i<n; i++)
    {
        if(a[i]==iteam)
        {
           cout<<"the iteam is found at "<<i+1<<" position"<<endl; 
           fo=1;
           break;
        }
    }
    if(fo==0)
    cout<<"the iteam is not found"<<endl;
}