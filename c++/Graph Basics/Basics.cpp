//Making Adjacency Matrix

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n; //nodes
//     int m; //edges
//     cin>>n>>m;
//     int gr[n][n]; //vector<int> gr[n];
//     for(int i=0;i<m;i++){
//         int u,v;
//         cin>>u>>v;
//         gr[u][v] = 1; //gr[u].push_back(v);
//         gr[v][u] = 1; //gr[v].push_back(u);
//     }

// }

#include<bits/stdc++.h>
using namespace std;

void bfsOfGraph(int src, vector<int>&vis, vector<vector<int>>&gr){
    queue<int> q;
    q.push(src);

    vis[src] = 1;
    while(!q.empty()){
        int curr = q.front();
        q.pop();

        for(int child : gr[curr]){
            if(vis[child]==0){
                q.push(child);
                vis[child]=1;
            }
        }
    }
}
int main(){
    int n , m;
    cin>>n>>m;

    vector<vector<int>> gr(n);
    for(int i=0;i<m;i++){
        int u,v;
        cin>>u>>v;

        gr[u].push_back(v);
        gr[v].push_back(u);
    }

    vector<int> vis(n,0);
    bfsOfGraph(0, vis, gr);
}