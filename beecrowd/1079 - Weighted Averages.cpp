#include<iostream>
#include <iomanip>   // This Header file for fixing the decimal point.

using namespace std;
int main()
{
    int n;
    double a, b, c, avg;
    // Input Test Case.
    cin >> n;

    for (int i=0; i<n; i++){

        // Input All Test Cases.
        cin >> a >> b >> c;

        avg = (a*2 + b*3 + c*5) / 10;      // Average calculate part.

        // We have to print one decimal point after the decimal point.
        cout << fixed << setprecision(1) << avg << endl;
    }

    return 0;
}
