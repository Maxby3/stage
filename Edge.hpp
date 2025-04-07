#include <iostream>

#ifndef __Edge__
    #define __Edge__

        class Edge{

            public:
                Edge();

                int* Get_extremity();
                void Set_extremity();

            private:

            int* extremity ;
        };
    

#endif