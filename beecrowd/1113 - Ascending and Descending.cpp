#include<iostream>
using namespace std;
int main()
{
    int x, y;

    for (int i = 1; i < 100000; i++){
        cin >> x >> y;     // Input.

        if (x == y){
            break;       // When x = y. Then stop the loop.
        }
        else if (x > y){
            cout << "Decrescente";
        }
        else if (x < y) {
            cout << "Crescente";
        }
        cout << "\n";
    }
    
    return 0;
}
