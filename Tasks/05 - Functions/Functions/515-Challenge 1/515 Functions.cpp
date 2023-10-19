#include "515.h"

int add(int x, int z)
{
    int sum = x + z;
    return sum;
}

int sub(int u, int v)
{
    int y = u - v;
    return y;
}

int mul(int j, int k)
{
    int times = 0;
    times = j * k;

    return times;
}

double div(double i, double h)
{
    double divide = 0;
    divide = i / h;

    return divide;
}

void choice(int c, int var1, int var2)
{
    int sum = 0;

    if (c == 97)
    {
        sum = add(var1, var2);       
    }
    else if ((c == 115) && (var1 >= var2))
    {
        sum = sub(var1, var2);
    }
    else if ((c == 115) && (var1 < var2))
    {
        sum = sub(var2, var1);
    }
    else if (c == 109)
    {
        sum = mul(var1, var2);
    }
    else if (c == 100)  
    {
        sum = (var1/ var2); 
    }
    else
    {
        cout << "error" << endl;
    }
    
}