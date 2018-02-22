#include <iostream>
#include <vector>
using namespace std;
vector<int> v[10];
bool visited[10];
void dfs(int s)
{
    visited[s]=true;
    for(int i=0;i<v[s].size();i++)
    {
        if(visited[v[s][i]]==false)
        {
            dfs(v[s][i]);
        }
    }
}
void initialize()
{
    for(int i=0;i<10;i++)
    {
        visited[i]=false;
    }
}
bool isReachable(int s,int d)
{
    if(s==d)
        return true;
    dfs(s);
    if(visited[d]==true)
    {
        cout<<"YEs possible"<<endl;
        return true;
    }
    else
        return false;
}
void addedge(int e1,int e2)
{
    v[e1].push_back(e2);
}




int main()
{
    int nodes,edges,x,y,source,destination;
    cout<<"enter the total nodes"<<endl;
    cin>>nodes;
    initialize();
    cout<<"enter the number if edges"<<endl;
    cin>>edges;
    for(int i=0;i<edges;i++)
    {
        cin>>x>>y;
        addedge(x,y);
    }
    cout<<"enter the source for dfs and destination"<<endl;
    cin>>source>>destination;
    if(isReachable(source,destination)==true)
    {
        cout<<"Yes"<<endl;
    }
    else
        cout<<"not"<<endl;


    return 0;
}

