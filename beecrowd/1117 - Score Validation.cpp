#include<iostream>
#include <iomanip>
using namespace std;

int main()
{
    double n, sum = 0, ans;
    int count = 0;

    for (int i=1; i<100000; i++){
        // After input 2 valid scores. It will break.
        if (count == 2){
            break;
        }

        // Input Number:
        cin >> n;

        if (n >= 0 && n <= 10){
            count++;
            sum = sum + n;
        }
        else {
            cout << "nota invalida" << endl;
        }
    }

    ans = sum / 2.00;
    cout << fixed << setprecision(2) << "media = " << ans << endl;

    return 0;
}
