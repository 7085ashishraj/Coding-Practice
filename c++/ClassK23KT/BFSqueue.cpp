// #include<iostream>
// #include<queue>
// #include<vector>
// using namespace std;

// const int vertices = 20;
// int adjlist[vertices][vertices];
// int size[vertices]; //int size vertices
// bool visited[vertices];
// void bfs(int start, int vertices) {
//   queue<int> q;
//   q.push(start);
//   visited[start] = true;
//   while (!q.empty()) {
//     int node = q.front();
//     q.pop(); // del -> pop
//     cout << node << " ";
//     for (int i = 0; i < size[node]; i++) { //i<size[node]
//       int neighbor = adjlist[node][i];
//       if (!visited[neighbor]) {
//         visited[neighbor] = true;
//         q.push(neighbor);
//       }
//     }
//   }
// }

// int main() {
//   int vertices, edges;
//   cin >> vertices >> edges;
//   for (int i = 0; i < vertices; i++) {
//     size[i] = 0;
//     visited[i] = false;
//   }
//   for (int i = 0; i < edges; i++) {
//     int u, v;
//     cin >> u >> v;
//     adjlist[u][size[u]++] = v;
//     adjlist[v][size[v]++] = u;
//   }
//   int startingnode;
//   cout << "traversal is";
//   bfs(startingnode, vertices);
//   return 0;
// }

