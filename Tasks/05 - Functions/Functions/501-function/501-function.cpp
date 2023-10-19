#include <iostream>
using namespace std;

int L;		//This is not an ideal location - we will soon address this
int i;

void banner() // For mymessage string
{
	for (unsigned int n = 0; n < (i + 4); n++) {
		cout << "*";
	}
	cout << endl;
}

int main()
{
	const string message = "Welcome to Computer Science";
	
	//Get the length of the string
	L = message.length();

	//Write the banner above
	for (unsigned int n = 0; n < (L + 4); n++) {
		cout << "*";
	}
	cout << endl;

	cout << "* ";				//Leading *
	cout << message;			//Message
	cout << " *" << endl;		//Trailing *

	//Write the banner below
	for (unsigned int n = 0; n < (L + 4); n++) {
		cout << "*";
	}
	cout << endl;

	const string mymessage = "Hello Computer";

	i = mymessage.length();

	//Write the banner above
	/* for (unsigned int n = 0; n < (i + 4); n++) {
		cout << "*";
	}
	*/
	cout << endl;

	banner();

	cout << "* ";
	cout << mymessage; //Prints out mymessage string
	cout << " *";
	cout << endl;r

	banner();

	cout << endl;

	//Write the banner bellow
	/*
	for (unsigned int n = 0; n < (i + 4); n++) {
		cout << "*";
	}
	
	cout << endl;
	*/

	//Tell the calling shell all is well
	return 0;
}