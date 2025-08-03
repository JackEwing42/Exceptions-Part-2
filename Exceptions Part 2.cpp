// Jack Ewing
// CIS 1202
// August 2, 2025

#include <iomanip>
#include <iostream>
using namespace std;
template <typename H>
H half(H val1)
{
    return val1 / 2;
}

int half(int val1) {
    return static_cast<int>(round(val1 / 2.0));
}

int main()
{
    float a = 13.2f;
    double b = 7.8;
    int c = 9;

    cout << fixed << setprecision(2);
    cout << "Half of float (13.2): " << half(a) << endl;
    cout << "Half of double (7.8): " << half(b) << endl;
    cout << "Half of int (9): " << half(c) << endl;

}

