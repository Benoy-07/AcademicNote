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
    sort(a, a+n);
    cout<<"the sorted array "<<endl;
    for(int i=0; i<n; i++)
    {
      cout << a[i]<<"  ";  
    }
    cout<<"enter the searching element"<<endl;
    cin>>iteam;
    int left=0,right=n-1;
    while(left<=right)
    {
        
        int mid=(left+right)/2;
        if(a[mid]==iteam)
        {
            cout<<"the iteam is found at "<<mid+1<<" position"<<endl; 
            fo=1;
            break;
        }
        else if(a[mid]>iteam)
        right=mid-1;
        else
        left=mid+1;
    }
    if(fo==0)
    cout<<"the iteam is not found"<<endl;
}