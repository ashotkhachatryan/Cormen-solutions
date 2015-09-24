#include <iostream>
#include "include/graph.h"

int main()
{
  const int size = 5;
  std::list<int> multigraph[size];
  for (int i = 0; i < size; i++) {
    std::list<int>::iterator it = UNDIRECTED_MULTIGRAPH_ADJ[i].begin();
    int a[size] = {0};
    a[i] = 1;
    for(; it != UNDIRECTED_MULTIGRAPH_ADJ[i].end(); ++it) {
      if (a[*it - 1] == 0) {
        multigraph[i].push_back(*it);
      }
      a[*it - 1]++;
    }
  }

  for (int i = 0; i < size; i++) {
    std::list<int>::iterator it = multigraph[i].begin();
    for (; it != multigraph[i].end(); ++it) {
      std::cout << *it << ", ";
    }
    std::cout << "\n";
  }
}
