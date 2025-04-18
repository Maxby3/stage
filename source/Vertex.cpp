#include <iostream>
#include "Vertex.hpp"



std::vector<int> adjacency;
int Vertex::number = 0;
int id;


Vertex::Vertex(): adjacency(0){

    number++;
    this->id = number;

}; 

Vertex::Vertex(std::vector<int> adja){

    number++;
    this->id = number;
    this->adjacency = adja;
}


int Vertex::Get_id(){

    return this->id;
}

std::vector<int> Vertex::Get_adjacency(){

    return this->adjacency;
}

void Vertex::Set_adjacency(std::vector<int> adja){

    this->adjacency = adja;
}
void Vertex::Set_id(int id){

    this->id = id;
}