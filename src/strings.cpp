#include <string>

int main() {
  std::string name = "Bjarne Stroustrup";

  std::size_t name_length = name.length();

  bool is_name_empty = name.empty();

  // If you need to clear the name, use name.clear()

  std::string username = name.append("@gmail.com");

  char first_letter = username.at(0);

  std::string name_starting_with_underline = username.insert(0, "_");

  int username_underline_position = username.find("_");

  username.erase(0, username_underline_position);
}
