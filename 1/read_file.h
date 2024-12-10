#include <iostream>
#include <fstream>
#include <vector>
#include <string>

using namespace std;

vector<string> read_lines_from_file(const string& file) {
  vector<string> lines;
  ifstream inputFile(file);

  if (inputFile.is_open()) {
    string line;
    while (getline(inputFile, line)) {
      lines.push_back(line);
    }
    inputFile.close();

    cout << "Lines read from file:" << endl;
    for (const string& l : lines) {
      cout << l << endl;
    }
  } else {
    cerr << "Unable to open file: " << file << endl;
  }

  return lines;
}
