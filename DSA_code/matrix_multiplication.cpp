#include<bits/stdc++.h>
using namespace std;
int main()
{
    int mat1[10][10], mat2[10][10],mat3[10][10],c1,c2,r1,r2;
    cout<<"enter the number of rows and columns for mat1\n";
    cin>>r1>>c1;
    cout<<"enter the number of rows and columns for mat2\n";
    cin>>r2>>c2;
    while(c1!=r2)
    {
        cout<<"emter correct row and colum\n";
         cout<<"enter the number of rows and columns for mat1\n";
    cin>>r1>>c1;
    cout<<"enter the number of rows and columns for mat2\n";
    cin>>r2>>c2;

    }
    cout<<"enter the elements of the matrix1\n";
    for(int i=0; i<r1; i++)
    {
        for(int j=0; j<c1; j++)
        {
            cout<<"index "<<i+1<<j+1<<"  ";
            cin>>mat1[i][j];
        }
    }
    cout<<"enter the elements of the matrix2\n";
    for(int i=0; i<r2; i++)
    {
        for(int j=0; j<c2; j++)
        {
             cout<<"index "<<i+1<<j+1<<"  ";
            cin>>mat2[i][j];
        }
    }
    for(int i=0;i<r1;i++)
    {
        for(int j=0; j<c2; j++)
        {
            mat3[i][j] =0;
        }
    }

    for(int i=0;i<r1;i++)
    {
        for(int j=0; j<c2; j++)
        {
            for(int k=0; k<c1; k++)
            mat3[i][j]+=mat1[i][k]*mat2[k][j];
        }
    }

    cout<<"after multiplication"<<endl;
    for(int i=0;i<r1;i++)
    {
        for(int j=0; j<c2; j++)
        cout<<mat3[i][j]<<"  ";

        cout<<endl;
    }


}