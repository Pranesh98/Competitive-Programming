#include<iostream>
using namespace std;

int main()
{
    int n, x, y;   // x = starting limit, y = total digits.
    // Input Test case.
    cin >> n;

    for(int i = 1; i <= n; i++){
        
        int count=0, sum = 0;
        cin >> x >> y;

        for (int j = x; j < 100000; j++){

            // odd checking.
            if (j % 2 != 0 && count < y){
                sum = sum + j;
                count++;
            }
            if (count > y) {
                break;
            }
        }
        cout << sum << endl;
    }

    return 0;
}
