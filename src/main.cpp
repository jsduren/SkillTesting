#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(int argc, char** argv)
{
  ifstream inputFile;
  string lineString = "";
  inputFile.open(argv[1]);

  while (getline(inputFile, lineString))
  {
    
  }

  cin.get();
  return 0;
}