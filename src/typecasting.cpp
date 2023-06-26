// Type conversions
// Implicit = automatic
// Explicit = Precede value with new data type

int correct = 8;
int questions = 10;

// If you divide integers, the decimal portion will be truncated
double score = correct / questions * 100;

// To solve it use a explicit type cast
double score = correct / (double) questions * 100;
