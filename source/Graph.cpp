#include <iostream>
#include <vector>
#include "Graph.hpp"


int vertices_count;
int* adjacency_list;
std::vector<Vertex*> Vertices;
std::vector<Edge*> Edges;

Graph::Graph() : vertices_count(0),adjacency_list(0)
{
    this->Vertices = {};
    this->Edges = {};
};


std::vector<Edge*> Graph::Get_Edges(){

    return this->Edges;
};
std::vector<Vertex*> Graph::Get_Vertices(){

    return this->Vertices;
};
int Graph::Get_vertices_count(){

    return this->vertices_count;
};
int* Graph::Get_adjacency_list(){
    return 0;
};

int Graph::Id_new_vertex(){

    return this->vertices_count + 1;
};

void Graph::Set_Vertices(std::vector<Vertex*> verti){

    this->Vertices = verti;

};

void Graph::Set_Edges(std::vector<Edge*> edg){

    this->Edges = edg;

};

void Graph::Add_Vertices(Vertex* verti){

    Vertices.push_back(verti);

};