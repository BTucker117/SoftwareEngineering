#include <iostream>
using namespace std;

//Function prototypes
int sub(int u, int v);
int absDiff(int x, int z);

int main()
{
    int var1, var2;

    //Prompt the user
    cout << endl << "Enter value 1: ";
    cin >> var1;
    cout << endl << "Enter value 2: ";
    cin >> var2;


    // ***1***
    // create variables to hold the reslts of the calculation
    int diff = 0;

    // Calculate the difference
    if (var1 >= var2)               // check which variable is larger - also this covers the case where they are the same
    {
        diff = sub(var1, var2);     // do the subtraction
    }
    else
    {
        diff = sub(var2, var1);     // do the subtraction
    }
    // ***2***
    

    int diff2 = absDiff(var1, var2);
    

     // print out the results
    cout << "Absolute diff = " << diff << endl;

    //int diff = absDiff(var1, var2);
    cout << "Absolute difference = " << diff2 << endl;
}

// Simple function to subtract
// return result is u-v
int sub(int u, int v)
{
    int y = u - v;
    return y;
}

int absDiff(int u, int v)
{
    // create variables to hold the reslts of the calculation
    int y = 0;

    // Calculate the difference
    if (u >= v)               // check which variable is larger
    {
        y = sub(u, v);     // do the subtraction
    }
    else
    {
        y = sub(v, u);     // do the subtraction
    }

    return y;
}