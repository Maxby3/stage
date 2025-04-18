#include <iostream>
#include "Vertex.hpp"



int* adjacency;
int id;

Vertex::Vertex(): id(0), adjacency(0){}; 

Vertex::Vertex(int* adja){

    this->id = 0;
    this->adjacency = adja;
}


int Vertex::Get_id(){

    return this->id;
}

int* Vertex::Get_adjacency(){

    return this->adjacency;
}