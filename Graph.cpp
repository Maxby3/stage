#include <iostream>
#include "Graph.hpp"


int vertices_count;
int* adjacency_list;
int* Vertices;
int* Edges;

Graph::Graph() : vertices_count(0) 
{
    int edge;
    int vertex;

}; 

int Graph::Id_new_vertex(){

    return Vertices_count + 1;
}