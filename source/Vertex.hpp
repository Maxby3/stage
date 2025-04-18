

#ifndef __Vertex__
    #define __Vertex__

    #include <iostream>
    #include <string>
    #include <vector>

        class Vertex{

            public:

                Vertex();
                Vertex(std::vector<int> adjacency);

                int Get_id();
                std::vector<int> Get_adjacency();

                void Set_id(int);
                void Set_adjacency(std::vector<int>);

            private:

                std::vector<int> adjacency;
                static int number;
                int id;
                         

            
        };
    

#endif