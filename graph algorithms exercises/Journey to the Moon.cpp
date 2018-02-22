#includebitsstdc++.h
using namespace std;
vectorint adj;
int visited;
int totacomp;
void DFS(int v)
{
    visited[v]=1;
    totacomp++;
    for(auto i=adj[v].begin();i!=adj[v].end();i++)
    {
        if(!visited[i])
        {
            visited[i]=1;
            DFS(i);
        }
    }
}
int main()
{
     long int n,u,v,numberofcomponents=0,eachcomponent[100000];
    cinn;
    visited=new int[n];
    for(int i=0;in;i++)
        visited[i]=0;
    adj=new vectorint[n];
    long int edges;
    cinedges;
    for(int i=0;iedges;i++)
    {
        cinuv;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    for(int i=0;in;i++)
    {
        if(visited[i]==0)
        {   totacomp=0;
            DFS(i);
            eachcomponent[numberofcomponents]=totacomp;
            numberofcomponents++;
        }
    }
    long long int sum=0;
    long long int result=0;
    for(int i=0;inumberofcomponents;i++)
    {
        result+=sumeachcomponent[i];
        sum+=eachcomponent[i];
    }
    coutresult;
}
