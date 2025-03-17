#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main()
{
    int n;
    int whileLoopCount = 0;
    int doLoopCount = 0;

    // Loop with for
    cout << "Ascending loop with for" << endl;
    for (n = 0; n < 5; n++)
    {
        cout << "n value = " << n << " Welcome" << endl;
    }
    cout << "Final n value = " << n << endl;
    cout << endl;

    cout << "Descending loop with for" << endl;
    // Loop with for
    for (n = 5; n > 0; n--)
    {
        cout << "n value = " << n << " Welcome" << endl;
    }
    cout << "Final n value = " << n << endl;
    cout << endl;

    cout << "Loop with while" << endl;
    srand(time(0));

    n = rand() % 10;

    cout << "Initial n value = " << n << endl;

      while (n < 7)
    {
        cout << "n value = " << n << endl;
        n = rand() % 10;
        whileLoopCount++;
    }
    cout << "Number of iterations = " << whileLoopCount << endl;
    cout << "Final n value = " << n << endl;
    cout << "Loop with do while" << endl;

    srand(time(0));

    n = rand() % 10;

    cout << "Initial n value = " << n << endl;

    do
    {
        cout << "n value = " << n << endl;
        n = rand() % 10;
        doLoopCount++;
    } while (n < 7);
    cout << "Number of iterations = " << doLoopCount << endl;
    cout << "Final n value = " << n << endl;
}
