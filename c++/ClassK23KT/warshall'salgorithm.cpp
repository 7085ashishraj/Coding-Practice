#include <iostream>
using namespace std;

const int MAX_VERTICES = 100; 

int adjmatrix[MAX_VERTICES][MAX_VERTICES];
int p[MAX_VERTICES][MAX_VERTICES];

void warshall(int m) {
  // Initialize the path matrix 'p'
  for (int i = 0; i < m; i++) {
    for (int j = 0; j < m; j++) {
      p[i][j] = (adjmatrix[i][j] != 0) ? 1 : 0; 
    }
  }

  // Floyd-Warshall algorithm
  for (int k = 0; k < m; k++) {
    for (int i = 0; i < m; i++) {
      for (int j = 0; j < m; j++) {
        p[i][j] = p[i][j] || (p[i][k] && p[k][j]); // Use logical OR operator
      }
    }
  }
}

int main() {
  int m;
  cout << "Enter the number of vertices: ";
  cin >> m;

  cout << "Enter the adjacency matrix (0 for no edge, 1 for edge):" << endl;
  for (int i = 0; i < m; i++) {
    for (int j = 0; j < m; j++) {
      cin >> adjmatrix[i][j];
    }
  }

  warshall(m);

  cout << "Path matrix:" << endl;
  for (int i = 0; i < m; i++) {
    for (int j = 0; j < m; j++) {
      cout << p[i][j] << " ";
    }
    cout << endl; 
  }

  return 0;
}