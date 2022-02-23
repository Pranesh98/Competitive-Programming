#include<iostream>
using namespace std;
int main()
{
    double i=0, j, sum = 0;

    while (i <= 2){
        for (j = 1; j <= 3; j++){
            
            sum = j + i;
            cout << "I=" << i << " ";
            cout << "J=" << sum << endl;
        }
        i = i + 0.2;
    }
    return 0;
}
