#include<iostream>
using namespace std;
int main()
{
    int ara[100];

    for (int i = 0; i< 100; i++){
        cin >> ara[i];
    }
    
    // Assign the maximum value. 
    // Index used for max value indexing. 
    int max = 0, index = 0;

    for (int i=0; i<100; i++){
        if (max < ara[i]){
            max = ara[i];
            index = i;
        }
    }
    cout << max << endl;
    cout << (index+1) << endl;

    return 0;
}
