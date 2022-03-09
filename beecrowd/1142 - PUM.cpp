#include<iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;     // Input.

    int length = n * 4;

    for (int i = 0; i < length; ){

        for (int j = 1; j <= 4; j++){
            // Before increment.
            i++;

            if (j <= 3){
                cout << i << " ";
            }
            else {
                cout << "PUM" << endl;    // 4th term is PUM
            }
        }
    }
    return 0;
}
