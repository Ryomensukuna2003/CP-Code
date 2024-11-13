// C++ Program to demonstrate use
// of left shift  operator
#include <iostream>
using namespace std;

// Driver code
int main()
{
    // a = 5(00000101), b = 9(00001001)
    unsigned char a = 18;

    // The result is 00001010
    cout << "a<<1 = " << (a >> 1) << endl;

    return 0;
}
