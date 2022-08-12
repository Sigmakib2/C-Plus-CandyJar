// Program to Generate Fibonacci Sequence Up to a Certain Number
#include <iostream>
using namespace std;

int main()
{
    int initial1 = 0, initial2 = 1, nextnum = 0, n;

    cout << "Fibonacci Sequence Up to (Enter a number): ";
    cin >> n;
    cout << "Fibonacci Series: " << initial1 << ", " << initial2 << ", ";

    nextnum = initial1 + initial2;

    while (nextnum <= n)
    {
        cout << nextnum << ", ";
        initial1 = initial2;
        initial2 = nextnum;
        nextnum = initial1 + initial2;
    }
    return 0;
}