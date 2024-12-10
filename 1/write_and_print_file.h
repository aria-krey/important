#include <iostream>
#include <fstream>
#include <vector>
#include <string>

using namespace std;

void print_lines(const vector<string>& lines) {
  for (const string& line : lines) {
    cout << line << endl;
  }
}

void write_lines_to_file(const vector<string>& lines, const string& file) {
  ofstream outputFile(file);
  if (outputFile.is_open()) {
    for (const string& line : lines) {
      outputFile << line << endl;
    }
    outputFile.close();
  } else {
    cerr << "Unable to open file: " << file << endl;
  }
}
