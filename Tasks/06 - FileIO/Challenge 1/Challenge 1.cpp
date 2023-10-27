#include <iostream>
#include <sstream>
#include <fstream>
#include <stdexcept>

using namespace std;

int main()
{
    // Open the file for reading
    string one = "Original.txt";
    ifstream inputstream;
    inputstream.open(one);

    // Check if file is open
    if (!inputstream.is_open()) {
        cerr << "Cannot open file " << one << endl;
        return -1;
    }

    // Opens strings to store the files contents
    string nextline;
    string wholefile;

    // Gets all of the data from the file line by line
    
    while (inputstream.eof() == false)
    {
        getline(inputstream, nextline);

        cout << nextline << endl;
       
        wholefile = wholefile + nextline + "\n";
    }
    
    // Output the whole file now its stored in a string
    cout << "The file reads: " << endl << endl << wholefile << endl;

    // Close the file
    inputstream.close();


    // Opens a new stream to write to
    ofstream outputstream;
    outputstream.open("Mission Brief.txt");

    // Check if file is open
    if (!outputstream.is_open()) {
        cerr << "Cannot open file " << one << endl;
        return -1;
    }

    // Write the string whole filw into the Mission brief.txt file
    outputstream << wholefile;

    // Close the file
    outputstream.close();
      

}