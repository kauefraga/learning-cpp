// Typedef is used to set an additional name (alias) for variables and typos.

#include <vector>
#include <string>

// Look at this awful type declaration
std::vector<std::pair<std::string, int>> pairlist;

// You can't really avoid it, however you can simplify it like so
typedef std::vector<std::pair<std::string, int>> pairlist_t;

// _t stands for type
// And now you can
pairlist_t pairlist;

// Nowadays `using` is more compatible with c++ features, prefer it
using pairlist_t = std::vector<std::pair<std::string, int>>;

// See more benefits here https://google.github.io/styleguide/cppguide.html#Aliases
