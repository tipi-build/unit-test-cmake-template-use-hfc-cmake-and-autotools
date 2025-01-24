#include "Other_MathFunctions.h"
#include <MathFunctions.h>
#include <lib.h>


#include <cmath>

namespace Other_MathFunctions {
double sqrt_plus2_and_print(double x)
{
  print_hello();
  return MathFunctions::sqrt(x)+1;
  
}
}