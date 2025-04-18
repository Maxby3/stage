

#ifndef __Vertex__
    #define __Vertex__

    #include <iostream>
    #include <string>
    #include <vector>

        class Vertex{

            public:

                Vertex();
                Vertex(int* adjacency);

                int Get_id();
                int* Get_adjacency();

                int Set_id();
                int Set_adjacency();

            private:

                int* adjacency;
                int id;
                         

            
        };
    

#endif