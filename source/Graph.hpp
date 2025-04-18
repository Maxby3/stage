

#ifndef __Graph__
    #define __Graph__

    #include <iostream>
    #include <vector>
    #include <list>


        //déclaration anticipé
        class Vertex;

        class Graph{
             // on créé un graph vide d'abord puis on y ajoute des sommets, les sommets ont un id unique par graph, 1 puis 2 etc... qui se fait tt seuls 
            //Le graph sait combien il a de sommets, les sommets non.
            public:

                Graph();
                Graph(int* adjacency_list);
                
                std::vector<Vertex*> Get_Vertices();
             
                int Get_vertices_count();
                int* Get_adjacency_list();

                void Set_Vertices(std::vector<Vertex*> vertices);
               
                void Set_adjacency_list(int*);

                void Add_Vertices(std::vector<Vertex*> vertices);
                

                int Id_new_vertex();

            private:
                std::vector<Vertex*> Vertices;
                int vertices_count;
                int* adjacency_list;

        };
    

#endif