#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int q[1000],front=1;
void push(int k)
{
    q[front]=k;
    front++;
}
void del()
{
    for(int i=0;i<front-1;i++)
    {
        q[i]=q[i+1];
    }
    front--;
}
void bfs(vector<int> adj[],int vis[],int dist[],int k)
{
    push(k);
    vis[k]=1;
    dist[k]=0;
    while(front!=0)
    {
        int s=q[0];
        del();
        for(auto u:adj[s])
        {
            if(vis[u]==1)
            {
                continue;
            }
            else
            {
                vis[u]=1;
                dist[u]=dist[s]+6;
                push(u);
            }
        }
    }
}
int main()
{
    int o,i,k,n,m,u,v;
    cin>>o;
    while(o--)
    {
        cin>>n>>m;
        vector<int> adj[n+1];
        int visited[n+1];
        int dist[n+1];
        for(i=1;i<=n;i++)
        {
            visited[i]=0;
            dist[i]=-1;
        }
        for(i=0;i<m;i++)
        {
            cin>>u>>v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        cin>>k;
        bfs(adj,visited,dist,k);
        for(i=1;i<=n;i++)
        {
            if(i!=k)
            cout<<dist[i]<<" ";
        }
        cout<<"\n";
    }
}
