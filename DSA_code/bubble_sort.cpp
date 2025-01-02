#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[]={1,5,9,0,6,2,3,7,8,4,};
    int q=sizeof(a)/sizeof(a[0]);
    
    bool fl=true;
    for(int i=0; i<q-1; i++)
    {
        fl=true;
        for(int j=0;j<q-1-i; j++)
        {
            if(a[j]>a[j+1])
            {
                int temp;
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
                fl=false;
            }
        }
        if(fl==true)
        {
            break;
        }
    }
    for(int i=0;i<q;i++)
    cout<<a[i]<<" ";
}