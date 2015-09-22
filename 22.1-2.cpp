#include <iostream>
#include <vector>

const int VERTEX_COUNT = 7;
int GRAPH_MATRIX[7][7] = {
                           0, 1, 1, 0, 0, 0, 0,
                           1, 0, 0, 1, 1, 0, 0,
                           1, 0, 0, 0, 0, 1, 1,
                           0, 1, 0, 0, 0, 0, 0,
                           0, 1, 0, 0, 0, 0, 0,
                           0, 0, 1, 0, 0, 0, 0,
                           0, 0, 1, 0, 0, 0, 0
                         };

std::vector<int> DIRECTED_GRAPH_ADJ[7] = {
                                          {2, 3},
                                          {1, 4, 5},
                                          {1, 6, 7},
                                          {2},
                                          {2},
                                          {3},
                                          {3}
                                        };

int main()
{
  std::cout << "Adjacency-matrix representation.\n";
  for (int i = 0; i < VERTEX_COUNT; i++) {
    for (int j = 0; j < VERTEX_COUNT; j++) {
      std::cout << GRAPH_MATRIX[i][j] << ", ";
    }
    std::cout << "\n";
  }
  std::cout << "\nAdjacency list representation.\n";
  for (int i = 0; i < VERTEX_COUNT; i++) {
    for (int j = 0; j < DIRECTED_GRAPH_ADJ[i].size(); j++) {
      std::cout << DIRECTED_GRAPH_ADJ[i][j] << ", ";
    }
    std::cout << "\n";
  }
}
