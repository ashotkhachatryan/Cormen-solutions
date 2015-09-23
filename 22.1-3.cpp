#include "include/graph.h"

void transpose_adj_matrix()
{
  // Running time is O(V^2)
  int a[VERTEX_COUNT][VERTEX_COUNT] = {0};
  for (int i = 0; i < VERTEX_COUNT; i++) {
    for (int j = 0; j < VERTEX_COUNT; j++) {
      a[i][j] = DIRECTED_GRAPH_MATRIX[j][i];
    }
  }

  // Printing transpose matrix
  std::cout << "\nAdjacency matrix representation.\n";
  for (int i = 0; i < VERTEX_COUNT; i++) {
    for (int j = 0; j < VERTEX_COUNT; j++) {
      std::cout << a[i][j] << ", ";
    }
    std::cout << "\n";
  }
}

void transpose_adj_list()
{
  // Complexity is O(V + E)
  std::cout << "\nAdjacency list representation.\n";
  std::list<int> a[VERTEX_COUNT];
  for (int i = 0; i < VERTEX_COUNT; i++) {
    std::list<int>::iterator it = DIRECTED_GRAPH_ADJ[i].begin();
    for (; it != DIRECTED_GRAPH_ADJ[i].end(); ++it) {
      a[*it - 1].push_back(i+1);
    }
  }

  // Printing transpose list
  for (int i = 0; i < VERTEX_COUNT; i++) {
    std::list<int>::iterator it = a[i].begin();
    for (; it != a[i].end(); ++it) {
      std::cout << *it << ", ";
    }
    std::cout << "\n";
  }
}

int main()
{
  transpose_adj_matrix();
  transpose_adj_list();
}
