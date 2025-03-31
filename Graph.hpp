#include <iostream>
#include "Vertex.hpp"
#include "Edge.hpp"

#ifndef __Graph__
    #define __Graph__

        class Graph{

            public:
                Graph();
                
                // on créé un graph vide d'abord puis on y ajoute des sommets, les sommets ont un id unique par graph, 1 puis 2 etc... qui se fait tt seuls 
                //Le graph sait combien il a de sommets, les sommets non.

                Vertex* Get_Vertices();
                Edge* Get_Edges();
                int Get_vertices_count();
                int* Get_adjacency_list();

                int Set_Vertices();
                int Set_Edges();
                int Set_adjacency_list();

                int Id_new_vertex();

            private:
                Vertex* Vertices;
                Edge* Edges;
                int vertices_count;
                int* adjacency_list;

        };
    

#endif