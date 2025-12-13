// #include<iostream>
// using namespace std;

// #define MAX 20

// void addedge(int adj[MAX][MAX], int v, int w) { 
//   adj[v][w] = 1; 
//   adj[w][v] = 1; 
// }

// void dfs(int adj[MAX][MAX], int V, int v) {
//   bool visited[MAX] = {false}; // Initialize visited array locally
//   visited[v] = true;
//   cout << v << " ";
//   for (int i = 0; i < V; i++) { 
//     if (adj[v][i] && !visited[i]) { 
//       dfs(adj, V, i); 
//     }
//   }
// }

// int main() {
//   int v, e;
//   cin >> v >> e;
//   int adj[MAX][MAX] = {0};
//   for (int i = 0; i < e; i++) {
//     int u, w;
//     cin >> u >> w;
//     addedge(adj, u, w);
//   }
//   int startnode;
//   cin >> startnode;
//   cout << "DFS is: ";
//   dfs(adj, v, startnode);
//   return 0;
// }

#include <iostream>
#include <queue>
#include <vector>
#include <cstring>

using namespace std;

// Function to add an undirected edge to the adjacency matrix
void add_edge(int adj[][100], int src, int dest) {
adj[src][dest] = 1;
adj[dest][src] = 1; // Since the graph is undirected
}

// Function to perform BFS and find the shortest path
int BFS(int adj[][100], int src, int dest, int v, int pred[], int dist[]) {
// Create a visited array to track visited nodes
bool visited[v];
memset(visited, false, sizeof(visited));

// Queue for BFS
queue<int> q;

// Initialize the source node
visited[src] = true;
dist[src] = 0;
q.push(src);

while (!q.empty()) {
int u = q.front();
q.pop();

// Explore all neighbors of the current node
for (int i = 0; i < v; i++) {
if (adj[u][i] == 1 && !visited[i]) {
visited[i] = true;
dist[i] = dist[u] + 1;
pred[i] = u;
q.push(i);

// If we reach the destination, no need to continue BFS
if (i == dest) {
return dist[i];
}
}
}
}

// If there is no path between source and destination
return -1;
}

// Function to print the shortest path from source to destination
void printShortestDistance(int adj[][100], int s, int dest, int v, int pred[], int dist[]) {
if (dist[dest] == -1) {
cout << "No path exists" << endl;
return;
}

// Print the shortest path length
cout << "Shortest path length is: " << dist[dest] << endl;

// Reconstruct the path by following the predecessors
vector<int> path;
for (int crawl = dest; crawl != -1; crawl = pred[crawl]) {
path.push_back(crawl);
}

// Reverse the path to print it from source to destination
cout << "Path is: ";
for (int i = path.size() - 1; i >= 0; i--) {
cout << path[i] << " ";
}
cout << endl;
}

int main() {
int v, e;
cin >> v >> e;

int adj[100][100] = {0}; // Adjacency matrix initialized to 0

// Read edges
for (int i = 0; i < e; i++) {
int src, dest;
cin >> src >> dest;
add_edge(adj, src, dest);
}

int source, destination;
cin >> source >> destination;

int pred[100], dist[100];
memset(pred, -1, sizeof(pred)); // Initialize predecessors with -1
memset(dist, -1, sizeof(dist)); // Initialize distances with -1

// Find the shortest path using BFS
int path_length = BFS(adj, source, destination, v, pred, dist);

// Print the shortest path distance and the actual path
printShortestDistance(adj, source, destination, v, pred, dist);

return 0;
}