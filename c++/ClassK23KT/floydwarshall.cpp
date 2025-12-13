// #include<iostream>
// using namespace std;
// void floyd(int arr[][4])
// {
// int i,j,k;
// for(int k=0;k<4;k++)
// {
// for(int i=0;i<4;i++)
// {
// for(int j=0;j<4;j++)
// {
// if(i!=j)
// {
// if((arr[i][j]>arr[i][k]+arr[k][j]) || (arr[i][j]==0))
// {
// arr[i][j]=arr[i][k]+arr[k][j];
// }
// }
// }
// }
// }
// for(int i=0;i<4;i++)
// {
// for(int j=0;j<4;j++)
// {
// cout<<arr[i][j]<<" ";
// }
// }
// }


// int main()
// {
// int arr[4][4];
// cout<<"Enter the value for adjacency matrix";
// cout<<"Enter adjacency matrix";
// for(int i=0;i<4;i++)
// {
// for(int j=0;j<4;j++)
// {
// cin>>arr[i][j];
// }

// floyd(arr);
// return 0;
// }
// }

#include <iostream>
using namespace std;

const int MAX_VERTICES = 4;

void floyd(int arr[][MAX_VERTICES]) {
  for (int k = 0; k < MAX_VERTICES; k++) {
    for (int i = 0; i < MAX_VERTICES; i++) {
      for (int j = 0; j < MAX_VERTICES; j++) {
        if (i != j) {
          if ((arr[i][j] > arr[i][k] + arr[k][j]) || (arr[i][j] == 0)) {
            arr[i][j] = arr[i][k] + arr[k][j];
          }
        }
      }
    }
  }

  cout << "Shortest path matrix:" << endl;
  for (int i = 0; i < MAX_VERTICES; i++) {
    for (int j = 0; j < MAX_VERTICES; j++) {
      cout << arr[i][j] << " ";
    }
    cout << endl; 
  }
}

int main() {
  int arr[MAX_VERTICES][MAX_VERTICES];
  cout << "Enter the values for the adjacency matrix:" << endl;
  for (int i = 0; i < MAX_VERTICES; i++) {
    for (int j = 0; j < MAX_VERTICES; j++) {
      cin >> arr[i][j];
    }
  }

  floyd(arr); 

  return 0;
}