#include <iostream>
#include <vector>

using namespace std;
vector<int> v[10];
bool visited[10];
void addedge(int e1,int e2)
{
    v[e1].push_back(e2);
    v[e2].push_back(e1);
}
void initialize()
{
    for(int i=0;i<10;i++)
    {
        visited[i]=false;

    }
}
void dfsRecursive(int s)
{
    visited[s]=true;
    for(int i=0;i<v[s].size();i++)
    {
        if(visited[v[s][i]]==false)
        {
            dfsRecursive(v[s][i]);
        }
    }
}


int main()
{
    int nodes,edges,x,y;
    int connectedComponents=0;
    cin>>nodes;
    initialize();
    cin>>edges;
    for(int i=0;i<edges;i++)
    {
        cin>>x>>y;
        addedge(x,y);
    }
    for(int i=0;i<nodes;i++)
    {
        if(visited[i]==false)
        {dfsRecursive(i);
        connectedComponents++;
        }
    }
    cout<<connectedComponents;
    return 0;
}
