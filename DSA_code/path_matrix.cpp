//graph[i][j] = graph[i][j] || (graph[i][k] && graph[k][j]);
#include <bits/stdc++.h>
using namespace std;
#define v 4
#define INF 999999
int main()
{
    int gr[][v]={  {0, 1, 0, 0},
        {0, 0, 1, 0},
        {0, 0, 0, 1},
        {0, 0, 0, 0} };
    for(int k=0; k<v; k++)
    {
        for(int j=0; j<v; j++)
        {
            for(int i=0; i<v; i++)
            {
                gr[i][j] = gr[i][j] || (gr[i][k] && gr[k][j]);
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