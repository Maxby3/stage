

#ifndef __Vertex__
    #define __Vertex__

    #include <iostream>
    #include <string>
    #include "Graph.cpp"

        class Vertex{

            public:

                Vertex();
                Vertex(Graph graph);
                Vertex(Graph graph, int* adjacency);

                Graph Get_graph();
                int Get_id();
                int* Get_adjacency();

                int Set_graph();
                int Set_id();
                int Set_adjacency();

            private:

                int* adjacency;
                int id;
                Graph graph;

                

                


        };
    

#endif