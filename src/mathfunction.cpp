// Useful math functions (ref: https://cplusplus.com/reference/cmath/?kw=cmath)
#include <cmath>

// Power, raise a number to an exponent. Example: 2 to the power of 3 is equals to 8.
double a = pow(2, 2);

// Square root, returns a number that when multiplied by itself equals a given number.
double b = sqrt(4);

// Returns the minimum and maximum values
double c = std::min(1, 5);
double d = std::max(1, 5);

// Modulus (|x|)
double e = abs(-3); // = +3

// Round or approximation
double f = round(3.1415926535); // PI
double g = ceil(3.1415926535); // round to a higher number
double h = floor(3.1415926535); // round to a lower number
