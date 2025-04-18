

#ifndef __Graph__
    #define __Graph__

    #include <iostream>
    #include "Vertex.hpp"
    #include "Edge.hpp"

        class Graph{
             // on créé un graph vide d'abord puis on y ajoute des sommets, les sommets ont un id unique par graph, 1 puis 2 etc... qui se fait tt seuls 
            //Le graph sait combien il a de sommets, les sommets non.
            public:

                Graph();
                Graph(int* adjacency_list);
                //Graph(Vertex* Vertices, Edge* Edges); peut etre interessant à faire, pas pour le moment
                
                
                Vertex* Get_Vertices();
                Edge* Get_Edges();
                int Get_vertices_count();
                int* Get_adjacency_list();

                void Set_Vertices(Vertex*);
                void Set_Edges(Edge*);
                void Set_adjacency_list(int*);

                void Add_Vertices(Vertex*);
                void Add_Edges(Edge*);

                int Id_new_vertex();

            private:
                Vertex* Vertices;
                Edge* Edges;
                int vertices_count;
                int* adjacency_list;

        };
    

#endif