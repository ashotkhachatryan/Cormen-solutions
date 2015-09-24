#include <iostream>
#include <list>

const int VERTEX_COUNT = 10;

// Matrix representation of a directed graph
int DIRECTED_GRAPH_MATRIX[10][10] = {
                                      0, 1, 0, 1, 0, 0, 1, 0, 0, 0,
                                      0, 0, 1, 0, 1, 1, 0, 0, 0, 0,
                                      0, 0, 0, 0, 0, 0, 0, 0, 1, 0,
                                      0, 1, 0, 0, 0, 1, 0, 1, 0, 0,
                                      0, 0, 1, 0, 0, 0, 0, 0, 0, 1,
                                      0, 0, 0, 0, 1, 0, 0, 0, 0, 0,
                                      0, 0, 0, 1, 0, 0, 0, 0, 0, 0,
                                      1, 0, 0, 0, 0, 1, 0, 0, 0, 0,
                                      0, 1, 0, 0, 0, 0, 0, 0, 0, 1,
                                      0, 0, 1, 0, 0, 0, 0, 0, 0, 0
                                    };

// Adjacency list representation of a directed graph
std::list<int> DIRECTED_GRAPH_ADJ[10] = {
                                          {2, 4, 7},
                                          {3, 5, 6},
                                          {9},
                                          {2, 6, 8},
                                          {3, 10},
                                          {5},
                                          {4},
                                          {1, 6},
                                          {2, 10},
                                          {3}
                                        };

// Adjacency list representation of an undirected multigraph
std::list<int> UNDIRECTED_MULTIGRAPH_ADJ[5] = {
                                          {2, 4, 4},
                                          {1, 3, 3, 4, 5},
                                          {2, 2, 5},
                                          {1, 1, 4, 5, 5},
                                          {2, 3, 4, 4, 4}
                                        };
