

#ifndef __Edge__
    #define __Edge__

        #include <iostream>

        class Edge{

            public:
                Edge();

                int* Get_extremity();
                void Set_extremity();

            private:

            int* extremity ;
        };
    

#endif