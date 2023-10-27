#include <iostream>
#include <sstream>
#include <fstream>
#include <stdexcept>

using namespace std;

int main()
{
    // Open the file for reading
    string one = "Fake Python.html";
    ifstream inputstream;
    inputstream.open(one);

    // Check if file is open
    if (!inputstream.is_open()) {
        cerr << "Cannot open file " << one << endl;
        return -1;
    }
}


