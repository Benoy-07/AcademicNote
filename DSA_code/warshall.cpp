#include <bits/stdc++.h>
using namespace std;
#define v 4
#define INF 999999
int main()
{
    int gr[][v]={ { 0, 5, INF, 10 },
                        { INF, 0, 3, INF },
                        { INF, INF, 0, 1 },
                        { INF, INF, INF, 0 } };
    for(int k=0; k<v; k++)
    {
        for(int j=0; j<v; j++)
        {
            for(int i=0; i<v; i++)
            {
                if(gr[i][j]>gr[i][k]+gr[k][j]&&gr[i][k]!=INF&&gr[k][j]!=INF)
                {
                    gr[i][j]=gr[i][k]+gr[k][j];
                }
            }
        }
    } 
    for (int i = 0; i < v; i++) {
        for (int j = 0; j < v; j++) {
            if (gr[i][j] == INF)
                cout << "INF"<<" " ;
            else
                cout << gr[i][j] << "   ";
        }
        cout << endl;
    }                  
}