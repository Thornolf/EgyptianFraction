#include <iostream>
#include <cmath> // pour M_PI
#include <egyptienne.hpp>

// patch microsoft
#ifndef M_PI
const double M_PI = 3.14159265358979323846;
const double M_E  = 2.7182818284590452354;
#endif

int main()
 {
  fraction_egyptienne f(M_PI);
  fraction_egyptienne g(M_E);
  fraction_egyptienne h(1.986728);
  std::cout
   << "f=" << (float)f << " = " << f << std::endl
   << "g=" << (float)g << " = " << g << std::endl
   << "h=" << (float)h << " = " << h << std::endl
   << "f+g=" << f+g << std::endl
   << "f+g=" << (float)(f+g) << std::endl
   << "f-g=" << f-g << std::endl
   << "f-g=" << (float)(f-g) << std::endl
   << "f-f=" << f-f << std::endl
   << "f-f=" << (float)(f-f) << std::endl
   << "f*g=" << f*g << std::endl
   << "f*g=" << (float)(f*g) << std::endl
   << "f/g=" << f/g << std::endl
   << "f/g=" << (float)(f/g) << std::endl
   << "5/121=" << fraction_egyptienne(5.0/121) << std::endl
   << "125/121=" << fraction_egyptienne(125.0/121) << std::endl
   << "124/121=" << fraction_egyptienne(124.0/121) << std::endl
   << "64/81=" << fraction_egyptienne(64.0/81) << std::endl
   ;
  try
   {
    std::cout
     << "g-f=" << g-f << std::endl
     << "g-f=" << (float)(g-f) << std::endl
     ;
   }
  catch (std::exception & e)
   {
    // on doit se rendre ici!
    std::cout << "bleh! " << e.what() << std::endl;
   }
  return 0;
 }
