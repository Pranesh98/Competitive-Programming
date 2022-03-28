#include<iostream>
using namespace std;
int main ()
{
    int arr[10];
    int v;
    cin >> v;

    for (int i=0; i<10; i++){
            arr[i] = v;
            cout << "N[" << i << "] = " << arr[i] << endl;
            v = v*2;
    }
    return 0;
}
