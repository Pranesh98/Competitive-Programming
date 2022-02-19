#include<iostream>
using namespace std;
int main()
{
    int k, n, w, sum = 0, money;
    
    // Input cases.
    cin >> k >> n >> w;
 
    for (int i=0; i<=w; i++){
        // total money he have to need.
        sum = sum + i * k;
    }
    money = sum - n;   // borrowed money.
    
    if (money < 0){
        cout << "0";   // If not borrowed.
    }
    else {
        cout << money;
    }
 
    return 0;
}
