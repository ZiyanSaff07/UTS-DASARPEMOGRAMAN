#include <iostream>
using namespace std;
const int MAX  = 5;
int main()

{
    int A[MAX];
    for (int c = 0; c < MAX; c++)
    {
        A[c] = c * 10;
    }
    for (int c = 0; c < MAX; c++)
    {
        cout << A[c] << endl;
    }
    return 0;
}
