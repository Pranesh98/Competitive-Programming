#include<iostream>
using namespace std;
int main ()
{
    int n, first = 0, second = 1, sum = 0;

    cin >> n;  // input the N.

    for (int i = 0; i < n; i++){
        sum = first + second;

        cout << first;

        // This if for gaping " ".
        if (i < n - 1){
            cout << " ";
        }

        first = second;
        second = sum;
    }

    cout << "\n";

    return 0;
}
