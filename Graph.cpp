#include <iostream>
#include "Graph.hpp"


int vertices_count;
int* adjacency_list;
Vertex* Vertices;
Edge* Edges;

Graph::Graph() : vertices_count(0) 
{
    int edge;
    int vertex;

};


Edge* Graph::Get_Edges(){
    
};
/* Vertex* Graph::Get_Vertices(){

    return this->Vertices;
}; */
int Graph::Get_vertices_count(){

    return this->vertices_count;
};
int* Graph::Get_adjacency_list(){

};

int Graph::Id_new_vertex(){

    return this->vertices_count + 1;
}