#include <iostream>
#include <string>
#include <sstream>
#include <algorithm>
using namespace std;

int main()
{
    // Challenge 1 - "Web Scraping"
    // Find the quoted number that follows the title attribute
    string input =
        "<HTML>\n" \
        "  <BODY>\n" \
        "    <P>Welcome to COMP1000</P>\n" \
        "    <BR>\n" \
        "    <P><a title=\"42\">Hover over here to see a special number</a></P>\n"
        "  </BODY>\n" \
        "</HTML>\n";

    cout << input << endl;

    //Write solution here



    // Challenge 2 - word count
    // Type in a sentence, and count the number of time the words "the" appears 
    getline(std::cin, input);   //Read a line (users types this in)
    istringstream iss(input);   //Create a string "stream" (sequence of words)
    string word;                //This will hold the next word
    int count = 0;
    while (iss >> word) {       //Read the next word (if there is one)
        cout << word << endl;   //Output each word in turn
        if (word == "the")
        {
            count = count + 1;
        }
        else
        {
            // Do nothing
        }
    }
    printf("The work 'the' was used %d times", count);
    cout << endl;


    
    int num[] = { 2, 3, 4, 5 };
    int newnums[4] ;
    int newernums[4];
    cout << "Num = " << sizeof num << endl;
    cout << "Newnums = " << sizeof newnums << endl;
   

    newnums[3] = num [0];
    newnums[2] = num [1];
    newnums[1] = num [2];
    newnums[0] = num [3];

    newernums[3] = num[0];
    newernums[2] = num[1];
    newernums[1] = num[2];
    newernums[0] = num[3];

    cout << "Num = " << num << endl;
    cout << "Newnums = " << newnums << endl;

    cout << num[0] << num[1] << num[2] << num[3] << endl;
    cout << num << endl;

    for (int i = 0; i < 4; ++i)
    {
        cout << *(newernums + i) << endl;
    }

    cout << endl; 
    

    int _swap[] = { 2, 3, 4, 5 };

    for (int j = 0; j < 4; ++j)
    {
        cout << *(_swap + j) << endl;
    }

    int n = sizeof(_swap) / sizeof(_swap[0]);

    for (int k = 0; k < n / 2; k++)
    {
        swap(_swap[k], _swap[n - k - 1]);
    }

    cout << endl;

    for (int l = 0; l < 4; ++l)
    {
        cout << *(_swap + l) << endl;
    }

}