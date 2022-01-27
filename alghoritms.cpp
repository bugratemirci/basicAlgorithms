#include <iostream>
#include <string.h>

using namespace std;

int fibonacci(int n)
{
    if (n <= 1)
        return n;

    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main()
{
    int n;
    n = 9;
    cout << fibonacci(9) << endl;
}