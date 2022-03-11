#include<iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++){
        // i value then square of i then cube of i.
        cout << i << " " << i*i << " " << i*i*i << endl;
    }
    
    return 0;
}
