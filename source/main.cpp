#include <iostream>
#include <cassert>
#include "Graph.cpp"
//#include "src/cadical.hpp"



int main(){

    std::cout << "salut la team" << std::endl; 

    Graph graph1{};

    int number_vertices = graph1.Get_vertices_count();

    std::cout << "il y a " << number_vertices << " sommets dans le graph" << std::endl;


  /*  CaDiCaL::Solver * solver = new CaDiCaL::Solver;

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

   // ------------------------------------------------------------------

   delete solver; */

  
   // g++ -std=c++20 -Wall -Wextra main.cpp -o testing 

    return 0;
}