#include <iostream>
#include "Vertex.hpp"



int* adjacency;
int id;
Graph graph;

Vertex::Vertex()
{

    std::cout << "Please create a vertex within a Graph using a Graph object as argument in the constructor like this: Vertex(Graph your_graph)" << std::endl;
    

}; 

Vertex::Vertex(Graph gr): graph(gr) {

    this->id = graph.Id_new_vertex();
}

Graph Vertex::Get_graph(){

    return this->graph;
}

int Vertex::Get_id(){

    return this->id;
}

int* Vertex::Get_adjacency(){

    return 0;
}