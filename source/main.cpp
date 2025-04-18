#include <iostream>
#include <cassert>
#include "Graph.hpp"
#include "cadical.hpp"


int main(){

    std::cout << "salut la team" << std::endl; 

    Graph graph1{};
    int number_vertices = graph1.Get_vertices_count();
    std::cout << "il y a " << number_vertices << " sommets dans le graph" << std::endl;

    Vertex vertex1{};
    Vertex vertex2{};

    //std::vector<Vertex*> Vertices
    Vertex* v1p = &vertex1;
    graph1.Add_Vertices(v1p);
    graph1.Add_Vertices(&vertex2);

    number_vertices = graph1.Get_vertices_count();

    std::cout << "il y a maintenant " << number_vertices << " sommets dans le graph" << std::endl;

    std::vector<Vertex*> vec = graph1.Get_Vertices(); 

    Vertex* tes1 = vec.front() ;
    int id1 = tes1->Get_id();
    std::cout << "l'id du premier sommet est " << id1 << "!" << std::endl;
    
    // it = std::next(it) c'est la meme chose que it++
    for( std::vector<Vertex*>::iterator it{std::begin(vec)} ; it != std::end(vec); it = std::next(it)){
        
        if (*it != nullptr) {

            int index = std::distance(vec.begin(), it);
            int iddd = (**it).Get_id();
            std::cout << "l'id du sommet " << index <<  " est " << iddd << "!" << std::endl;
        }
        else {
            std::cerr << "Pointeur nul détecté à l'index " << std::distance(vec.begin(), it) << std::endl;
        } 
    } 


    CaDiCaL::Solver * solver = new CaDiCaL::Solver;

   // ------------------------------------------------------------------
   // Encode Problem and check without assumptions.

   enum { TIE = 1, SHIRT = 2 };

   solver->add (-TIE), solver->add (SHIRT),  solver->add (0);
   solver->add (TIE),  solver->add (SHIRT),  solver->add (0);
   solver->add (-TIE), solver->add (-SHIRT), solver->add (0);

   int res = solver->solve ();    // Solve instance.
   assert (res == 10);            // Check it is 'SATISFIABLE'.

   res = solver->val (TIE);       // Obtain assignment of 'TIE'.
   assert (res < 0);              // Check 'TIE' assigned to 'false'.

   res = solver->val (SHIRT);     // Obtain assignment of 'SHIRT'.
   assert (res > 0);              // Check 'SHIRT' assigned to 'true'.

   // ------------------------------------------------------------------
   // Incrementally solve again under one assumption.

   solver->assume (TIE);          // Now force 'TIE' to true.

   res = solver->solve ();        // Solve again incrementally.
   assert (res == 20);            // Check it is 'UNSATISFIABLE'.

   res = solver->failed (TIE);    // Check 'TIE' responsible.
   assert (res);                  // Yes, 'TIE' in core.

   res = solver->failed (SHIRT);  // Check 'SHIRT' responsible.
   assert (!res);                 // No, 'SHIRT' not in core.

   // ------------------------------------------------------------------
   // Incrementally solve once more under another assumption.

   solver->assume (-SHIRT);       // Now force 'SHIRT' to false.

   res = solver->solve ();        // Solve again incrementally.
   assert (res == 20);            // Check it is 'UNSATISFIABLE'.

   res = solver->failed (TIE);    // Check 'TIE' responsible.
   assert (!res);                 // No, 'TIE' not in core.

   res = solver->failed (-SHIRT); // Check '!SHIRT' responsible.
   assert (res);                  // Yes, '!SHIRT' in core.

   if(res){
    std::cout << "cela semble fonctionner" << std::endl;
   }
    
   // ------------------------------------------------------------------

   delete solver; 

   return 0;
    /*
    void Graph::Add_Vertices(const std::vector<Vertex>& vertices) {
    if (!vertices.empty()) {
        this->Vertices.insert(this->Vertices.end(), vertices.begin(), vertices.end());
    }}

    */
   // g++ -std=c++20 -Wall -Wextra main.cpp -o testing
   // cmake .. puis make
}