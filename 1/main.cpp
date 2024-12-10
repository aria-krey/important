#include <iostream>
#include <fstream>
#include <vector>
#include <string>

#include "read_file.h"
#include "write_and_print_file.h"

using namespace std;

int main() {
  string input_file = "input.txt";
  string output_file = "output.txt";

  //vector<string> lines = {"Line 1", "Line 2", "Line 3"};
  print_lines(lines);
  write_lines_to_file(lines, output_file);

  return 0;
}
