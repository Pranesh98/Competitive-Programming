#include<iostream>
using namespace std;

int main()
{
    int x, y, sum = 0;

    cin >> x >> y;    // Input.

    if (y > x){
      for (int i = x; i <= y; i++){
        // If i not divisible by 13.
        if (i % 13 != 0){
            sum = sum + i;    // Sum of i (not divisible by 13)
        }
      }
    }
    else{
      for (int i = y; i <= x; i++){
        if (i % 13 != 0){
            sum = sum + i;
        }
      }
    }
    cout << sum << endl;

    return 0;
}



