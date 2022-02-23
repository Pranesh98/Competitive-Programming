#include <iostream>
using namespace std;
int main()
{
    int n, x;
    // Input.
    cin >> n;

    for (int i = 1; i <= n; i++){
        // Input Test cases.
        cin >> x;

        // Conditions.
        if (x == 0){
            cout << "NULL";
        }
        else if (x % 2 == 0){
            cout << "EVEN ";
        }
        else if (x % 2 != 0) {
            cout << "ODD ";
        }

        if (x > 0 && x != 0){
            cout << "POSITIVE";
        }
        else if (x < 0 && x != 0) {
            cout << "NEGATIVE";
        }
        cout << "\n";
    }

    return 0;
}
