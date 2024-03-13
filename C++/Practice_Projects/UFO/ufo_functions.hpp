#include <string>
#include <vector>

void greet();
void end_game(std::string answer, std::string codeword);
void display_status(std::string answer, std::vector<char> incorrect);
void display_misses(int misses);