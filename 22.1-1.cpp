#include <iostream>
#include "include/graph.h"

void InDegree()
{
  // To calculate in-degree of each vertex we need to walk through
  // all adjacent array members. So the complexity will be O(V + E)
  int in_degree[VERTEX_COUNT] = {0};
  for (int i = 0; i < VERTEX_COUNT; i++) {
    std::list<int>::iterator it = DIRECTED_GRAPH_ADJ[i].begin();
    for(; it != DIRECTED_GRAPH_ADJ[i].end(); ++it) {
      in_degree[*it - 1]++;
    }
  }
  std::cout << "IN-DEGREE \n";
  for (int i = 0; i < VERTEX_COUNT; i++) {
    std::cout << i + 1 << " " << in_degree[i] << "\n";
  }
}

void OutDegree()
{
  // Out degree of each vertex is equal to Adj[i].size
  std::cout << "OUT-DEGREE \n";
  for (int i = 0; i < VERTEX_COUNT; i++) {
    std::cout << i + 1 << " " << DIRECTED_GRAPH_ADJ[i].size() << "\n";
  }
  std::cout << "\n";
}

int main()
{
  OutDegree();
  InDegree();
}


