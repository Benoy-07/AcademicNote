#include<bits/stdc++.h>

using namespace std;

#define  V 5
char adjMatrix[V][V] = {0};

void addEdge(char src, char dest)
{
    adjMatrix[src][dest] = 1; // SHOB EDGE ER VALUE 1
    adjMatrix[dest][src] = 1; // SHOB EDGE ER VALUE 1
}

void st(char start)
{
    bool visited[V] = {false};
    queue<char> q;

    visited[start] = true;
    q.push(start);

    while (!q.empty())
    {
        char currVertex = q.front();
        cout << "Visited " << currVertex << " ";
        q.pop();

        for (int i = 0; i < V; i++)
        {
            if (adjMatrix[currVertex][i] == 1 && !visited[i])
            {
                visited[i] = true;
                q.push(i);
            }
        }
    }
}

int main()
{
    addEdge('A', 'D');
    addEdge('A', 'B');
    addEdge('A', 'C');
    addEdge('B', 'C');
    addEdge('D', 'C');
    addEdge('D', 'E');
    addEdge('E', 'C');

    cout << "starting point:\n";
    st('E');

    return 0;
}