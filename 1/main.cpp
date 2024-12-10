#include <iostream>
#include <fstream>
#include <vector>
#include <string>

using namespace std;

vector<string> read_lines_from_file(const string& file) {
  vector<string> lines;
  return lines;
}

void print_lines(const vector<string>& lines) {
}

void write_lines_to_file(const vector<string>& lines, const string& file) {
}

int main() {
  string input_file = "input.txt";
  string output_file = "output.txt";

  vector<string> lines = read_lines_from_file(input_file);
  print_lines(lines);
  write_lines_to_file(lines, output_file);

  return 0;
}
