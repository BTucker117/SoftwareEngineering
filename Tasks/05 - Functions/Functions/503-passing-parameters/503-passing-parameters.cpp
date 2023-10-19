#include <iostream>
using namespace std;

void displayBanner(int stringLen)
{
	for (unsigned int n = 0; n < (stringLen + 4); n++) {
		cout << "*";
	}
	cout << endl;
}

void displaywithinbanner(string message)
{
	int l = message.length();

	displayBanner(l);

	cout << "* ";
	cout << message;
	cout << " *";

	cout << endl;

	displayBanner(l);
}

int main()
{
	const string message = "Welcome to Computer Science";

	//Get the length of the string
	int L = message.length();			//L is now a LOCAL variable

	//Write the banner above
	displayBanner(L);

	cout << "* ";				//Leading *
	cout << message;			//Message
	cout << " *" << endl;		//Trailing *

	//Write the banner below
	displayBanner(L);



	//Write the new function that does it all

	displaywithinbanner(message);

	//Tell the calling shell all is well
	return 0;
}