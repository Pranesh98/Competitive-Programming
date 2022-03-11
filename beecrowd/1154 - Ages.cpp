#include<iostream>
#include <iomanip>
using namespace std;
int main()
{
    int n, sum = 0, i;

    for (i = 1; i <= 100000; i++){
        cin >> n;           // input.

        if (n >= 0){
            sum = sum + n;  // Total Sum.
        }
        else {
            break;          // If I get negative value.
        }
    }
    double avg = (double)sum / (double)(i-1);

    cout << fixed << setprecision(2) << avg << endl;      // Printing 2 digit after decimal point.

    return 0;
}
