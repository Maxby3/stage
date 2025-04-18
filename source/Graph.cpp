#include <iostream>
#include "Graph.hpp"



int vertices_count;
int* adjacency_list;
std::vector<Vertex*> Vertices;

Graph::Graph() : vertices_count(0), adjacency_list(), Vertices({}){};

Graph::Graph(int* adjacency_list) : vertices_count(0), adjacency_list(adjacency_list) {};


std::vector<Vertex*> Graph::Get_Vertices(){

    return this->Vertices;
};
int Graph::Get_vertices_count(){

    return this->vertices_count;
};
int* Graph::Get_adjacency_list(){
    return this->adjacency_list;
};

int Graph::Id_new_vertex(){

    return this->vertices_count + 1;
};

void Graph::Set_Vertices(std::vector<Vertex*> verti){

    this->Vertices = verti;

};


void Graph::Add_Vertices( std::vector<Vertex*> vertices) {
    if (!vertices.empty()) {
        this->Vertices.insert(this->Vertices.end(), vertices.begin(), vertices.end());
        this->vertices_count += vertices.size();
    }
}

void Graph::Add_Vertices(Vertex* vertex){

    this->Vertices.push_back(vertex);
    this->vertices_count +=1;
}
