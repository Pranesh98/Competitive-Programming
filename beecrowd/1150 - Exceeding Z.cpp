/*_____________________________

For testing:
        Input: 21, 21, 15, 30
Hint:
        x and y: 21, 30
        Step: 2
        Sum : 43
______________________________*/

#include<iostream>
using namespace std;
int main()
{
    int x, z, sum = 0, count = 0;

    cin >> x;     // Input.
    cin >> z;     // Input.

    for (int i = 0; i < 10000; i++){
        // 'z' checked the Specification.
        if (z <= x){
            cin >> z;
        }
        else {
            break;
        }
    }
    while (x <= z){
        if (sum < z){
            sum = sum + x;
            count++;
            x++;
        }
        else {
            break;
        }

    }
    cout << count << endl;

    return 0;
}
