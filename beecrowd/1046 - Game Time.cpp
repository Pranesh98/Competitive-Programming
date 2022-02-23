#include<iostream>
using namespace std;
int main()
{
    int a, b, t;
    // Input starting time = a & ending time = b.
    cin >> a >> b;
  
    if (a == b){
        t = 24;
    }
    else if (a >= 12 && b < 12){
        t = (24 - a) + b;
    }
    else if (a < 12 && b >= 12) {
        t = (b - 12) + (12 - a);
    }
    else {
        // small small.
        // big big.
        if (a < b) {
            t = b - a;
        }
        else if (a > b) {
            t = (12 - a) + b;
        }
    }
    cout << "O JOGO DUROU " << t <<" HORA(S)" << endl;
  
    return 0;
}
