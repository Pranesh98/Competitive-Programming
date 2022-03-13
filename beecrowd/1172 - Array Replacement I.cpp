#include<iostream>
using namespace std;
int main()
{
    int x[10];

    for (int i = 0; i < 10; i++){
        cin >> x[i];
    }

    for (int j = 0; j < 10; j++){

        if (x[j] > 0){
            cout << "X[" << j <<"] = " << x[j] << endl;
        }
        else if (x[j] == 0 || x[j] < 0) {
            cout << "X[" << j << "] = " << 1 << endl;
        }
    }

    return 0;
}
