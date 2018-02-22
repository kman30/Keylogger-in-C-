#include <iostream>
#include <vector>
#include <stack>

using namespace std;
vector<int> v[10];
void addedge(int e1,int e2)
{
    v[e1].push_back(e2);
}

int main()
{
    int nodes,edges,x,y,s,f;
    stack<int> st;
    cin>>nodes;
    bool *visited=new bool[nodes];
    for(int i=0;i<nodes;i++)
        visited[i]=false;
    cout<<"enter the edges"<<endl;
    cin>>edges;
    for(int i=0;i<edges;i++)
    {
        cin>>x>>y;
        addedge(x,y);
    }
    cout<<"enter the vertex for dfs"<<endl;
    cin>>s;
    st.push(s);
    visited[s]=true;
    while(!st.empty())
    {
        f=st.top();
        st.pop();
        cout<<f<<endl;
        for(int i=0;i<v[f].size();i++)
        {
            if(visited[v[f][i]]==false)
            {

                st.push(v[f][i]);
                visited[v[f][i]]=true;
            }
        }
    }
    return 0;
}
